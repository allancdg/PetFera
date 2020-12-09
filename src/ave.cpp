#include "ave.hpp"
#include <iostream>

using namespace std;

//Construtor padr�o
Ave::Ave(){}

//Construtor parametrizado
Ave::Ave(int id, string nome_batismo, string nome, string nome_cientifico, string classe, string dieta,
               char sexo, float tamanho, int tamanho_bico, int tamanho_pernas, string cor_penas):
            Animal(id, nome_batismo, nome, nome_cientifico, classe, dieta, sexo, tamanho),
                tamanho_bico(tamanho_bico), tamanho_pernas(tamanho_pernas), cor_penas(cor_penas){}

//Destrutor padr�o
Ave::~Ave(){}

void
Ave::cadastrarAve(){
    cout << "=========" << endl
         << "Digite a cor da pena do animal: ";
    cin >> cor_penas;

    // ================================================================ //

    cout << "=========" << endl
         << "Digite o tamanho do bico (em cm): ";
    cin >> tamanho_bico;

    // ================================================================ //

    cout << "=========" << endl
         << "Digite o tamanho das pernas (em cm): ";
    cin >> tamanho_pernas;
}

//Getters
int
Ave::get_tamanho_bico() const{ return this->tamanho_bico; }

int
Ave::get_tamanho_pernas() const{ return this->tamanho_pernas;}

string
Ave::get_cor_penas() const{ return this->cor_penas; }

//Setters
void
Ave::set_tamanho_bico(int tamanho_bico){ this->tamanho_bico = tamanho_bico; }

void
Ave::set_tamanho_pernas(int tamanho_pernas){ this->tamanho_pernas = tamanho_pernas; }

void
Ave::set_cor_penas(string cor_penas){ this->cor_penas = cor_penas; }
