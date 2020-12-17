#pragma once

#include <iostream>
#include <iomanip>
#include "reptil.hpp"
#include "nativo.hpp"

using namespace std;

class ReptilNativo: public Reptil, public Nativo{
public:
    ReptilNativo();
    ReptilNativo(int id, string nome_batismo, string nome, string nome_cientifico, string classe, string dieta,
               char sexo, float tamanho, int total_mudas, string data_ultima_muda,
               string estado_origem);

    ~ReptilNativo();

    friend ostream& operator<< (ostream &o, ReptilNativo &reptilnativo);
};
