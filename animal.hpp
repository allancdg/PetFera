#pragma once        //Função semelhante ao Define, c++11

#include <iostream>
//#include "reptil.hpp"
//#include "ave.hpp"
//#include "mamifero.hpp"
//#include "anfibio.hpp"

using namespace std;

class Animal{               //Criação da classe Animal (Geral à todas as familias de animais);
protected:
    int id;                 // Código identificador do animal no PetFera;
    string nome;            // Nome como o animal é conhecido popularmente; "Jararaca";
    string nome_cientifico; // Nome científico do animal; "Bothrops jararaca";
    string nome_batismo;    // Nome de batismo do animal; "Joãozinho";
    string classe;          // Classe do animal; "Amphibia, Reptilia, Aves ou Mammalithis"
    char sexo;              // Macho, fêmea;
    float tamanho;          // Tamanho do animal, em metros, ao ser cadastrado no PetFera;
    string dieta;           // Dieta predominante do animal;

public:
    //Construtor padrão;
    Animal();
    //Construtor parametrizado;
    Animal(int id, string nome, string nome_cientifico, string nome_batismo, string classe, char sexo,
           float tamanho, string dieta);
    //Destrutor padrão;
    ~Animal();

    //Getters
    int get_id() const;
    string get_nome() const;
    string get_nome_cientifico() const;
    string get_nome_batismo() const;
    string get_classe() const;
    char get_sexo() const;
    float get_tamanho() const;
    string get_dieta() const;

    //Setters
    void set_id( int id );
    void set_nome(string nome);
    void set_nome_cientifico( string nome_cientifico );
    void set_nome_batismo(string nome_batismo);
    void set_classe( string classe );
	void set_sexo( char sexo );
	void set_tamanho( float tamanho);
	void set_dieta( string dieta );
};
