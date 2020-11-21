#pragma once        //Fun��o semelhante ao Define, c++11

#include <iostream>
#include "animal.hpp"

using namespace std;

class Ave : public Animal {
protected:
    int tamanho_bico; //Tamanho do bico, em centimentros
    int tamanho_pernas; //Tamanho das pernas em centimetos
    string cor_penas; //Colora��o das penas

public:
    //Construtor padr�o
    Ave();
    //Construtor parametrizado
    Ave(int id, string nome, string classe, char sexo, float tamanho, int tamanho_bico, int tamanho_pernas, string cor_penas);
    //Destrutor padr�o
    ~Ave();

    //Setters
    void set_tamanho_bico(int tamanho_bico);
    void set_tamanho_pernas(int tamanho_pernas);
    void set_cor_penas(string cor_penas);
};
