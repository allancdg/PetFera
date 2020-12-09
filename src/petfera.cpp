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
    bool true_false = false;//Utilizado para toda manipulação booleana [cadastrar]
    int cin_int;            //Utilizado para toda entrada de int variavel [cadastrar]
    int cin_int_classe;     //Utilizado para opção do cadastramento das classes
    int cin_int_tipo;       //Utilizado para opção do cadastramento dos tipos
    string cin_string;      //Utilizado para toda entrada de string variavel [cadastrar]

    if(this->capacidade < CAPACIDADE_MAX){
        cout << "Cadastramento animal: " << endl << "=========" << endl;
        // ================================================================ //

        cout << "Anfibio(1)\tAve(2)" << endl << "Mamifero(3)\tReptil(4)" << endl << "=========" << endl;
        cout << "Digite o numero correspondente a classe: ";
        while(true_false == false){
            cin >> cin_int_classe;

            if( cin_int_classe == 1 ){
                cout << endl << "Nativo(1)\tExotico(2)" << endl << "=========" << endl;
                cout << "Digite o numero correspondente ao tipo: ";
                while(true_false == false){
                    cin >> cin_int_tipo;

                    if( cin_int_tipo == 1) { AnfibioNativo* novoAnimal = new AnfibioNativo();
                        novoAnimal->set_id(this->count_id_animal++); //ID cadastrado automaticamente (0, 1, 2, ++)
                        novoAnimal->set_classe("Anfibio");
                        true_false = true;

                        // ================================================================ //

                        novoAnimal->cadastrarAnfibioNativo();

                        // ================================================================ //

                        cout << "=========" << endl;
                        cout << "Veterinários disponíveis: " << endl;
                        listarVeterinarios();
                        cout << "Digite o id correspondente ao veterinário: ";
                        cin >> cin_int;
                        Veterinario* vet = buscaVeterinarioPorId(cin_int);

                        if(vet){
                            novoAnimal->set_veterinario(vet);
                        }

                        // ================================================================ //

                        cout << "=========" << endl;
                        cout << "Tratadores disponíveis: " << endl;
                        listarTratadores();
                        cout << "Digite o id correspondente ao tratador: ";
                        cin >> cin_int;
                        Tratador* tratador = buscaTratadorPorId(cin_int);

                        if(tratador){
                            novoAnimal->set_tratador(tratador);
                        }
                        // ================================================================ //

                        animais[this->capacidade++] = novoAnimal;
                    }

                    else if( cin_int_tipo == 2) { AnfibioExotico* novoAnimal = new AnfibioExotico();
                        novoAnimal->set_id(this->count_id_animal++); //ID cadastrado automaticamente (0, 1, 2, ++)
                        novoAnimal->set_classe("Anfibio");
                        true_false = true;

                        // ================================================================ //

                        novoAnimal->cadastrarAnfibioExotico();

                        // ================================================================ //

                        cout << "=========" << endl;
                        cout << "Veterinários disponíveis: " << endl;
                        listarVeterinarios();
                        cout << "Digite o id correspondente ao veterinário: ";
                        cin >> cin_int;
                        Veterinario* vet = buscaVeterinarioPorId(cin_int);

                        if(vet){
                            novoAnimal->set_veterinario(vet);
                        }

                        // ================================================================ //

                        cout << "=========" << endl;
                        cout << "Tratadores disponíveis: " << endl;
                        listarTratadores();
                        cout << "Digite o id correspondente ao tratador: ";
                        cin >> cin_int;
                        Tratador* tratador = buscaTratadorPorId(cin_int);

                        if(tratador){
                            novoAnimal->set_tratador(tratador);
                        }
                        animais[this->capacidade++] = novoAnimal;
                    }
                }
            }

            else if( cin_int_classe == 2 ){
                    cout << endl << "Nativo(1)\tExotico(2)" << endl << "=========" << endl;
                    cout << "Digite o numero correspondente ao tipo: ";
                    while(true_false == false){
                        cin >> cin_int_tipo;

                        if(cin_int_tipo == 1){AveNativo* novoAnimal = new AveNativo();
                            novoAnimal->set_id(this->count_id_animal++); //ID cadastrado automaticamente (0, 1, 2, ++)
                            novoAnimal->set_classe("Ave");
                            true_false = true;

                            // ================================================================ //

                            novoAnimal->cadastrarAveNativo();

                            // ================================================================ //
                            animais[this->capacidade++] = novoAnimal;
                        }

                        else if(cin_int_tipo == 2){AveExotico* novoAnimal = new AveExotico();
                                novoAnimal->set_id(this->count_id_animal++); //ID cadastrado automaticamente (0, 1, 2, ++)
                                novoAnimal->set_classe("Ave");
                                true_false = true;

                                // ================================================================ //

                                novoAnimal->cadastrarAveExotico();

                                // ================================================================ //

                                cout << "=========" << endl;
                                cout << "Veterinários disponíveis: " << endl;
                                listarVeterinarios();
                                cout << "Digite o id correspondente ao veterinário: ";
                                cin >> cin_int;
                                Veterinario* vet = buscaVeterinarioPorId(cin_int);

                                if(vet){
                                    novoAnimal->set_veterinario(vet);
                                }

                                // ================================================================ //

                                cout << "=========" << endl;
                                cout << "Tratadores disponíveis: " << endl;
                                listarTratadores();
                                cout << "Digite o id correspondente ao tratador: ";
                                cin >> cin_int;
                                Tratador* tratador = buscaTratadorPorId(cin_int);

                                if(tratador){
                                    novoAnimal->set_tratador(tratador);
                                }
                                animais[this->capacidade++] = novoAnimal;
                            }
                    }
            }

            else if( cin_int_classe == 3 ){
                    cout << endl << "Nativo(1)\tExotico(2)" << endl << "=========" << endl;
                    cout << "Digite o numero correspondente ao tipo: ";
                    while(true_false == false){
                        cin >> cin_int_tipo;

                        if(cin_int_tipo == 1){MamiferoNativo* novoAnimal = new MamiferoNativo();
                            novoAnimal->set_id(this->count_id_animal++); //ID cadastrado automaticamente (0, 1, 2, ++)
                            novoAnimal->set_classe("Mamifero");
                            true_false = true;

                            // ================================================================ //

                            novoAnimal->cadastrarMamiferoNativo();

                            // ================================================================ //

                            cout << "=========" << endl;
                            cout << "Veterinários disponíveis: " << endl;
                            listarVeterinarios();
                            cout << "Digite o id correspondente ao veterinário: ";
                            cin >> cin_int;
                            Veterinario* vet = buscaVeterinarioPorId(cin_int);

                            if(vet){
                                novoAnimal->set_veterinario(vet);
                            }

                            // ================================================================ //

                            cout << "=========" << endl;
                            cout << "Tratadores disponíveis: " << endl;
                            listarTratadores();
                            cout << "Digite o id correspondente ao tratador: ";
                            cin >> cin_int;
                            Tratador* tratador = buscaTratadorPorId(cin_int);

                            if(tratador){
                                novoAnimal->set_tratador(tratador);
                            }
                            animais[this->capacidade++] = novoAnimal;
                        }

                        else if(cin_int_tipo == 2){MamiferoExotico* novoAnimal = new MamiferoExotico();
                            novoAnimal->set_id(this->count_id_animal++); //ID cadastrado automaticamente (0, 1, 2, ++)
                            novoAnimal->set_classe("Mamifero");
                            true_false = true;

                            // ================================================================ //

                            novoAnimal->cadastrarMamiferoExotico();

                            // ================================================================ //

                            cout << "=========" << endl;
                            cout << "Veterinários disponíveis: " << endl;
                            listarVeterinarios();
                            cout << "Digite o id correspondente ao veterinário: ";
                            cin >> cin_int;
                            Veterinario* vet = buscaVeterinarioPorId(cin_int);

                            if(vet){
                                novoAnimal->set_veterinario(vet);
                            }

                            // ================================================================ //

                            cout << "=========" << endl;
                            cout << "Tratadores disponíveis: " << endl;
                            listarTratadores();
                            cout << "Digite o id correspondente ao tratador: ";
                            cin >> cin_int;
                            Tratador* tratador = buscaTratadorPorId(cin_int);

                            if(tratador){
                                novoAnimal->set_tratador(tratador);
                            }
                            animais[this->capacidade++] = novoAnimal;
                        }
                    }
                }

            else if( cin_int_classe == 4 ){
                    cout << endl << "Nativo(1)\tExotico(2)" << endl << "=========" << endl;
                    cout << "Digite o numero correspondente ao tipo: ";
                    while(true_false == false){
                        cin >> cin_int_tipo;

                        if(cin_int_tipo == 1){ ReptilNativo* novoAnimal = new ReptilNativo();
                            novoAnimal->set_id(this->count_id_animal++); //ID cadastrado automaticamente (0, 1, 2, ++)
                            novoAnimal->set_classe("Reptil");
                            true_false = true;

                            // ================================================================ //

                            novoAnimal->cadastrarReptilNativo();

                            // ================================================================ //

                            cout << "=========" << endl;
                            cout << "Veterinários disponíveis: " << endl;
                            listarVeterinarios();
                            cout << "Digite o id correspondente ao veterinário: ";
                            cin >> cin_int;
                            Veterinario* vet = buscaVeterinarioPorId(cin_int);

                            if(vet){
                                novoAnimal->set_veterinario(vet);
                            }

                            // ================================================================ //

                            cout << "=========" << endl;
                            cout << "Tratadores disponíveis: " << endl;
                            listarTratadores();
                            cout << "Digite o id correspondente ao tratador: ";
                            cin >> cin_int;
                            Tratador* tratador = buscaTratadorPorId(cin_int);

                            if(tratador){
                                novoAnimal->set_tratador(tratador);
                            }
                            animais[this->capacidade++] = novoAnimal;
                    }

                    else if(cin_int_tipo == 2){ ReptilExotico* novoAnimal = new ReptilExotico();
                            novoAnimal->set_id(this->count_id_animal++); //ID cadastrado automaticamente (0, 1, 2, ++)
                            novoAnimal->set_classe("Reptil");
                            true_false = true;

                            // ================================================================ //

                            novoAnimal->cadastrarReptilExotico();

                            // ================================================================ //

                            cout << "=========" << endl;
                            cout << "Veterinários disponíveis: " << endl;
                            listarVeterinarios();
                            cout << "Digite o id correspondente ao veterinário: ";
                            cin >> cin_int;
                            Veterinario* vet = buscaVeterinarioPorId(cin_int);

                            if(vet){
                                novoAnimal->set_veterinario(vet);
                            }

                            // ================================================================ //

                            cout << "=========" << endl;
                            cout << "Tratadores disponíveis: " << endl;
                            listarTratadores();
                            cout << "Digite o id correspondente ao tratador: ";
                            cin >> cin_int;
                            Tratador* tratador = buscaTratadorPorId(cin_int);

                            if(tratador){
                                novoAnimal->set_tratador(tratador);
                            }

                            animais[this->capacidade++] = novoAnimal;
                        }
                    }
                }
            }
    }
    else{ cout << "Você não pode cadastrar mais animais. Capacidade esgotada! "; }
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
                novoVeterinario->set_cargo("Veterinario");

                novoVeterinario->set_id(this->count_id_profissional++); //ID cadastrado automaticamente (0, 1, 2, ++)
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
                novoTratador->set_id(this->count_id_profissional++); //ID cadastrado automaticamente (0, 1, 2, ++)
                novoTratador->set_cargo("Tratador");
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
Petfera::removerAnimal(){
    int remocao;

    listarTodosAnimais();

    cout << endl << "Digite o ID do animal que deseja apagar: ";
    cin >> remocao;

    cout << "EM CONSTRUCAO! "<< endl;
    //FALTANDO REALIZAR CORREÇÃO DO VETOR DE ANIMAIS
}

