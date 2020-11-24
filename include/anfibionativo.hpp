#pragma once

#include <iostream>
#include "anfibio.hpp"
#include "nativo.hpp"

using namespace std;

class AnfibioNativo: public Anfibio, public Nativo{
public:
    AnfibioNativo();
    AnfibioNativo(int id, string nome_batismo, string nome, string nome_cientifico, string classe, string dieta,
               char sexo, float tamanho, int total_mudas, string data_ultima_muda,
               string estado_origem);

    ~AnfibioNativo();
};
