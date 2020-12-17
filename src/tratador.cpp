#include "tratador.hpp"

#include <iostream>
#include <iomanip>
#include <istream>

using namespace std;

//Construtor padrão
Tratador::Tratador(){}
    
//Construtor parametrizado;
Tratador::Tratador(int id, string nome, string cpf, string telefone, 
                        char sexo, int idade, string cargo, nivelSeguranca nivel):
                    Pessoa(id, nome, cpf, telefone, sexo, idade, cargo), nivel(nivel){}

Tratador::Tratador(int id, string nome, string cpf, string telefone, char sexo, int idade, string cargo):
                    Pessoa(id, nome, cpf, telefone, sexo, idade, cargo){}
    
//Destrutor padrão;
Tratador::~Tratador(){}

ostream& operator<< (ostream &o, const Tratador &tratador){
    o << setfill(' ') << left<< setw(8) << tratador.get_id()
      << setfill(' ') << left << setw(24) << tratador.get_nome()
      << setfill(' ') << left << setw(5) << tratador.get_sexo()
      << setfill(' ') << left << setw(29 << tratador.get_nivel_seguranca());
    
    return o;
}

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

