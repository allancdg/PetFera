#pragma once        //Fun��o semelhante ao Define, c++11

#include <iostream>
#include "animal.hpp"

using namespace std;

class Reptil: public Animal {
protected:
    int total_mudas;
    string data_ultima_muda;

public:
    //Construtor padr�o
	Reptil();
	//Construtor parametrizado
	//LEMBRAR DE REALIZAR AS MODIFICA��ES DE ACORDO COM AS SUB-CLASSES
	Reptil(int id, string nome_batismo, string nome, string nome_cientifico, string classe, string dieta,
                char sexo, float tamanho, int total_mudas, string data_ultima_muda);
    //Destrutor padr�o
    ~Reptil();

    //Getters
    int get_total_mudas() const;
    string get_data_ultima_muda() const;

    //Setters
    void set_total_mudas(int total_mudas);
    void set_data_ultima_muda(string data_ultima_muda);
};
