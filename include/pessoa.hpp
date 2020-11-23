#pragma once        //Função semelhante ao Define, c++11

#include <iostream>

using namespace std;

class Pessoa {               //Criação da classe Pessoa (Classe mãe para Tratador e Veterinário);
protected:
    int id;                 // Identificador da pessoa no PetFera;
    string nome;            // Nome da pessoa;
    string cpf;             // CPF da pessoa;
    string telefone;        // Telefone para contato;
    char sexo;              // Masculino, Feminino;
    int idade;              // Tamanho do animal, em metros, ao ser cadastrado no PetFera;

public:
    //Construtor padrão;
    Pessoa();
    //Construtor parametrizado;
    Pessoa(int id, string nome, string cpf, string telefone, char sexo, int idade);
    //Destrutor padrão;
    ~Pessoa();

    //Getters
    int get_id() const;
    string get_nome() const;
    string get_cpf() const;
    string get_telefone() const;
    char get_sexo() const;
    int get_idade() const;

    //Setters
    void set_id( int id );
    void set_nome(string nome);
    void set_cpf( string cpf );
    void set_telefone(string telefone);
	void set_sexo( char sexo );
	void set_idade( int idade);
};