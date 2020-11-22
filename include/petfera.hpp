#pragma once        //Função semelhante ao Define, c++11

#include <iostream>
#define CAPACIDADE_MAX 10
#include "animal.hpp"
#include "mamifero.hpp"
#include "anfibio.hpp"
#include "ave.hpp"
#include "reptil.hpp"

using namespace std;

class Petfera{
public:
    Petfera();
    ~Petfera();

    void cadastrarAnimal();
    void cadastrarProfissional();
    void removerAnimal();
    void listarTodosAnimais();
    void listarProfissional();


private:
    Animal* animais[CAPACIDADE_MAX];
    int capacidade = 0;
    int count_id = 0; //Utilizado para realizar a contagem dos id
};
