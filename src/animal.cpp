#include "animal.hpp"
#include <iostream>

using namespace std;


Animal::Animal(){}
Animal::Animal(int id, string nome_batismo, string nome, string nome_cientifico, string classe, string dieta,
               char sexo, float tamanho):
               id(id), nome_batismo(nome_batismo), nome(nome), nome_cientifico(nome_cientifico), classe(classe),
               dieta(dieta), sexo(sexo), tamanho(tamanho){}
Animal::~Animal(){}

ostream& operator<< (ostream &o, Animal &animal){
    o << setfill(' ') << left<< setw(8) << animal.get_id()
      << setfill(' ') << left << setw(24) << animal.get_nome()
      << setfill(' ') << left << setw(8) << animal.get_sexo()
      << setfill(' ') << left << setw(10) << animal.get_classe();
      /*<< setfill(' ') << left << setw(16) << animal.get_veterinario()->get_nome()
      << setfill(' ') << left << setw(16) << animal.get_tratador()->get_nome();
      DANDO ERRO NA IMPRESSÃO - SAINDO DO PROGRAMA*/
    return o;
}

istream& operator>> (istream &i, Animal &animal){
    i >> animal.id >> animal.nome_batismo >> animal.nome >> animal.nome_cientifico >>
         animal.sexo >> animal.classe >> animal.tamanho >>animal.dieta;
    return i;
}

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

Veterinario*
Animal::get_veterinario() const{ return this->veterinario; }

Tratador*
Animal::get_tratador() const { return this->tratador; }

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

void
Animal::set_veterinario(Veterinario* veterinario) { this->veterinario = veterinario; }

void
Animal::set_tratador(Tratador* tratador) { this->tratador = tratador; }
