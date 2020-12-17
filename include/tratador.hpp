#pragma once        //Função semelhante ao Define, c++11

#include <iostream>

#include "pessoa.hpp"

using namespace std;

enum nivelSeguranca{
    nivelAzul,                  // Pode tratar mamíferos, répteis e aves;
    nivelVerde,                 // Pode manipular aves;
    nivelVermelho              // Pode manipular animais venenosos ou perigosos;
};

class Tratador: public Pessoa {
protected:
    nivelSeguranca nivel;                 // Identifica o nível de segurança do Tratador;
public:
    //Construtor padrão;
    Tratador();
    //Construtor parametrizado;
    Tratador(int id, string nome, string cpf, string telefone, char sexo, int idade, string cargo, nivelSeguranca nivel);

    Tratador(int id, string nome, string cpf, string telefone, char sexo, int idade, string cargo);
    //Destrutor padrão;
    ~Tratador();

    friend ostream& operator<< (ostream &o, const Tratador &tratador);

    //Getters
    nivelSeguranca get_nivel_seguranca() const;

    //Setters
	void set_nivel_seguranca(char nivel);
};
