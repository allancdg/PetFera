#include "mamifero.hpp"
#include <iostream>

using namespace std;

//Construtor padr�o
Mamifero::Mamifero(){}

//Construtor parametrizado
Mamifero::Mamifero( int id, string nome, string classe, char sexo, float tamanho, string cor_pelo):
               Animal(id, nome, classe, sexo, tamanho), cor_pelo(cor_pelo){}

//Destrutor padr�o
Mamifero::~Mamifero(){}

//Setters
void
Mamifero::set_cor_pelo(string cor_pelo){ this->cor_pelo = cor_pelo; }
