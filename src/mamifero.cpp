#include "mamifero.hpp"
#include <iostream>

using namespace std;

//Construtor padrão
Mamifero::Mamifero(){}

//Construtor parametrizado
Mamifero::Mamifero(int id, string nome_batismo, string nome, string nome_cientifico, string classe, string dieta,
               char sexo, float tamanho, string cor_pelo):
               Animal(id, nome_batismo, nome, nome_cientifico, classe, dieta, sexo, tamanho), cor_pelo(cor_pelo){}

//Destrutor padrão
Mamifero::~Mamifero(){}

//Setters
void
Mamifero::set_cor_pelo(string cor_pelo){ this->cor_pelo = cor_pelo; }

//Getters
string
Mamifero::get_cor_pelo(){ return this->cor_pelo; }
