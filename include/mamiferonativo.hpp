#pragma once

#include <iostream>
#include <iomanip>
#include "mamifero.hpp"
#include "nativo.hpp"

using namespace std;

class MamiferoNativo: public Mamifero, public Nativo{
public:
    MamiferoNativo();
    MamiferoNativo(int id, string nome_batismo, string nome, string nome_cientifico, string classe, string dieta,
               char sexo, float tamanho, string cor_pelo, string estado_origem);
    ~MamiferoNativo();

    friend ostream& operator<< (ostream &o, MamiferoNativo &mn);
};
