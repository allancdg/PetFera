#include "tratador.hpp"

#include <iostream>

using namespace std;

//Construtor padrão
Tratador::Tratador(){}
    
//Construtor parametrizado;
Tratador::Tratador(int id, string nome, string cpf, string telefone, char sexo, int idade, nivelSeguranca nivel):
                    Pessoa(id, nome, cpf, telefone, sexo, idade), nivel(nivel){}
    
//Destrutor padrão;
Tratador::~Tratador(){}

//Getters
nivelSeguranca 
Tratador::get_nivel_seguranca() const { return this->nivel; }

//Setters
void 
Tratador::set_nivel_seguranca( nivelSeguranca nivel) { this->nivel = nivel; }