void
Petfera::listarTodosAnimais(){
    if(this->capacidade <= 0){ cout << "Nao tem nenhum animal cadastrado!" << endl; }
    else{
        cout << "ID\tNOME\t\t\tSEXO\tCLASSE\t\tVETERINARIO\t\tTRATADOR" << endl;
        for(int i=0; i < this->capacidade; i++){
            cout << *animais[i] << endl; //cout utilizando sobrecarga de operadores
        }
    }
}

void
Petfera::listarAnfibios(){
    if(this->capacidade <= 0){ cout << "Nao tem nenhum animal cadastrado!" << endl; }
    else{
        cout << "ID\tNOME\t\t\tNOME BATISMO\t\t\tSEXO\tCLASSE\t\tVETERINARIO\t\tTRATADOR" << endl;
        for(int i=0; i < this->capacidade; i++){
            if(animais[i]->get_classe() == "Anfibio"){
                cout << *animais[i] << endl; //cout utilizando sobrecarga de operadores
            }
        }
    }
}

void
Petfera::listarAves(){
    if(this->capacidade <= 0){ cout << "Nao tem nenhum animal cadastrado!" << endl; }
    else{
        cout << "ID\tNOME\t\t\tNOME BATISMO\t\t\tSEXO\tCLASSE\t\tVETERINARIO\t\tTRATADOR" << endl;
        for(int i=0; i < this->capacidade; i++){
            if(animais[i]->get_classe() == "Ave"){
                cout << *animais[i] << endl; //cout utilizando sobrecarga de operadores
            }
        }
    }
}

