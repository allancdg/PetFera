#include "animal.hpp"
#include <iostream>

using namespace std;


Animal::Animal(){}
Animal::Animal(int id, string nome_batismo, string nome, string nome_cientifico, string classe, string dieta,
               char sexo, float tamanho):
               id(id), nome_batismo(nome_batismo), nome(nome), nome_cientifico(nome_cientifico), classe(classe),
               dieta(dieta), sexo(sexo), tamanho(tamanho){}
Animal::~Animal(){}

//Getters
int
Animal::get_id() const{ return this->id; }

string
Animal::get_nome_batismo() const { return this->nome_batismo; }

string
Animal::get_nome() const{ return this->nome; }

string
Animal::get_nome_cientifico() const { return this->nome_cientifico; }

string
Animal::get_classe() const{ return this->classe; }

string
Animal::get_dieta() const { return this->dieta; }

char
Animal::get_sexo() const{ return this->sexo; }

float
Animal::get_tamanho() const{ return this->tamanho; }

//Setters
void
Animal::set_id( int id ){ this->id = id; }

void
Animal::set_nome_batismo(string nome_batismo){ this->nome_batismo = nome_batismo; }

void
Animal::set_nome(string nome){ this->nome = nome; }

void
Animal::set_nome_cientifico(string nome_cientifico){this->nome_cientifico = nome_cientifico; }

void
Animal::set_classe( string classe ){ this->classe = classe; }

void
Animal::set_dieta(string dieta){ this->dieta = dieta; }

void
Animal::set_sexo( char sexo ){ this->sexo = sexo; }

void
Animal::set_tamanho( float tamanho){ this->tamanho = tamanho; }
