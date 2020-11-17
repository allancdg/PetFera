#include "mamifero.hpp"
#include <iostream>

using namespace std;

//Construtor padrão
Mamifero::Mamifero( string cor = "Error404" ) : cor_pelo(cor){}

//Construtor parametrizado
Mamifero::Mamifero( int id, string nome, string nome_cientifico, string nome_batismo, string classe, char sexo,
                float tamanho, string dieta, string cor_pelo):
               id(id), nome(nome), nome_cientifico(nome_cientifico), nome_batismo(nome_batismo), classe(classe),
                    sexo(sexo), tamanho(tamanho), dieta(dieta), cor_pelo(cor_pelo){}

//Destrutor padrão
Mamifero::~Mamifero(){}

//Setters
void
Mamifero::set_cor_pelo(string cor_pelo){ this->cor_pelo = cor_pelo; }
