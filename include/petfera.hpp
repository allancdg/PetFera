#pragma once        //Fun��o semelhante ao Define, c++11

#include <iostream>
#define CAPACIDADE_MAX 10
#define CAPACIDADE_MAX_PROFISSIONAIS 5
#include "animal.hpp"
#include "mamifero.hpp"
#include "anfibio.hpp"
#include "ave.hpp"
#include "reptil.hpp"
#include "pessoa.hpp"
#include "veterinario.hpp"
#include "tratador.hpp"

using namespace std;

class Petfera{
public:
    Petfera();
    ~Petfera();

    void cadastrarAnimal();
    void cadastrarProfissional();
    void removerAnimal();
    void listarTodosAnimais();
    void listarTodosProfissionais();


private:
    Animal* animais[CAPACIDADE_MAX];
    Pessoa* profissionais[CAPACIDADE_MAX_PROFISSIONAIS];
    int capacidade = 0;
    int capacidade_profissionais = 0;
    int count_id = 0; //Utilizado para realizar a contagem dos id
};
