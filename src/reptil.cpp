#include "reptil.hpp"
#include <iostream>

using namespace std;

//Construtor padrão
Reptil::Reptil(){}

//Construtor parametrizado
Reptil::Reptil(int id, string nome_batismo, string nome, string nome_cientifico, string classe, string dieta,
                char sexo, float tamanho, int total_mudas, string data_ultima_muda):
            Animal(id, nome_batismo, nome, nome_cientifico, classe, dieta, sexo, tamanho),
                total_mudas(total_mudas), data_ultima_muda(data_ultima_muda){}

//Destrutor padrão
Reptil::~Reptil(){}

//Getters
int
Reptil::get_total_mudas() const{ return this->total_mudas; }

string
Reptil::get_data_ultima_muda() const{ return this->data_ultima_muda; }

//Setters
void
Reptil::set_total_mudas(int total_mudas){ this->total_mudas = total_mudas; }

void
Reptil::set_data_ultima_muda(string data_ultima_muda){ this->data_ultima_muda = data_ultima_muda; }
