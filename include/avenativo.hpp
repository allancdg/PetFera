#pragma once

#include <iostream>
#include <iomanip>
#include "ave.hpp"
#include "nativo.hpp"

using namespace std;

class AveNativo: public Ave, public Nativo{
public:
    AveNativo();
    AveNativo(int id, string nome_batismo, string nome, string nome_cientifico, string classe, string dieta,
               char sexo, float tamanho, int tamanho_bico, int tamanho_pernas, string cor_penas, string estado_origem);

    ~AveNativo();

    friend ostream& operator<< (ostream &o, AveNativo &avenativo);
};
