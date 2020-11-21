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
        cout << "Cadastramento animal: " << endl << "=========" << endl;
        // ================================================================ //

        cout << "Anfibio(1)\tAve(2)" << endl << "Mamifero(3)\tReptil(4)" << endl << "=========" << endl;
        cout << "Digite o numero correspondente a classe: ";
        while(true_false == false){
            cin >> cin_int;

            if( cin_int == 1 ){ Anfibio* novoAnimal = new Anfibio();
                novoAnimal->set_id(this->count_id++); //ID cadastrado automaticamente (0, 1, 2, ++)
                novoAnimal->set_classe("Anfibio");
                true_false = true;

                // ================================================================ //

                cout << "Digite o nome popular do animal: ";
                cin >> cin_string;
                novoAnimal->set_nome(cin_string);

                // ================================================================ //

                cout << "Digite o sexo do animal (M / F): ";
                cin >> cin_char;
                novoAnimal->set_sexo(cin_char);

                // ================================================================ //

                cout << "Digite o tamanho, em metros, do animal: ";
                cin >> cin_float;
                novoAnimal->set_tamanho(cin_float);

                // ================================================================ //

                animais[this->capacidade++] = novoAnimal;
            }
            else if( cin_int == 2 ){ Ave* novoAnimal = new Ave();
                    novoAnimal->set_id(this->count_id++); //ID cadastrado automaticamente (0, 1, 2, ++)
                    novoAnimal->set_classe("Ave");
                    true_false = true;

                    // ================================================================ //

                    cout << "Digite o nome popular do animal: ";
                    cin >> cin_string;
                    novoAnimal->set_nome(cin_string);

                    // ================================================================ //

                    cout << "Digite o sexo do animal (M / F): ";
                    cin >> cin_char;
                    novoAnimal->set_sexo(cin_char);

                    // ================================================================ //

                    cout << "Digite o tamanho, em metros, do animal: ";
                    cin >> cin_float;
                    novoAnimal->set_tamanho(cin_float);

                    // ================================================================ //

                    animais[this->capacidade++] = novoAnimal;
            }
            else if( cin_int == 3 ){ Mamifero* novoAnimal = new Mamifero();
                    novoAnimal->set_id(this->count_id++); //ID cadastrado automaticamente (0, 1, 2, ++)
                    novoAnimal->set_classe("Mamifero");
                    true_false = true;

                    // ================================================================ //

                    cout << "Digite o nome popular do animal: ";
                    cin >> cin_string;
                    novoAnimal->set_nome(cin_string);

                    // ================================================================ //

                    cout << "Digite o sexo do animal (M / F): ";
                    cin >> cin_char;
                    novoAnimal->set_sexo(cin_char);

                    // ================================================================ //

                    cout << "Digite o tamanho, em metros, do animal: ";
                    cin >> cin_float;
                    novoAnimal->set_tamanho(cin_float);

                    // ================================================================ //

                    animais[this->capacidade++] = novoAnimal;
            }
            else if( cin_int == 4 ){ Reptil* novoAnimal = new Reptil();
                    novoAnimal->set_id(this->count_id++); //ID cadastrado automaticamente (0, 1, 2, ++)
                    novoAnimal->set_classe("Reptil");
                    true_false = true;

                    // ================================================================ //

                    cout << "Digite o nome popular do animal: ";
                    cin >> cin_string;
                    novoAnimal->set_nome(cin_string);

                    // ================================================================ //

                    cout << "Digite o sexo do animal (M / F): ";
                    cin >> cin_char;
                    novoAnimal->set_sexo(cin_char);

                    // ================================================================ //

                    cout << "Digite o tamanho, em metros, do animal: ";
                    cin >> cin_float;
                    novoAnimal->set_tamanho(cin_float);

                    // ================================================================ //

                    animais[this->capacidade++] = novoAnimal;
            }
        }
    }
}

void
Petfera::cadastrarProfissional(){}

void
Petfera::removerAnimal(){}

void
Petfera::listarTodosAnimais(){
    if(this->capacidade <= 0){ cout << "Nao tem nenhum animal cadastrado!" << endl; }
    else{
        cout << "ID\tNOME\t\tSEXO\tCLASSE" << endl;
        for(int i=0; i < this->capacidade; i++){ //talvez ++i
            cout << animais[i]->get_id() << "\t" << animais[i]->get_nome() << "\t\t" << animais[i]->get_sexo()
                    << "\t" << animais[i]->get_classe() << endl;
        }
    }
}

void
Petfera::listarProfissional(){}
