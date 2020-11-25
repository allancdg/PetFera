#include "veterinario.hpp"

//Construtor padrão
Veterinario::Veterinario(){}

//Construtor parametrizado;
Veterinario::Veterinario(int id, string nome, string cpf, string telefone, char sexo, int idade, string cargo, int crmv):
                        Pessoa(id, nome, cpf, telefone, sexo, idade, cargo), crmv(crmv){}
    
//Destrutor padrão;
Veterinario::~Veterinario(){}

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