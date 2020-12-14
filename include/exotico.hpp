#pragma once        //Funcao semelhante ao Define, c++11

#include <iostream>
#include <string>

using namespace std;

class Exotico{
protected:
    char extincao;              //Em extinção?
    char autorizacao_ibama;     //Autorizado para comercialização/cuidados?
    string pais_origem;         //Pais de origem do animal
public:
    //Construtor padrao
    Exotico();
    //Construtor parametrizado
    Exotico(char extincao, char autorizacao_ibama, string pais_origem);
    //Destrutor padrao
    ~Exotico();

    //Setters
    void set_extincao(char extincao);
    void set_autorizacao_ibama(char autorizacao_ibama);
    void set_pais_origem(string pais_origem);

    //Getters
    char get_extincao();
    char get_autorizacao_ibama();
    string get_pais_origem();
};
