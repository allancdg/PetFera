#pragma once

#include <iostream>
#include <iomanip>
#include "anfibio.hpp"
#include "exotico.hpp"

using namespace std;

class AnfibioExotico: public Anfibio, public Exotico{
public:
    AnfibioExotico();
    AnfibioExotico(int id, string nome_batismo, string nome, string nome_cientifico, string classe, string dieta,
               char sexo, float tamanho, int total_mudas, string data_ultima_muda,
               char extincao, char autorizacao_ibama, string pais_origem);

    ~AnfibioExotico();
};
