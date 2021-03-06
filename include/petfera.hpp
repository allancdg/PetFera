#pragma once        //Funcao semelhante ao Define, c++11

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
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
    void listarAnfibios();
    void listarAves();
    void listarMamiferos();
    void listarRepteis();
    void listarTodosProfissionais();
    void listarTratadores();
    void listarVeterinarios();
    void lerAnimais();
    void escreverAnimais();
    void escreverProfissionais();
    void lerProfissionais();

    Veterinario* buscaVeterinarioPorId(int id);
    Tratador* buscaTratadorPorId(int id);

private:
    vector<Animal*> animais;
    vector<Pessoa*> profissionais;
    int capacidade = 0;                     //Utilizado para realizar o controle da quantidade do animal
    int capacidade_profissionais = 0;       //Utilizado para realizar o controle da quantidade do profissional
    int count_id_animal = 0;                //Utilizado para realizar a contagem dos id animal
    int count_id_profissional = 0;          //Utilizado para realizar a contagem dos id profissional
};
