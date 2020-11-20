#pragma once        //Função semelhante ao Define, c++11

#include <iostream>
#include <vector>
#define CAPACIDADE_MAX 10
#include "animal.hpp"

using namespace std;

class Petfera{
public:
    Petfera();
    ~Petfera();

    void cadastrarAnimal();
    void removerAnimal();
    void listarAnimal();


private:
    Animal* animais[CAPACIDADE_MAX];
    int capacidade = 0;
    int count_id = 0; //Utilizado para realizar a contagem dos id
};
