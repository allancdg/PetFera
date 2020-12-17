#include "veterinario.hpp"

#include <iostream>
#include <istream>

//Construtor padrão
Veterinario::Veterinario(){}

//Construtor parametrizado;
Veterinario::Veterinario(int id, string nome, string cpf, string telefone, char sexo, int idade, string cargo, int crmv):
                        Pessoa(id, nome, cpf, telefone, sexo, idade, cargo), crmv(crmv){}
    
//Destrutor padrão;
Veterinario::~Veterinario(){}

ostream& operator<< (ostream &o, const Veterinario &veterinario){
    o << setfill(' ') << left<< setw(8) << veterinario.get_id()
      << setfill(' ') << left << setw(20) << veterinario.get_nome()
      << setfill(' ') << left << setw(5) << veterinario.get_sexo()
      << setfill(' ') << left << setw(10) << veterinario.get_crmv();

    return o;
}

//Getters
int 
Veterinario::get_crmv() const {
    return this->crmv;
}

//Setters
void 
Veterinario::set_crmv(int crmv) {
    this->crmv = crmv;
}