void
Petfera::listarMamiferos(){
    if(this->capacidade <= 0){ cout << "Nao tem nenhum animal cadastrado!" << endl; }
    else{
        cout << "ID\tNOME\t\t\tNOME BATISMO\t\t\tSEXO\tCLASSE\t\tVETERINARIO\t\tTRATADOR" << endl;
        for(int i=0; i < this->capacidade; i++){
            if(animais[i]->get_classe() == "Mamifero"){
                cout << *animais[i] << endl; //cout utilizando sobrecarga de operadores
            }
        }
    }
}

void
Petfera::listarRepteis(){
    if(this->capacidade <= 0){ cout << "Nao tem nenhum animal cadastrado!" << endl; }
    else{
        cout << "ID\tNOME\t\t\tNOME BATISMO\t\t\tSEXO\tCLASSE\t\tVETERINARIO\t\tTRATADOR" << endl;
        for(int i=0; i < this->capacidade; i++){
            if(animais[i]->get_classe() == "Reptil"){
                cout << *animais[i] << endl; //cout utilizando sobrecarga de operadores
            }
        }
    }
}

void
Petfera::listarTodosProfissionais(){
    if(this->capacidade_profissionais <= 0){
        cout << "Ainda não existem profissionais cadastrados!" << endl;
    }

    else{
        cout << "ID\tNOME\t\tSEXO" << endl;
        for(int i=0; i < this->capacidade_profissionais; i++){ //talvez ++i
            cout << profissionais[i]->get_id() << "\t" << profissionais[i]->get_nome() << "\t\t" <<
                profissionais[i]->get_sexo() << "\t" << endl;
        }
    }
}

