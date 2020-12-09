#pragma once        //Função semelhante ao Define, c++11

#include <iostream>
#include "animal.hpp"

using namespace std;

class Ave : public Animal {
protected:
    int tamanho_bico; //Tamanho do bico, em centimentros
    int tamanho_pernas; //Tamanho das pernas em centimetos
    string cor_penas; //Coloração das penas

public:
    //Construtor padrão
    Ave();
    //Construtor parametrizado
    Ave(int id, string nome_batismo, string nome, string nome_cientifico, string classe, string dieta,
               char sexo, float tamanho, int tamanho_bico, int tamanho_pernas, string cor_penas);
    //Destrutor padrão
    ~Ave();

    void cadastrarAve();

    //Getters
    int get_tamanho_bico() const;
    int get_tamanho_pernas() const;
    string get_cor_penas() const;

    //Setters
    void set_tamanho_bico(int tamanho_bico);
    void set_tamanho_pernas(int tamanho_pernas);
    void set_cor_penas(string cor_penas);
};
