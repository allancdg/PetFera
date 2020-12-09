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
    Anfibio(int id, string nome_batismo, string nome, string nome_cientifico, string classe, string dieta,
               char sexo, float tamanho, int total_mudas, string data_ultima_muda);
    //Destrutor padrão
    ~Anfibio();

    void cadastrarAnfibio();

    //Getters
    int get_total_mudas() const;
    string get_data_ultima_muda() const;

    //Setters
    void set_total_mudas(int total_mudas);
    void set_data_ultima_muda(string data_ultima_muda);
};
