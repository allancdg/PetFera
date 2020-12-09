#pragma once        //Funcao semelhante ao Define, c++11

#include <iostream>
#include <string>

using namespace std;

class Nativo{
protected:
    string estado_origem;         //Pais de origem do animal
public:
    //Construtor padrao
    Nativo();
    //Construtor parametrizado
    Nativo(string estado_origem);
    //Destrutor padrao
    ~Nativo();

    void cadastrarNativo();

    //Setters
    void set_estado_origem(string estado_origem);

    //Getters
    string get_estado_origem();
};
