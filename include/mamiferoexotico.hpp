#pragma once

#include <iostream>
#include <iomanip>
#include "mamifero.hpp"
#include "exotico.hpp"

using namespace std;

class MamiferoExotico: public Mamifero, public Exotico{
public:
    MamiferoExotico();
    MamiferoExotico(int id, string nome_batismo, string nome, string nome_cientifico, string classe, string dieta,
               char sexo, float tamanho, string cor_pelo, char extincao, char autorizacao_ibama, string pais_origem);
    ~MamiferoExotico();

    void cadastrarMamiferoExotico();
};
