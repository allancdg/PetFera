#include "animal.hpp"
#include <iostream>

using namespace std;


Animal::Animal(){}

Animal::Animal(int id, string nome, string classe, char sexo, float tamanho):
               id(id), nome(nome), classe(classe), sexo(sexo), tamanho(tamanho){}

Animal::~Animal(){}

//Getters
int
Animal::get_id() const{ return this->id; }

string
Animal::get_nome() const{ return this->nome; }

string
Animal::get_classe() const{ return this->classe; }

char
Animal::get_sexo() const{ return this->sexo; }

float
Animal::get_tamanho() const{ return this->tamanho; }

//Setters
void
Animal::set_id( int id ){ this->id = id; }

void
Animal::set_nome(string nome){ this->nome = nome; }

void
Animal::set_classe( string classe ){ this->classe = classe; }

void
Animal::set_sexo( char sexo ){ this->sexo = sexo; }

void
Animal::set_tamanho( float tamanho){ this->tamanho = tamanho; }