void
Petfera::listarTratadores(){
    if(this->capacidade_profissionais <= 0){
        cout << "Ainda não existem profissionais cadastrados!" << endl;
    }

    else{
        string str_tratador = "Tratador";

        cout << "ID\tNOME\t\tSEXO\tNIVEL SEGURANCA" << endl;
        for(int i=0; i < this->capacidade_profissionais; i++){ //talvez ++i

            if (str_tratador.compare(profissionais[i]->get_cargo()) == 0) {

                // Downcasting para visualização de dados que são somente da classe Tratador
                Tratador* trat = static_cast<Tratador*> (profissionais[i]);

                cout << trat->get_id() << "\t" << trat->get_nome() << "\t\t" <<
                trat->get_sexo() << "\t" << trat->get_nivel_seguranca() << endl;

            }

        }
    }
}


void Petfera::listarVeterinarios() {

    if(this->capacidade_profissionais <= 0){
        cout << "Ainda não existem profissionais cadastrados!" << endl;
    }

    else{
        string str_tratador = "Veterinario";

        cout << "ID\tNOME\t\tSEXO\tCRMV" << endl;
        for(int i=0; i < this->capacidade_profissionais; i++){ //talvez ++i

            if (str_tratador.compare(profissionais[i]->get_cargo()) == 0) {

                // Downcasting para visualização de dados que são somente da classe Veterinário
                Veterinario* vet = static_cast<Veterinario*> (profissionais[i]);

                cout << vet->get_id() << "\t" << vet->get_nome() << "\t\t" <<
                vet->get_sexo() << "\t" << vet->get_crmv() << endl;

            }
        }
    }
}

void Petfera::lerAnimais(){}

void Petfera::escreverAnimais(){
    ofstream arqDados("dados.dat");
    for(int i=0; i<this->capacidade; i++){
        arqDados << animais[i]->get_id() <<"; "<< animais[i]->get_nome_batismo() << "; "<< animais[i]->get_nome() <<"; "<<
        animais[i]->get_nome_cientifico() << "; "<< animais[i]->get_sexo() <<"; "<< animais[i]->get_classe() <<"; " <<
        animais[i]->get_tamanho() <<"; "<< animais[i]->get_dieta() << endl;
    }
}

Veterinario*
Petfera::buscaVeterinarioPorId(int id){
    Veterinario* vet = nullptr;

    if(this->capacidade_profissionais <= 0){
        cout << "Ainda não existem profissionais cadastrados!" << endl;
    }

    else{
        for(int i=0; i < this->capacidade_profissionais; i++){ //talvez ++i
            if (id == profissionais[i]->get_id()) {
                vet = static_cast<Veterinario*> (profissionais[i]);
            }

            else if (i == this->capacidade_profissionais - 1 && vet == nullptr){
                cout << "Não existe um profissinal cadastrado com o id informado!" << endl;
            }
        }
    }

    return vet;
}

Tratador*
Petfera::buscaTratadorPorId(int id){
    Tratador* tratador = nullptr;

    if(this->capacidade_profissionais <= 0){
        cout << "Ainda não existem profissionais cadastrados!" << endl;
    }

    else{
        for(int i=0; i < this->capacidade_profissionais; i++){ //talvez ++i
            if (id == profissionais[i]->get_id()) {
                tratador = static_cast<Tratador*> (profissionais[i]);
            }

            else if (i == this->capacidade_profissionais - 1 && tratador == nullptr){
                cout << "Não existe um profissinal cadastrado com o id informado!" << endl;
            }
        }
    }

    return tratador;
}

