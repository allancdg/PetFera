#pragma once        //Funcao semelhante ao Define, c++11

#include <iostream>
#define CAPACIDADE_MAX 10
#define CAPACIDADE_MAX_PROFISSIONAIS 5
#include "animal.hpp"
#include "mamifero.hpp"
#include "anfibio.hpp"
#include "ave.hpp"
#include "reptil.hpp"
#include "exotico.hpp"
#include "nativo.hpp"
#include "mamiferoexotico.hpp"
#include "mamiferonativo.hpp"
#include "anfibioexotico.hpp"
#include "anfibionativo.hpp"
#include "aveexotico.hpp"
#include "avenativo.hpp"
#include "reptilexotico.hpp"
#include "reptilnativo.hpp"
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
    int capacidade = 0;                     //Utilizado para realizar o controle da quantidade do animal
    int capacidade_profissionais = 0;       //Utilizado para realizar o controle da quantidade do profissional
    int count_id_animal = 0;                //Utilizado para realizar a contagem dos id animal
    int count_id_profissional = 0;          //Utilizado para realizar a contagem dos id profissional
};
