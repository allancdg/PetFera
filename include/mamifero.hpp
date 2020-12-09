#pragma once        //Fun��o semelhante ao 'Define', c++11

#include <iostream>
#include "animal.hpp"

using namespace std;

class Mamifero : public Animal {
protected:
	string cor_pelo; //Colora��o do pelo

public:
    //Construtor padr�o
    Mamifero();
    //Construtor parametrizado
    Mamifero(int id, string nome_batismo, string nome, string nome_cientifico, string classe, string dieta,
               char sexo, float tamanho, string cor_pelo);
    //Destrutor padr�o
    ~Mamifero();

    void cadastrarMamifero();

    //Setters
    void set_cor_pelo(string cor_pelo);

    //Getters
    string get_cor_pelo() const;
};
