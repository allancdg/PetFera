#pragma once        //Função semelhante ao Define, c++11

#include <iostream>

#include "pessoa.hpp"

using namespace std;

class Veterinario: public Pessoa {
protected:
    int crmv;                 // Inscrição do Veterinário no Conselho Reginal de Medicina Veterinária (CRMV)
public:
    //Construtor padrão;
    Veterinario();
    //Construtor parametrizado;
    Veterinario(int id, string nome, string cpf, string telefone, char sexo, int idade, string cargo, int crmv);
    //Destrutor padrão;
    ~Veterinario();

    //Getters
    int get_crmv() const;

    //Setters
	void set_crmv(int crmv);
};
