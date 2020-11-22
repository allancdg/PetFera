#include "tratador.hpp"

#include <iostream>
#include <string>

using namespace std;

int main(){
    Tratador* p1 = new Tratador(1, "Elton John", "123.456.789-10", "(800) 123-4567", 'M', 73, nivelAzul);
    Tratador* p2 = new Tratador(2, "Bob Dylan", "222.222.222-11", "(320) 222-222", 'M', 79, nivelVermelho);

    cout << "Tratadores cadastrados: " << endl;

    cout << "\nNome: " << p1->get_nome() << endl;
    cout << "CPF: " << p1->get_cpf() << endl;
    cout << "Telefone: " << p1->get_telefone() << endl;
    cout << "Idade: " << p1->get_idade() << endl;
    cout << "Segurança: " << p1->get_nivel_seguranca() << endl;

    cout << "-------------------" << endl;

    cout << "Nome: " << p2->get_nome() << endl;
    cout << "CPF: " << p2->get_cpf() << endl;
    cout << "Telefone: " << p2->get_telefone() << endl;
    cout << "Idade: " << p2->get_idade() << endl;
    cout << "Segurança: " << p2->get_nivel_seguranca() << endl;

    cout << "-------------------" << endl;
}