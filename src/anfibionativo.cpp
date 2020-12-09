#include "anfibionativo.hpp"

AnfibioNativo::AnfibioNativo(){}

AnfibioNativo::AnfibioNativo(int id, string nome_batismo, string nome, string nome_cientifico, string classe, string dieta,
               char sexo, float tamanho, int total_mudas, string data_ultima_muda, string estado_origem):
                   Anfibio(id, nome_batismo, nome, nome_cientifico, classe, dieta, sexo, tamanho, total_mudas, data_ultima_muda),
                   Nativo(estado_origem){}

AnfibioNativo::~AnfibioNativo(){}

void
AnfibioNativo::cadastrarAnfibioNativo(){
    // ================================================================ //

    cout << "=========" << endl
         << "Digite um nome (de batismo) para o animal (JOAO_BATISTA): ";
    cin >> nome_batismo;

    // ================================================================ //

    cout << "=========" << endl
         << "Digite um nome popular do animal (TUBARAO_BRANCO): ";
    cin >> nome;

    // ================================================================ //

    cout << "=========" << endl
         << "Digite um nome cientifico do animal (CARCHARODON_CARCHARIAS): ";
    cin >> nome_cientifico;

    // ================================================================ //

    cout << "=========" << endl
         << "Digite a dieta predominante do animal('Carne', 'planta', 'misto'...): ";
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
         << "Digite a quantidade de mudas de pele estimada do animal (CASO NAO TENHA - '0'): ";
    cin >> total_mudas;

    // ================================================================ //

    cout << "=========" << endl
         << "Digite a data da ultima muda (xx/yy/zz)(CASO NAO TENHA - '0'): ";
    cin >> data_ultima_muda;

    // ================================================================ //

    cout << "=========" << endl
         << "Digite o estador de origem do animal('RN', 'PB'...): ";
    cin >> estado_origem;
}
