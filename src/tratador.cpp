#include "tratador.hpp"

#include <iostream>

using namespace std;

//Construtor padrão
Tratador::Tratador(){}
    
//Construtor parametrizado;
Tratador::Tratador(int id, string nome, string cpf, string telefone, 
                        char sexo, int idade, string cargo, nivelSeguranca nivel):
                    Pessoa(id, nome, cpf, telefone, sexo, idade, cargo), nivel(nivel){}
    
//Destrutor padrão;
Tratador::~Tratador(){}

//Getters
nivelSeguranca 
Tratador::get_nivel_seguranca() const { return this->nivel; }

//Setters
void 
Tratador::set_nivel_seguranca(char nivel) { 
    
    if ( 'R' == nivel || 'r' == nivel) {
        this->nivel = nivelVermelho;
    }

    else if ( 'G' == nivel || 'g' == nivel) {
        this->nivel = nivelVerde;
    }

    else if ( 'B' == nivel || 'b' == nivel) {
        this->nivel = nivelAzul;
    } 

}