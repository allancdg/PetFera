#include "animal.hpp"

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
