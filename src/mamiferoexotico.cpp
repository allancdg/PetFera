#include "mamiferoexotico.hpp"

MamiferoExotico::MamiferoExotico(){}

MamiferoExotico::MamiferoExotico(int id, string nome_batismo, string nome, string nome_cientifico, string classe, string dieta,
               char sexo, float tamanho, string cor_pelo, char extincao, char autorizacao_ibama, string pais_origem):
                    Mamifero(id, nome_batismo, nome, nome_cientifico, classe, dieta, sexo, tamanho, cor_pelo),
                    Exotico(extincao, autorizacao_ibama, pais_origem){}

MamiferoExotico::~MamiferoExotico(){}

void
MamiferoExotico::cadastrarMamiferoExotico(){
    cout << "=========" << endl
         << "Digite um nome (de batismo) para o animal (JOAO_BATISTA): ";
    cin >> nome_batismo;

    // ================================================================ //

    cout << "=========" << endl
         << "Digite o nome popular do animal (CACHORRO): ";
    cin >> nome;

    // ================================================================ //

    cout << "=========" << endl
         << "Digite o nome cientifico do animal (CANIS_LUPUS_FAMILIARIS): ";
    cin >> nome_cientifico;
    // ================================================================ //

    cout << "=========" << endl
         << "Digite a dieta predominante do animal ('Carne', 'planta', 'misto'...): ";
    cin >> dieta;

    // ================================================================ //

    cout << "=========" << endl
         << "Digite a cor do pelo do animal: ";
    cin >> cor_pelo;

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
