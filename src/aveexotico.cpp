#include "aveexotico.hpp"

AveExotico::AveExotico(){}

AveExotico::AveExotico(int id, string nome_batismo, string nome, string nome_cientifico, string classe, string dieta,
               char sexo, float tamanho, int tamanho_bico, int tamanho_pernas, string cor_penas,
               char extincao, char autorizacao_ibama, string pais_origem):
                   Ave(id, nome_batismo, nome, nome_cientifico, classe, dieta, sexo, tamanho, tamanho_bico,
                        tamanho_pernas, cor_penas),
                   Exotico(extincao, autorizacao_ibama, pais_origem){}

AveExotico::~AveExotico(){}

void
AveExotico::cadastrarAveExotico(){
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
         << "O animal encontra-se em extincao? (S / N) : ";
    cin >> extincao;

    // ================================================================ //

    cout << "=========" << endl
         << "O animal precisa de autorizacao do IBAMA para deslocamento? (S / N) : ";
    cin >> autorizacao_ibama;

    // ================================================================ //

    cout << "=========" << endl
         << "Digite o pais de origem do animal('BRASIL', 'ESTADOS_UNIDOS'...): ";
    cin >> pais_origem;
}
