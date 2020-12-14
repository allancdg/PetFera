#include "petfera.hpp"
#include <iostream>
#include <sstream>

// Includes necessários para fazer a limpeza do buffer de entrada
#include <ios>
#include <limits>

using namespace std;

Petfera::Petfera(){}
Petfera::~Petfera(){}

void
Petfera::cadastrarAnimal(){
    bool true_false = false;//Utilizado para toda manipulação booleana [cadastrar]
    int cin_int = 0;            //Utilizado para toda entrada de int variavel [cadastrar]
    int cin_int_classe = 0;     //Utilizado para opção do cadastramento das classes
    int cin_int_tipo = 0;       //Utilizado para opção do cadastramento dos tipos
    string cin_string;      //Utilizado para toda entrada de string variavel [cadastrar]
    float cin_float = 0;        //Utilizado para toda entrada de float variavel [cadastrar]
    char cin_char;          //Utilizado para toda entrada de char variavel [cadastrar]

    if(this->capacidade < CAPACIDADE_MAX){
        cout << "Cadastramento animal: " << endl << "=========" << endl;

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
                        cout << "=========" << endl
                             << "Digite um nome (de batismo) para o animal (ALLAN_CHRISTIAN): ";
                        cin >> cin_string;
                        novoAnimal->set_nome_batismo(cin_string);
                        // ================================================================ //
                        cout << "=========" << endl
                             << "Digite um nome popular do animal (TUBARAO_BRANCO): ";
                        cin >> cin_string;
                        novoAnimal->set_nome(cin_string);
                        // ================================================================ //
                        cout << "=========" << endl
                             << "Digite um nome cientifico do animal (CARCHARODON_CARCHARIAS): ";
                        cin >> cin_string;
                        novoAnimal->set_nome_cientifico(cin_string);
                        // ================================================================ //
                        cout << "=========" << endl
                             << "Digite a dieta predominante do animal('Carne', 'planta', 'misto'...): ";
                        cin >> cin_string;
                        novoAnimal->set_dieta(cin_string);
                        // ================================================================ //
                        cout << "=========" << endl
                             << "Digite o sexo do animal (M / F): ";
                        cin >> cin_char;
                        novoAnimal->set_sexo(cin_char);
                        // ================================================================ //
                        cout << "=========" << endl
                             << "Digite o tamanho, em metros, do animal ('3.28'): ";
                        cin >> cin_float;
                        novoAnimal->set_tamanho(cin_float);
                        // ================================================================ //
                        cout << "=========" << endl
                             << "Digite a quantidade de mudas de pele estimada do animal (CASO NAO TENHA - '0'): ";
                        cin >> cin_int;
                        novoAnimal->set_total_mudas(cin_int);
                        // ================================================================ //
                        cout << "=========" << endl
                             << "Digite a data da ultima muda (xx/yy/zz)(CASO NAO TENHA - '0'): ";
                        cin >> cin_string;
                        novoAnimal->set_data_ultima_muda(cin_string);
                        // ================================================================ //
                        cout << "=========" << endl
                             << "Digite o estado de origem do animal('RN', 'PB'...): ";
                        cin >> cin_string;
                        novoAnimal->set_estado_origem(cin_string);
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
                        cout << "=========" << endl
                             << "Digite um nome (de batismo) para o animal (ALLAN_CHRISTIAN): ";
                        cin >> cin_string;
                        novoAnimal->set_nome_batismo(cin_string);
                        // ================================================================ //
                        cout << "=========" << endl
                             << "Digite um nome popular do animal (TUBARAO_BRANCO): ";
                        cin >> cin_string;
                        novoAnimal->set_nome(cin_string);
                        // ================================================================ //
                        cout << "=========" << endl
                             << "Digite um nome cientifico do animal (CARCHARODON_CARCHARIAS): ";
                        cin >> cin_string;
                        novoAnimal->set_nome_cientifico(cin_string);
                        // ================================================================ //
                        cout << "=========" << endl
                             << "Digite a dieta predominante do animal('Carne', 'planta', 'misto'...): ";
                        cin >> cin_string;
                        novoAnimal->set_dieta(cin_string);
                        // ================================================================ //
                        cout << "=========" << endl
                             << "Digite o sexo do animal (M / F): ";
                        cin >> cin_char;
                        novoAnimal->set_sexo(cin_char);
                        // ================================================================ //
                        cout << "=========" << endl
                             << "Digite o tamanho, em metros, do animal ('3.28'): ";
                        cin >> cin_float;
                        novoAnimal->set_tamanho(cin_float);
                        // ================================================================ //
                        cout << "=========" << endl
                             << "Digite a quantidade de mudas de pele estimada do animal (CASO NAO TENHA - '0'): ";
                        cin >> cin_int;
                        novoAnimal->set_total_mudas(cin_int);
                        // ================================================================ //
                        cout << "=========" << endl
                             << "Digite a data da ultima muda (xx/yy/zz)(CASO NAO TENHA - '0'): ";
                        cin >> cin_string;
                        novoAnimal->set_data_ultima_muda(cin_string);
                        // ================================================================ //
                        cout << "=========" << endl
                             << "O animal encontra-se em extincao? (S / N) : ";
                        cin >> cin_char;
                        novoAnimal->set_extincao(cin_char);
                        // ================================================================ //
                        cout << "=========" << endl
                             << "O animal precisa de autorizacao do IBAMA para deslocamento? (S / N) : ";
                        cin >> cin_char;
                        novoAnimal->set_autorizacao_ibama(cin_char);
                        // ================================================================ //
                        cout << "=========" << endl
                             << "Digite o pais de origem do animal('BRASIL', 'ESTADOS_UNIDOS'...): ";
                        cin >> cin_string;
                        novoAnimal->set_pais_origem(cin_string);
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
                            cout << "=========" << endl
                                 << "Digite um nome (de batismo) para o animal (ALLAN_CHRISTIAN): ";
                            cin >> cin_string;
                            novoAnimal->set_nome_batismo(cin_string);
                            // ================================================================ //
                            cout << "=========" << endl
                                 << "Digite um nome popular do animal (BEIJA-FLORES): ";
                            cin >> cin_string;
                            novoAnimal->set_nome(cin_string);
                            // ================================================================ //
                            cout << "=========" << endl
                                 << "Digite um nome cientifico do animal (TROCHILIDAE): ";
                            cin >> cin_string;
                            novoAnimal->set_nome_cientifico(cin_string);
                            // ================================================================ //
                            cout << "=========" << endl
                                 << "Digite a dieta predominante do animal('Carne', 'planta', 'misto'...): ";
                            cin >> cin_string;
                            novoAnimal->set_dieta(cin_string);
                            // ================================================================ //
                            cout << "=========" << endl
                                 << "Digite o sexo do animal (M / F): ";
                            cin >> cin_char;
                            novoAnimal->set_sexo(cin_char);
                            // ================================================================ //
                            cout << "=========" << endl
                                 << "Digite o tamanho, em metros, do animal ('0.10'): ";
                            cin >> cin_float;
                            novoAnimal->set_tamanho(cin_float);
                            // ================================================================ //
                            cout << "=========" << endl
                                 << "Digite a cor da pena do animal: ";
                            cin >> cin_string;
                            novoAnimal->set_cor_penas(cin_string);
                            // ================================================================ //
                            cout << "=========" << endl
                                 << "Digite o tamanho do bico (em cm): ";
                            cin >> cin_int;
                            novoAnimal->set_tamanho_bico(cin_int);
                            // ================================================================ //
                            cout << "=========" << endl
                                 << "Digite o tamanho das pernas (em cm): ";
                            cin >> cin_int;
                            novoAnimal->set_tamanho_pernas(cin_int);
                            // ================================================================ //
                            cout << "=========" << endl
                                 << "Digite o estador de origem do animal('RN', 'PB'...): ";
                            cin >> cin_string;
                            novoAnimal->set_estado_origem(cin_string);
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
                        else if(cin_int_tipo == 2){AveExotico* novoAnimal = new AveExotico();
                                novoAnimal->set_id(this->count_id_animal++); //ID cadastrado automaticamente (0, 1, 2, ++)
                                novoAnimal->set_classe("Ave");
                                true_false = true;

                                // ================================================================ //
                                cout << "=========" << endl
                                     << "Digite um nome (de batismo) para o animal (ALLAN_CHRISTIAN): ";
                                cin >> cin_string;
                                novoAnimal->set_nome_batismo(cin_string);
                                // ================================================================ //
                                cout << "=========" << endl
                                     << "Digite um nome popular do animal (BEIJA-FLORES): ";
                                cin >> cin_string;
                                novoAnimal->set_nome(cin_string);
                                // ================================================================ //
                                cout << "=========" << endl
                                     << "Digite um nome cientifico do animal (TROCHILIDAE): ";
                                cin >> cin_string;
                                novoAnimal->set_nome_cientifico(cin_string);
                                // ================================================================ //
                                cout << "=========" << endl
                                     << "Digite a dieta predominante do animal('Carne', 'planta', 'misto'...): ";
                                cin >> cin_string;
                                novoAnimal->set_dieta(cin_string);
                                // ================================================================ //
                                cout << "=========" << endl
                                     << "Digite o sexo do animal (M / F): ";
                                cin >> cin_char;
                                novoAnimal->set_sexo(cin_char);
                                // ================================================================ //
                                cout << "=========" << endl
                                     << "Digite o tamanho, em metros, do animal ('0.10'): ";
                                cin >> cin_float;
                                novoAnimal->set_tamanho(cin_float);
                                // ================================================================ //
                                cout << "=========" << endl
                                     << "Digite a cor da pena do animal: ";
                                cin >> cin_string;
                                novoAnimal->set_cor_penas(cin_string);
                                // ================================================================ //
                                cout << "=========" << endl
                                     << "Digite o tamanho do bico (em cm): ";
                                cin >> cin_int;
                                novoAnimal->set_tamanho_bico(cin_int);
                                // ================================================================ //
                                cout << "=========" << endl
                                     << "Digite o tamanho das pernas (em cm): ";
                                cin >> cin_int;
                                novoAnimal->set_tamanho_pernas(cin_int);
                                // ================================================================ //
                                cout << "=========" << endl
                                     << "O animal encontra-se em extincao? (S / N) : ";
                                cin >> cin_char;
                                novoAnimal->set_extincao(cin_char);
                                // ================================================================ //
                                cout << "=========" << endl
                                     << "O animal precisa de autorizacao do IBAMA para deslocamento? (S / N) : ";
                                cin >> cin_char;
                                novoAnimal->set_autorizacao_ibama(cin_char);
                                // ================================================================ //
                                cout << "=========" << endl
                                     << "Digite o pais de origem do animal('BRASIL', 'ESTADOS_UNIDOS'...): ";
                                cin >> cin_string;
                                novoAnimal->set_pais_origem(cin_string);
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
                            cout << "=========" << endl
                                 << "Digite um nome (de batismo) para o animal (ALLAN_CHRISTIAN): ";
                            cin >> cin_string;
                            novoAnimal->set_nome_batismo(cin_string);
                            // ================================================================ //
                            cout << "=========" << endl
                                 << "Digite um nome popular do animal (TAMANDUA_BANDEIRA): ";
                            cin >> cin_string;
                            novoAnimal->set_nome(cin_string);
                            // ================================================================ //
                            cout << "=========" << endl
                                 << "Digite um nome cientifico do animal (MYRMECOPHAGA_TRIDACTYLA): ";
                            cin >> cin_string;
                            novoAnimal->set_nome_cientifico(cin_string);
                            // ================================================================ //
                            cout << "=========" << endl
                                 << "Digite a dieta predominante do animal('Carne', 'planta', 'misto'...): ";
                            cin >> cin_string;
                            novoAnimal->set_dieta(cin_string);
                            // ================================================================ //
                            cout << "=========" << endl
                                 << "Digite o sexo do animal (M / F): ";
                            cin >> cin_char;
                            novoAnimal->set_sexo(cin_char);
                            // ================================================================ //
                            cout << "=========" << endl
                                 << "Digite o tamanho, em metros, do animal ('1.58'): ";
                            cin >> cin_float;
                            novoAnimal->set_tamanho(cin_float);
                            // ================================================================ //
                            cout << "=========" << endl
                                 << "Digite a cor do pelo do animal: ";
                            cin >> cin_string;
                            novoAnimal->set_cor_pelo(cin_string);
                            // ================================================================ //
                            cout << "=========" << endl
                                 << "Digite o estador de origem do animal('RN', 'PB'...): ";
                            cin >> cin_string;
                            novoAnimal->set_estado_origem(cin_string);
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
                            cout << "=========" << endl
                                 << "Digite um nome (de batismo) para o animal (ALLAN_CHRISTIAN): ";
                            cin >> cin_string;
                            novoAnimal->set_nome_batismo(cin_string);
                            // ================================================================ //
                            cout << "=========" << endl
                                 << "Digite um nome popular do animal (TAMANDUA_BANDEIRA): ";
                            cin >> cin_string;
                            novoAnimal->set_nome(cin_string);
                            // ================================================================ //
                            cout << "=========" << endl
                                 << "Digite um nome cientifico do animal (MYRMECOPHAGA_TRIDACTYLA): ";
                            cin >> cin_string;
                            novoAnimal->set_nome_cientifico(cin_string);
                            // ================================================================ //
                            cout << "=========" << endl
                                 << "Digite a dieta predominante do animal('Carne', 'planta', 'misto'...): ";
                            cin >> cin_string;
                            novoAnimal->set_dieta(cin_string);
                            // ================================================================ //
                            cout << "=========" << endl
                                 << "Digite o sexo do animal (M / F): ";
                            cin >> cin_char;
                            novoAnimal->set_sexo(cin_char);
                            // ================================================================ //
                            cout << "=========" << endl
                                 << "Digite o tamanho, em metros, do animal ('1.58'): ";
                            cin >> cin_float;
                            novoAnimal->set_tamanho(cin_float);
                            // ================================================================ //
                            cout << "=========" << endl
                                 << "Digite a cor do pelo do animal: ";
                            cin >> cin_string;
                            novoAnimal->set_cor_pelo(cin_string);
                            // ================================================================ //
                            cout << "=========" << endl
                             << "O animal encontra-se em extincao? (S / N) : ";
                            cin >> cin_char;
                            novoAnimal->set_extincao(cin_char);
                            // ================================================================ //
                            cout << "=========" << endl
                                 << "O animal precisa de autorizacao do IBAMA para deslocamento? (S / N) : ";
                            cin >> cin_char;
                            novoAnimal->set_autorizacao_ibama(cin_char);
                            // ================================================================ //
                            cout << "=========" << endl
                                 << "Digite o pais de origem do animal('BRASIL', 'ESTADOS_UNIDOS'...): ";
                            cin >> cin_string;
                            novoAnimal->set_pais_origem(cin_string);
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
                            cout << "=========" << endl
                                 << "Digite um nome (de batismo) para o animal (ALLAN_CHRISTIAN): ";
                            cin >> cin_string;
                            novoAnimal->set_nome_batismo(cin_string);
                            // ================================================================ //
                            cout << "=========" << endl
                                 << "Digite um nome popular do animal (TUBARAO_BRANCO): ";
                            cin >> cin_string;
                            novoAnimal->set_nome(cin_string);
                            // ================================================================ //
                            cout << "=========" << endl
                                 << "Digite um nome cientifico do animal (CARCHARODON_CARCHARIAS): ";
                            cin >> cin_string;
                            novoAnimal->set_nome_cientifico(cin_string);
                            // ================================================================ //
                            cout << "=========" << endl
                                 << "Digite a dieta predominante do animal('Carne', 'planta', 'misto'...): ";
                            cin >> cin_string;
                            novoAnimal->set_dieta(cin_string);
                            // ================================================================ //
                            cout << "=========" << endl
                                 << "Digite o sexo do animal (M / F): ";
                            cin >> cin_char;
                            novoAnimal->set_sexo(cin_char);
                            // ================================================================ //
                            cout << "=========" << endl
                                 << "Digite o tamanho, em metros, do animal ('1.58'): ";
                            cin >> cin_float;
                            novoAnimal->set_tamanho(cin_float);
                            // ================================================================ //
                            cout << "=========" << endl
                                 << "Digite a quantidade de mudas de pele estimada do animal (CASO NAO TENHA - '0'): ";
                            cin >> cin_int;
                            novoAnimal->set_total_mudas(cin_int);
                            // ================================================================ //
                            cout << "=========" << endl
                                 << "Digite a data da ultima muda (xx/yy/zz)(CASO NAO TENHA - '0'): ";
                            cin >> cin_string;
                            novoAnimal->set_data_ultima_muda(cin_string);
                            // ================================================================ //
                            cout << "=========" << endl
                                << "Digite o estado de origem do animal('RN', 'PB'...): ";
                            cin >> cin_string;
                            novoAnimal->set_estado_origem(cin_string);
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
                            cout << "=========" << endl
                                 << "Digite um nome (de batismo) para o animal (ALLAN_CHRISTIAN): ";
                            cin >> cin_string;
                            novoAnimal->set_nome_batismo(cin_string);
                            // ================================================================ //
                            cout << "=========" << endl
                                 << "Digite um nome popular do animal (TUBARAO_BRANCO): ";
                            cin >> cin_string;
                            novoAnimal->set_nome(cin_string);
                            // ================================================================ //
                            cout << "=========" << endl
                                 << "Digite um nome cientifico do animal (CARCHARODON_CARCHARIAS): ";
                            cin >> cin_string;
                            novoAnimal->set_nome_cientifico(cin_string);
                            // ================================================================ //
                            cout << "=========" << endl
                                 << "Digite a dieta predominante do animal('Carne', 'planta', 'misto'...): ";
                            cin >> cin_string;
                            novoAnimal->set_dieta(cin_string);
                            // ================================================================ //
                            cout << "=========" << endl
                                 << "Digite o sexo do animal (M / F): ";
                            cin >> cin_char;
                            novoAnimal->set_sexo(cin_char);
                            // ================================================================ //
                            cout << "=========" << endl
                                 << "Digite o tamanho, em metros, do animal ('1.58'): ";
                            cin >> cin_float;
                            novoAnimal->set_tamanho(cin_float);
                            // ================================================================ //

                            cout << "=========" << endl
                                 << "O animal encontra-se em extincao? (S / N) : ";
                            cin >> cin_char;
                            novoAnimal->set_extincao(cin_char);
                            // ================================================================ //
                            cout << "=========" << endl
                                 << "Digite a quantidade de mudas de pele estimada do animal (CASO NAO TENHA - '0'): ";
                            cin >> cin_int;
                            novoAnimal->set_total_mudas(cin_int);
                            // ================================================================ //
                            cout << "=========" << endl
                                 << "Digite a data da ultima muda (xx/yy/zz)(CASO NAO TENHA - '0'): ";
                            cin >> cin_string;
                            novoAnimal->set_data_ultima_muda(cin_string);
                            // ================================================================ //
                            cout << "=========" << endl
                                 << "O animal precisa de autorizacao do IBAMA para deslocamento? (S / N) : ";
                            cin >> cin_char;
                            novoAnimal->set_autorizacao_ibama(cin_char);
                            // ================================================================ //
                            cout << "=========" << endl
                                 << "Digite o pais de origem do animal('BRASIL', 'ESTADOS_UNIDOS'...): ";
                            cin >> cin_string;
                            novoAnimal->set_pais_origem(cin_string);
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

void Petfera::lerAnimais(){
    ifstream arqDados("dados.dat");
    string linha;
    string palavra;

    while(arqDados >> linha){
        stringstream s(linha);
        vector<string> tokens;
        while(getline(s, palavra, ';')){
            tokens.push_back(palavra);
        }
        if(tokens.size() == 8){
            Animal* lido = new Animal(stoi(tokens.at(0)), tokens.at(1), tokens.at(2), tokens.at(3),
                        tokens.at(4), tokens.at(5), tokens.at(6)[0], stof(tokens.at(7)));
            animais[this->capacidade++] = lido;
            count_id_animal++;
        }
    }
}

void Petfera::escreverAnimais(){
    ofstream arqDados("dados.dat");
    for(int i=0; i<this->capacidade; i++){
        arqDados << animais[i]->get_id() <<";"<< animais[i]->get_nome_batismo() << ";"<< animais[i]->get_nome() <<";"<<
        animais[i]->get_nome_cientifico() << ";"<< animais[i]->get_classe() <<";"<< animais[i]->get_dieta() <<";"<<
        animais[i]->get_sexo() <<";" << animais[i]->get_tamanho() << endl;
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

