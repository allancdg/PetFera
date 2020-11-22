#include "pessoa.hpp"

#include <iostream>
#include <string>

using namespace std;

int main(){
    Pessoa* p1 = new Pessoa(1, "Elton John", "123.456.789-10", "(800) 123-4567", 'M', 73);
    Pessoa* p2 = new Pessoa(2, "Bob Dylan", "222.222.222-11", "(320) 222-222", 'M', 79);

    cout << "Pessoas cadastradas: " << endl;

    cout << "\nNome: " << p1->get_nome() << endl;
    cout << "CPF: " << p1->get_cpf() << endl;
    cout << "Telefone: " << p1->get_telefone() << endl;
    cout << "Idade: " << p1->get_idade() << endl;

    cout << "-------------------" << endl;

    cout << "Nome: " << p2->get_nome() << endl;
    cout << "CPF: " << p2->get_cpf() << endl;
    cout << "Telefone: " << p2->get_telefone() << endl;
    cout << "Idade: " << p2->get_idade() << endl;

    cout << "-------------------" << endl;
}