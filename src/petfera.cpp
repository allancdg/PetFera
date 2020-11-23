#include "petfera.hpp"
#include <iostream>

// Includes necessários para fazer a limpeza do buffer de entrada
#include <ios>
#include <limits>

using namespace std;

Petfera::Petfera(){}
Petfera::~Petfera(){}

void
Petfera::cadastrarAnimal(){
    bool true_false = false;//Utilizado para toda manipula��o booleana [cadastrar]
    int cin_int;            //Utilizado para toda entrada de int vari�vel [cadastrar]
    string cin_string;      //Utilizado para toda entrada de string vari�vel [cadastrar]
    char cin_char;          //Utilizado para toda entrada de char vari�vel [cadastrar]
    float cin_float;        //Utilizado para toda entrada de float vari�vel [cadastrar]

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
Petfera::cadastrarProfissional(){
    bool true_false = false;    //Utilizado para toda manipula��o booleana [cadastrar]
    int cin_int;                //Utilizado para toda entrada de int vari�vel [cadastrar]
    string cin_string;          //Utilizado para toda entrada de string vari�vel [cadastrar]
    char cin_char;              //Utilizado para toda entrada de char vari�vel [cadastrar]

    cout << "Cadastramento profissional: " << endl << "=========" << endl;
        // ================================================================ //

        cout << "Veterinário(1)\tTratador(2)" << endl << "=========" << endl;
        cout << "Digite o numero correspondente a classe: ";
        while(true_false == false){
            cin >> cin_int;

            if( cin_int == 1 ){ 
                Veterinario* novoVeterinario = new Veterinario();

                novoVeterinario->set_id(this->count_id++); //ID cadastrado automaticamente (0, 1, 2, ++)
                true_false = true;

                // ================================================================ //

                cout << "Digite o nome veterinário: ";
                cin >> cin_string;
                novoVeterinario->set_nome(cin_string);

                // ================================================================ //

                // Utilizado para limpar o buffer de entrada
                cin.ignore(numeric_limits<streamsize>::max(), '\n');

                cout << "Digite o CPF do veterinário: ";
                cin >> cin_string;
                novoVeterinario->set_cpf(cin_string);

                // ================================================================ //

                // Utilizado para limpar o buffer de entrada
                cin.ignore(numeric_limits<streamsize>::max(), '\n');

                cout << "Digite o telefone do veterinário: ";
                cin >> cin_string;
                novoVeterinario->set_telefone(cin_string);

                // ================================================================ //

                cout << "Digite o sexo do veterinário (M / F): ";
                cin >> cin_char;
                novoVeterinario->set_sexo(cin_char);

                // ================================================================ //

                cout << "Digite o CRMV do veterinário: ";
                cin >> cin_int;
                novoVeterinario->set_crmv(cin_int);

                // ================================================================ //

                profissionais[this->capacidade_profissionais++] = novoVeterinario;
            }
            else if( cin_int == 2 ){ 
                Tratador* novoTratador = new Tratador();
                
                novoTratador->set_id(this->count_id++); //ID cadastrado automaticamente (0, 1, 2, ++)
                true_false = true;

                // ================================================================ //

                cout << "Digite o nome do tratador: ";
                cin >> cin_string;
                novoTratador->set_nome(cin_string);

                // ================================================================ //

                // Utilizado para limpar o buffer de entrada
                cin.ignore(numeric_limits<streamsize>::max(), '\n');

                cout << "Digite o CPF do tratador: ";
                cin >> cin_string;
                novoTratador->set_cpf(cin_string);

                // ================================================================ //

                // Utilizado para limpar o buffer de entrada
                cin.ignore(numeric_limits<streamsize>::max(), '\n');

                cout << "Digite o telefone do tratador: ";
                cin >> cin_string;
                novoTratador->set_telefone(cin_string);

                // ================================================================ //

                cout << "Digite o sexo do tratador (M / F): ";
                cin >> cin_char;
                novoTratador->set_sexo(cin_char);

                // ================================================================ //

                cout << "Digite o nível de segurança do tratador: (R / G / B)";
                cin >> cin_char;
                novoTratador->set_nivel_seguranca(cin_char);

                profissionais[this->capacidade_profissionais++] = novoTratador;
            }
        }
}

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
