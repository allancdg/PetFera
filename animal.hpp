#pragma once        //Função semelhante ao Define, c++11

#include <iostream>

using namespace std;

class Animal{               //Criação da classe Animal (Geral à todas as familias de animais);
public:
    Animal();
    Animal(int id, string nome, string classe, char sexo, float tamanho);
    ~Animal();

    //Getters
    int get_id() const;
    string get_nome() const;
    string get_classe() const;
    char get_sexo() const;
    float get_tamanho() const;

    //Setters
    void set_id( int id );
    void set_nome(string nome);
    void set_classe( string classe );
	void set_sexo( char sexo );
	void set_tamanho( float tamanho);


protected:
    int id;                 // Código identificador do animal no PetFera;
    string nome;            // Nome como o animal é conhecido popularmente; "Jararaca";
    string classe;          // Classe do animal; "Amphibia, Reptilia, Aves ou Mammalithis"
    char sexo;              // Macho, fêmea;
    float tamanho;          // Tamanho do animal, em metros, ao ser cadastrado no PetFera;
};
