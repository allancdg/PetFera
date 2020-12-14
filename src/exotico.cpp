#include "exotico.hpp"
#include <iostream>

using namespace std;

//Construtor padrao
Exotico::Exotico(){}
//Construtor parametrizado
Exotico::Exotico(char extincao, char autorizacao_ibama, string pais_origem):
            extincao(extincao), autorizacao_ibama(autorizacao_ibama),pais_origem(pais_origem){}
//Destrutor padrao
Exotico::~Exotico(){}

//Setters
void
Exotico::set_extincao(char extincao){ this->extincao = extincao; }

void
Exotico::set_autorizacao_ibama(char autorizacao_ibama){ this->autorizacao_ibama = autorizacao_ibama; }

void
Exotico::set_pais_origem(string pais_origem){ this->pais_origem = pais_origem; }

//Getters
char
Exotico::get_extincao(){ return this->extincao; }

char
Exotico::get_autorizacao_ibama(){ return this->autorizacao_ibama; }

string
Exotico::get_pais_origem(){ return this->pais_origem; }
