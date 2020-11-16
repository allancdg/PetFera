#pragma once        //Função semelhante ao Define, c++11

#include <iostream>
#include "animal.hpp"

using namespace std;

class Reptil: public Animal{
protected:
    int total_mudas; //No caso de ser Serpentes ou Lagartos (condição medida pelo nome)
    string data_ultima_muda; //No caso de ser Serpentes ou Lagartos (condição medida pelo nome)

public:
    //Construtor padrão
	Reptil();
	//Construtor parametrizado
	//LEMBRAR DE REALIZAR AS MODIFICAÇÕES DE ACORDO COM AS SUB-CLASSES
	Reptil(int id, string nome, string nome_cientifico, string nome_batismo, string classe, char sexo,
           float tamanho, string dieta, int total_mudas, string data_ultima_muda);
    //Destrutor padrão
    ~Reptil();

    //Setters
    void set_totalMudas(int total_mudas);
    void set_dataUltimaMuda(string data_ultima_muda);
};
