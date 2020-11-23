#pragma once        //Fun��o semelhante ao Define, c++11

#include <iostream>

using namespace std;

class Animal{               //Cria��o da classe Animal (Geral � todas as familias de animais);
public:
    Animal();
    Animal(int id, string nome_batismo, string nome, string nome_cientifico, string classe, string dieta,
               char sexo, float tamanho);
    ~Animal();

    //Getters
    int get_id() const;
    string get_nome_batismo() const;
    string get_nome() const;
    string get_nome_cientifico() const;
    string get_classe() const;
    string get_dieta() const;
    char get_sexo() const;
    float get_tamanho() const;

    //Setters
    void set_id( int id );
    void set_nome_batismo(string nome_batismo);
    void set_nome(string nome);
    void set_nome_cientifico(string nome_cientifico);
    void set_classe( string classe );
    void set_dieta(string dieta);
	void set_sexo( char sexo );
	void set_tamanho( float tamanho);


protected:
    int id;                 // C�digo identificador do animal no PetFera;
    string nome_batismo;    // Nome dado ao animal no momento do cadastro; "Rex"
    string nome;            // Nome como o animal � conhecido popularmente; "Jararaca";
    string nome_cientifico; // Nome como o animal � conhecido cientificamente;
    string classe;          // Classe do animal; "Amphibia, Reptilia, Aves ou Mammalithis"
    string dieta;           // Dieta predominante do animal
    char sexo;              // Macho, f�mea;
    float tamanho;          // Tamanho do animal, em metros, ao ser cadastrado no PetFera

    //FALTANDO ADICIONAR VETERINARIO E TRATADOR
};
