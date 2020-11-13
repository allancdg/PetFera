#pragma once        //Fun��o semelhante ao Define, c++11

#include <iostream>

using namespace std;

class Animal{               //Cria��o da classe Animal (Geral � todas as familias de animais);
protected:
    int id;                 //C�digo identificador do animal no PetFera;
    string nome;            // Nome como o animal � conhecido popularmente; "Jararaca";
    string nome_cientifico; // Nome cientifico do animal; "Bothrops jararaca";
    string nome_batismo;    // Nome de batismo do animal; "Jo�ozinho";
    string classe;          // Classe do animal; "Amphibia, Reptilia, Aves ou Mammalithis"
    char sexo;              // Macho, f�mea;
    float tamanho;          // Tamanho do animal, em metros, ao ser cadastrado no PetFera;
    string dieta;           // Dieta predominante do animal;

public:
    //Construtor padr�o;
    Animal();
    //Construtor parametrizado;
    Animal(int id, string nome, string nome_cientifico, string nome_batismo, string classe, char sexo,
           float tamanho, string dieta);
    //Destrutor padr�o;
    ~Animal();

    //Getters
    int get_id() const;

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
