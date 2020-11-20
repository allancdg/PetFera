#include "petfera.hpp"
#include <iostream>

using namespace std;

Petfera::Petfera(){}
Petfera::~Petfera(){}

void
Petfera::cadastrarAnimal(){
    bool true_false = false;//Utilizado para toda manipulação booleana [cadastrar]
    int cin_int;            //Utilizado para toda entrada de int variável [cadastrar]
    string cin_string;      //Utilizado para toda entrada de string variável [cadastrar]
    char cin_char;          //Utilizado para toda entrada de char variável [cadastrar]
    float cin_float;        //Utilizado para toda entrada de float variável [cadastrar]

    if(this->capacidade < CAPACIDADE_MAX){
        cout << " ## CADASTRAMENTO ## " << endl << endl;
        Animal* animalCriado = new Animal();    //Criação de novo ponteiro para class Animal

        cout << "ID do animal: " << this->count_id << endl;
        animalCriado->set_id(this->count_id++); //ID cadastrado automaticamente (0, 1, 2, ++)

        cout << "Digite o nome popular do animal: ";
        cin >> cin_string;
        animalCriado->set_nome(cin_string);

        cout << "Anfibio(1)\tAve(2)" << endl << "Mamifero(3)\tReptil(4)" << endl;
        cout << "Digite o numero referente a classe do animal: ";
        while(true_false == false){
            cin >> cin_int;
            if( cin_int == 1){ animalCriado->set_classe("Anfibio"); true_false = true;}
            else if (cin_int == 2) { animalCriado->set_classe("Ave"); true_false = true;}
            else if (cin_int == 3) { animalCriado->set_classe("Mamifero"); true_false = true;}
            else if (cin_int == 4) { animalCriado->set_classe("Reptil"); true_false = true;}
            else { cout << "Opcao invalida, tente novamente: "; }
        }

        cout << "Digite o sexo do animal: ";
        cin >> cin_char;
        animalCriado->set_sexo(cin_char);

        cout << "Digite o tamanho, em metros, do animal: ";
        cin >> cin_float;
        animalCriado->set_tamanho(cin_float);

        animais[this->capacidade++] = animalCriado; //Adicionando o animal ao vetor de animais relacionado ao petfera
    }
    else { cout << "Nao e possivel cadastrar, capacidade maxima atingida." << endl; }
}

void
Petfera::removerAnimal(){}

void
Petfera::listarAnimal(){ //PROBLEMA DE TABELAMENTO
    if(this->capacidade <= 0){ cout << "Nao tem nenhum animal cadastrado!" << endl; }
    else{
        cout << "ID\tNOME\t\tSEXO\tCLASSE" << endl;
        for(int i=0; i < this->capacidade; i++){ //talvez ++i
            cout << animais[i]->get_id() << "\t" << animais[i]->get_nome() << "\t\t" << animais[i]->get_sexo()
                    << "\t" << animais[i]->get_classe() << endl;
        }
    }
}
