#include "pessoa.hpp"

#include <string>

//Construtor padrão;
Pessoa::Pessoa(){}

//Construtor parametrizado;
Pessoa::Pessoa(int id, string nome, string cpf, string telefone, char sexo, int idade):
        id(id), nome(nome), cpf(cpf), telefone(telefone), sexo(sexo), idade(idade){}

//Destrutor padrão;
Pessoa::~Pessoa(){}

//Getters
int 
Pessoa::get_id() const { return this->id; }

string 
Pessoa::get_nome() const { return this->nome; }

string 
Pessoa::get_cpf() const { return this->cpf; }

string 
Pessoa::get_telefone() const { return this->telefone; }

char 
Pessoa::get_sexo() const{ return this->sexo; }

int 
Pessoa::get_idade() const{ return this->idade; }

//Setters
void 
Pessoa::set_id( int id ) { this->id = id; }

void 
Pessoa::set_nome(string nome) { this->nome = nome; }

void 
Pessoa::set_cpf( string cpf ) { this->cpf = cpf; }

void 
Pessoa::set_telefone(string telefone){ this->telefone = telefone; }

void 
Pessoa::set_sexo( char sexo ){ this->sexo = sexo; }

void 
Pessoa::set_idade( int idade ) { this->idade = idade; }