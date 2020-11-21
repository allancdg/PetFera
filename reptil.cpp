#include "reptil.hpp"
#include <iostream>

using namespace std;

//Construtor padrão
Reptil::Reptil(){}

//Construtor parametrizado
//LEMBRAR DE REALIZAR AS MODIFICAÇÕES DE ACORDO COM AS SUB-CLASSES
Reptil::Reptil(int id, string nome, string classe, char sexo, float tamanho, int total_mudas, string data_ultima_muda):
               Animal(id, nome, classe, sexo, tamanho), total_mudas(total_mudas), data_ultima_muda(data_ultima_muda){}

//Destrutor padrão
Reptil::~Reptil(){}

//Setters
void
Reptil::set_totalMudas(int total_mudas){ this->total_mudas = total_mudas; }

void
Reptil::set_dataUltimaMuda(string data_ultima_muda){ this->data_ultima_muda = data_ultima_muda; }
