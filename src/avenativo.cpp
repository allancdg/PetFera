#include "avenativo.hpp"

AveNativo::AveNativo(){}

AveNativo::AveNativo(int id, string nome_batismo, string nome, string nome_cientifico, string classe, string dieta,
               char sexo, float tamanho, int tamanho_bico, int tamanho_pernas, string cor_penas, string estado_origem):
                   Ave(id, nome_batismo, nome, nome_cientifico, classe, dieta, sexo, tamanho, tamanho_bico,
                        tamanho_pernas, cor_penas),
                   Nativo(estado_origem){}

AveNativo::~AveNativo(){}

void
AveNativo::cadastrarAveNativo(){
    cout << "=========" << endl
    << "Digite um nome (de batismo) para o animal (JOAO_BATISTA): ";
    cin >> nome_batismo;

    // ================================================================ //

    cout << "=========" << endl
    << "Digite o nome popular do animal (BEM-TI-VI): ";
    cin >> nome;

    // ================================================================ //

    cout << "=========" << endl
    << "Digite o nome cientifico do animal (PITANGUS_SULPHURATUS): ";
    cin >> nome_cientifico;

    // ================================================================ //

    cout << "=========" << endl
    << "Digite a cor da pena do animal: ";
    cin >> cor_penas;

    // ================================================================ //

    cout << "=========" << endl
    << "Digite o tamanho do bico (em cm): ";
    cin >> tamanho_bico;

    // ================================================================ //

    cout << "=========" << endl
    << "Digite o tamanho das pernas (em cm): ";
    cin >> tamanho_pernas;

    // ================================================================ //

    cout << "=========" << endl
    << "Digite a dieta predominante do animal ('Carne', 'planta', 'misto'...): ";
    cin >> dieta;

    // ================================================================ //

    cout << "=========" << endl
    << "Digite o sexo do animal (M / F): ";
    cin >> sexo;

    // ================================================================ //

    cout << "=========" << endl
    << "Digite o tamanho, em metros, do animal ('1.58'): ";
    cin >> tamanho;

    // ================================================================ //

    cout << "=========" << endl
    << "Digite o estador de origem do animal('RN', 'PB'...): ";
    cin >> estado_origem;
}
