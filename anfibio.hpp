#pragma once        //Função semelhante ao Define, c++11

#include <iostream>
#include "animal.hpp"

using namespace std;

class Anfibio: public Animal {
protected:
    int total_mudas;
    string data_ultima_muda;

public:
    //Construtor padrão
    Anfibio();
    //Construtor parametrizado
    Anfibio(int id, string nome, string nome_cientifico, string nome_batismo, string classe, char sexo,
           float tamanho, string dieta, int total_mudas, string data_ultima_muda);
    //Destrutor padrão
    ~Anfibio();

    //Setters
    void set_totalMudas(int total_mudas);
    void set_dataUltimaMuda(string data_ultima_muda);
};
