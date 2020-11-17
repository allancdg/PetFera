#include "ave.hpp"
#include <iostream>

using namespace std;

//Construtor padrão
Ave::Ave(){}

//Construtor parametrizado
Ave::Ave(int id, string nome, string nome_cientifico, string nome_batismo, string classe, char sexo,
           float tamanho, string dieta, int tamanho_bico, int tamanho_pernas, string caracteristica_bico,
           string cor_penas):
            id(id), nome(nome), nome_cientifico(nome_cientifico), nome_batismo(nome_batismo), classe(classe),
            sexo(sexo), tamanho(tamanho), dieta(dieta), tamanho_bico(tamanho_bico), tamanho_pernas(tamanho_pernas),
            caracteristica_bico(caracteristica_bico), cor_penas(cor_penas){}

//Destrutor padrão
Ave::~Ave(){}

//Setters
void
Ave::set_tamanho_bico(int tamanho_bico){ this->tamanho_bico = tamanho_bico; }

void
Ave::set_tamanho_pernas(int tamanho_pernas){ this->tamanho_pernas = tamanho_pernas; }

void
Ave::set_caracteristica_bico(string caracteristica_bico){ this->caracteristica_bico = caracteristica_bico; }

void
Ave::set_cor_penas(string cor_penas){ this->cor_penas = cor_penas; }
