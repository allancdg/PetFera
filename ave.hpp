#pragma once        //Fun��o semelhante ao Define, c++11

#include <iostream>
#include "animal.hpp"

using namespace std;

class Ave: public Animal{
protected:
    int tamanho_bico; //Tamanho do bico, em centimentros
    int tamanho_pernas; //Tamanho das pernas em centimetos
    string caracteristica_bico; //Caracteristicas que mudam de acordo com a finalidade
    string cor_penas; //Colora��o das penas

public:
    //Construtor padr�o
    Ave();
    //Construtor parametrizado
    Ave(int id, string nome, string nome_cientifico, string nome_batismo, string classe, char sexo,
           float tamanho, string dieta, int tamanho_bico, int tamanho_pernas, string caracteristica_bico,
           string cor_penas);
    //Destrutor padr�o
    ~Ave();

    //Setters
    void set_tamanhoBico(int tamanho_bico);
    void set_tamanhoPernas(int tamanho_pernas);
    void set_caracteristicaBico(string caracteristica_bico);
    void set_corPenas(string cor_penas);
};
