#include "anfibio.hpp"
#include <iostream>

using namespace std;

//Construtor padrão
Anfibio::Anfibio(){}

//Construtor parametrizado
Anfibio::Anfibio(int id, string nome_batismo, string nome, string nome_cientifico, string classe, string dieta,
               char sexo, float tamanho, int total_mudas, string data_ultima_muda):
            Animal(id, nome_batismo, nome, nome_cientifico, classe, dieta, sexo, tamanho),
                total_mudas(total_mudas), data_ultima_muda(data_ultima_muda){}

//Destrutor padrão
Anfibio::~Anfibio(){}

void
Anfibio::cadastrarAnfibio(){

    cout << "=========" << endl
         << "Digite a quantidade de mudas de pele estimada do animal (CASO NAO TENHA - '0'): ";
    cin >> total_mudas;

    // ================================================================ //

    cout << "=========" << endl
         << "Digite a data da ultima muda (xx/yy/zz)(CASO NAO TENHA - '0'): ";
    cin >> data_ultima_muda;
}

//Getters
int
Anfibio::get_total_mudas() const{ return this->total_mudas; }

string
Anfibio::get_data_ultima_muda() const{ return this->data_ultima_muda; }

//Setters
void
Anfibio::set_total_mudas(int total_mudas){ this->total_mudas = total_mudas; }

void
Anfibio::set_data_ultima_muda(string data_ultima_muda){ this->data_ultima_muda = data_ultima_muda; }
