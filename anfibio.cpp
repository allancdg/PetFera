#include ".\include\anfibio.hpp"
#include <iostream>

using namespace std;

//Construtor padrão
Anfibio::Anfibio(){}

//Construtor parametrizado
Anfibio::Anfibio(int id, string nome, string nome_cientifico, string nome_batismo, string classe, char sexo,
           float tamanho, string dieta, int total_mudas, string data_ultima_muda):
            id(id), nome(nome), nome_cientifico(nome_cientifico), nome_batismo(nome_batismo), classe(classe),
            sexo(sexo), tamanho(tamanho), dieta(dieta), total_mudas(total_mudas), data_ultima_muda(data_ultima_muda){}

//Destrutor padrão
Anfibio::~Anfibio(){}

//Setters
void
Anfibio::set_totalMudas(int total_mudas){ this->total_mudas = total_mudas; }

void
Anfibio::set_dataUltimaMuda(string data_ultima_muda){ this->data_ultima_muda = data_ultima_muda; }
