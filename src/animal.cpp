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
    cout << "IN OPERATOR << ON Animal" << endl;
    o << setfill(' ') << left<< setw(8) << animal.get_id()
      << setfill(' ') << left << setw(24) << animal.get_nome()
      << setfill(' ') << left << setw(24) << animal.get_nome_batismo()
      << setfill(' ') << left << setw(8) << animal.get_sexo()
      << setfill(' ') << left << setw(5) << animal.get_tamanho()
      << setfill(' ') << left << setw(18) << animal.get_classe();
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


/*
if(animal.get_classe() == "Anfibio Nativo"){
        AnfibioNativo* anfibionativo = (AnfibioNativo*)(animal);
        o << setfill(' ') << left<< setw(8) << anfibionativo.get_id()
          << setfill(' ') << left << setw(24) << anfibionativo.get_nome()
          << setfill(' ') << left << setw(24) << anfibionativo.get_nome_batismo()
          << setfill(' ') << left << setw(8) << anfibionativo.get_sexo()
          << setfill(' ') << left << setw(5) << anfibionativo.get_tamanho()
          << setfill(' ') << left << setw(18) << anfibionativo.get_classe()
          << setfill(' ') << left << setw(15) << "BRASIL";
    }
    else if(animal.get_classe() == "Anfibio Exotico"){
        AnfibioExotico* anfibioexotico = (AnfibioExotico*)(animal);
        o << setfill(' ') << left<< setw(8) << anfibioexotico.get_id()
          << setfill(' ') << left << setw(24) << anfibioexotico.get_nome()
          << setfill(' ') << left << setw(24) << anfibioexotico.get_nome_batismo()
          << setfill(' ') << left << setw(8) << anfibioexotico.get_sexo()
          << setfill(' ') << left << setw(5) << anfibioexotico.get_tamanho()
          << setfill(' ') << left << setw(18) << anfibioexotico.get_classe()
          << setfill(' ') << left << setw(18) << anfibioexotico.get_pais_origem();
    }
    else if(animal.get_classe() == "Ave Nativo"){
        AveNativo* avenativo = (AveNativo*)(animal);
        o << setfill(' ') << left<< setw(8) << avenativo.get_id()
          << setfill(' ') << left << setw(24) << avenativo.get_nome()
          << setfill(' ') << left << setw(24) << avenativo.get_nome_batismo()
          << setfill(' ') << left << setw(8) << avenativo.get_sexo()
          << setfill(' ') << left << setw(5) << avenativo.get_tamanho()
          << setfill(' ') << left << setw(18) << avenativo.get_classe()
          << setfill(' ') << left << setw(15) << "BRASIL";
    }
    else if(animal.get_classe() == "Ave Exotico"){
        AveExotico* aveexotico = (AveExotico*)(animal);
        o << setfill(' ') << left<< setw(8) << aveexotico.get_id()
          << setfill(' ') << left << setw(24) << aveexotico.get_nome()
          << setfill(' ') << left << setw(24) << aveexotico.get_nome_batismo()
          << setfill(' ') << left << setw(8) << aveexotico.get_sexo()
          << setfill(' ') << left << setw(5) << aveexotico.get_tamanho()
          << setfill(' ') << left << setw(18) << aveexotico.get_classe()
          << setfill(' ') << left << setw(18) << aveexotico.get_pais_origem();
    }
    else if(animal.get_classe() == "Mamifero Nativo"){
        MamiferoNativo* mamiferonativo = (MamiferoNativo*)(animal);
        o << setfill(' ') << left<< setw(8) << mamiferonativo.get_id()
          << setfill(' ') << left << setw(24) << mamiferonativo.get_nome()
          << setfill(' ') << left << setw(24) << mamiferonativo.get_nome_batismo()
          << setfill(' ') << left << setw(8) << mamiferonativo.get_sexo()
          << setfill(' ') << left << setw(5) << mamiferonativo.get_tamanho()
          << setfill(' ') << left << setw(18) << mamiferonativo.get_classe()
          << setfill(' ') << left << setw(15) << "BRASIL";
    }
    else if(animal.get_classe() == "Mamifero Exotico"){
        MamiferoExotico* mamiferoexotico = (MamiferoExotico*)(animal);
        o << setfill(' ') << left<< setw(8) << mamiferoexotico.get_id()
          << setfill(' ') << left << setw(24) << mamiferoexotico.get_nome()
          << setfill(' ') << left << setw(24) << mamiferoexotico.get_nome_batismo()
          << setfill(' ') << left << setw(8) << mamiferoexotico.get_sexo()
          << setfill(' ') << left << setw(5) << mamiferoexotico.get_tamanho()
          << setfill(' ') << left << setw(18) << mamiferoexotico.get_classe()
          << setfill(' ') << left << setw(18) << mamiferoexotico.get_pais_origem();
    }
    else if(animal.get_classe() == "Reptil Nativo"){
        ReptilNativo* reptilnativo = (ReptilNativo*)(animal);
        o << setfill(' ') << left<< setw(8) << reptilnativo.get_id()
          << setfill(' ') << left << setw(24) << reptilnativo.get_nome()
          << setfill(' ') << left << setw(24) << reptilnativo.get_nome_batismo()
          << setfill(' ') << left << setw(8) << reptilnativo.get_sexo()
          << setfill(' ') << left << setw(5) << reptilnativo.get_tamanho()
          << setfill(' ') << left << setw(18) << reptilnativo.get_classe()
          << setfill(' ') << left << setw(15) << "BRASIL";
    }
    else if(animal.get_classe() == "Reptil Exotico"){
        ReptilExotico* reptilexotico = (ReptilExotico*)(animal);
        o << setfill(' ') << left<< setw(8) << reptilexotico.get_id()
          << setfill(' ') << left << setw(24) << reptilexotico.get_nome()
          << setfill(' ') << left << setw(24) << reptilexotico.get_nome_batismo()
          << setfill(' ') << left << setw(8) << reptilexotico.get_sexo()
          << setfill(' ') << left << setw(5) << reptilexotico.get_tamanho()
          << setfill(' ') << left << setw(18) << reptilexotico.get_classe()
          << setfill(' ') << left << setw(18) << reptilexotico.get_pais_origem();
    }*/
