#include "animal.hpp"
#include <iostream>

using namespace std;

//Construtor padrão;
Animal::Animal(){} // ## Vazio ##

//Construtor parametrizado;
Animal::Animal(int id, string nome, string nome_cientifico, string nome_batismo, string classe, char sexo,
                    float tamanho, string dieta):
               id(id), nome(nome), nome_cientifico(nome_cientifico), nome_batismo(nome_batismo), classe(classe),
                    sexo(sexo), tamanho(tamanho), dieta(dieta){}

//Destrutor padrão;
Animal::~Animal(){} // ## Vazio ##

//Getters
int
Animal::get_id() const{ return this->id; }

string
Animal::get_nome() const{ return this->nome; }

string
Animal::get_nome_cientifico() const{ return this->nome_cientifico; }

string
Animal::get_nome_batismo() const{ return this->nome_batismo; }

string
Animal::get_classe() const{ return this->classe; }

char
Animal::get_sexo() const{ return this->sexo; }

float
Animal::get_tamanho() const{ return this->tamanho; }

string
Animal::get_dieta() const{ return this->dieta; }

//Setters
void
Animal::set_id( int id ){ this->id = id; }

void
Animal::set_nome(string nome){ this->nome = nome; }

void
Animal::set_nome_cientifico( string nome_cientifico ){ this->nome_cientifico = nome_cientifico; }

void
Animal::set_nome_batismo(string nome_batismo){ this->nome_batismo = nome_batismo; }

void
Animal::set_classe( string classe ){ this->classe = classe; }

void
Animal::set_sexo( char sexo ){ this->sexo = sexo; }

void
Animal::set_tamanho( float tamanho){ this->tamanho = tamanho; }

void
Animal::set_dieta( string dieta ){ this->dieta = dieta; }
