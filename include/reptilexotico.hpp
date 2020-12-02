#pragma once

#include <iostream>
#include <iomanip>
#include "reptil.hpp"
#include "exotico.hpp"

using namespace std;

class ReptilExotico: public Reptil, public Exotico{
public:
    ReptilExotico();
    ReptilExotico(int id, string nome_batismo, string nome, string nome_cientifico, string classe, string dieta,
                char sexo, float tamanho, int total_mudas, string data_ultima_muda,
               char extincao, char autorizacao_ibama, string pais_origem);

    ~ReptilExotico();

    friend ostream& operator<< (ostream &o, ReptilExotico &re);
};
