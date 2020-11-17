#pragma once        //Fun��o semelhante ao 'Define', c++11

#include <iostream>
#include "animal.hpp"

using namespace std;

class Mamifero : public Animal
{
protected:
	string cor_pelo; //Colora��o do pelo

public:
    //Construtor padr�o
    Mamifero( string cor = "Error404" ) : cor_pelo(cor);
    //Construtor parametrizado
    Mamifero( int id, string nome, string nome_cientifico, string nome_batismo, string classe, char sexo,
           float tamanho, string dieta, string cor_pelo);
    //Destrutor padr�o
    ~Mamifero();

    //Setters
    void set_cor_pelo(string cor_pelo);
};
