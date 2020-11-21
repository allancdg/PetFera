#include "ave.hpp"
#include <iostream>

using namespace std;

//Construtor padrão
Ave::Ave(){}

//Construtor parametrizado
Ave::Ave(int id, string nome, string classe, char sexo, float tamanho, int tamanho_bico, int tamanho_pernas, string cor_penas):
            Animal(id, nome, classe, sexo, tamanho), tamanho_bico(tamanho_bico),
            tamanho_pernas(tamanho_pernas), cor_penas(cor_penas){}

//Destrutor padrão
Ave::~Ave(){}

//Setters
void
Ave::set_tamanho_bico(int tamanho_bico){ this->tamanho_bico = tamanho_bico; }

void
Ave::set_tamanho_pernas(int tamanho_pernas){ this->tamanho_pernas = tamanho_pernas; }

void
Ave::set_cor_penas(string cor_penas){ this->cor_penas = cor_penas; }
