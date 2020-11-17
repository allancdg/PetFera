#include ".\include\reptil.hpp"
#include <iostream>

using namespace std;

//Construtor padr�o
Reptil::Reptil(){}

//Construtor parametrizado
//LEMBRAR DE REALIZAR AS MODIFICA��ES DE ACORDO COM AS SUB-CLASSES
Reptil::Reptil(int id, string nome, string nome_cientifico, string nome_batismo, string classe, char sexo,
           float tamanho, string dieta, int total_mudas, string data_ultima_muda):
               id(id), nome(nome), nome_cientifico(nome_cientifico), nome_batismo(nome_batismo), classe(classe),
                sexo(sexo), tamanho(tamanho), dieta(dieta), total_mudas(total_mudas), data_ultima_muda(data_ultima_muda){}

//Destrutor padr�o
Reptil::~Reptil(){}

//Setters
void
Reptil::set_totalMudas(int total_mudas){ this->total_mudas = total_mudas; }

void
Reptil::set_dataUltimaMuda(string data_ultima_muda){ this->data_ultima_muda = data_ultima_muda; }
