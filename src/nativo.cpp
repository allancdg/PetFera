#include "nativo.hpp"
#include <iostream>

using namespace std;

//Construtor padrao
Nativo::Nativo();
//Construtor parametrizado
Nativo::Nativo(string estado_origem);
//Destrutor padrao
Nativo::~Nativo();

//Setters
void
Nativo::set_estado_origem(string estado_origem);

//Getters
string
Nativo::get_estado_origem();
