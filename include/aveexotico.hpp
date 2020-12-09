#pragma once

#include <iostream>
#include <iomanip>
#include "ave.hpp"
#include "exotico.hpp"

using namespace std;

class AveExotico: public Ave, public Exotico{
public:
    AveExotico();
    AveExotico(int id, string nome_batismo, string nome, string nome_cientifico, string classe, string dieta,
               char sexo, float tamanho, int tamanho_bico, int tamanho_pernas, string cor_penas,
               char extincao, char autorizacao_ibama, string pais_origem);

    ~AveExotico();

    void cadastrarAveExotico();
};
