#include "animal.hpp"
#include <iostream>
#include <string>

using namespace std;

int main(){
    int cin_int; //Utilizado para toda entrada de numeral inteiro variável
    string cin_string; //Utilizado para toda entrada de string variável

    cout << " ## CADASTRAMENTO ## " << endl << endl;
    Animal* animal1 = new Animal();
    cout << "Digite o ID para o animal: ";
    cin >> cin_int;
    animal1->set_id(cin_int);
    cout << "Digite o nome popular do animal: ";
    cin >> cin_string;
    animal1->set_nome(cin_string);

    cout << " ## ANIMAL CADASTRADO ##" << endl;
    cout << "ID: " << animal1->get_id() << endl;
    cout << "NOME: " << animal1->get_nome() << endl;
return 0;
}
