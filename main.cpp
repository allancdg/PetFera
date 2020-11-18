#include "animal.hpp"
#include <iostream>
#include <string>

using namespace std;

int main(){
    int cin_int; //Utilizado para toda entrada de numeral inteiro variável
    string cin_string; //Utilizado para toda entrada de string variável
    char cin_char; //Utilizado para toda entrada de char variável
    float cin_float; //Utilizado para toda entrada de float variável

    cout << " ## CADASTRAMENTO ## " << endl << endl;
    Animal* animal1 = new Animal();
    cout << "Digite o ID para o animal: ";
    cin >> cin_int;
    animal1->set_id(cin_int);
    cout << "Digite o nome popular do animal: ";
    cin >> cin_string;
    animal1->set_nome(cin_string);
    cout << "Digite o nome cientifico do animal: ";
    cin >> cin_string;
    animal1->set_nome_cientifico(cin_string);
    cout << "Digite o nome de batismo do animal: ";
    cin >> cin_string;
    animal1->set_nome_batismo(cin_string);
    cout << "Digite a classe do animal: ";
    cin >> cin_string;
    animal1->set_classe(cin_string);
    cout << "Digite o sexo do animal: ";
    cin >> cin_char;
    animal1->set_sexo(cin_char);
    cout << "Digite o tamanho, em metros, do animal: ";
    cin >> cin_float;
    animal1->set_tamanho(cin_float);
    cout << "Digite a dieta do animal: ";
    cin >> cin_string;
    animal1->set_dieta(cin_string);

    cout << " ## ANIMAL CADASTRADO ##" << endl;
    cout << "ID: " << animal1->get_id() << endl;
    cout << "NOME: " << animal1->get_nome() << endl;
    cout << "NOME CIENTIFICO: " << animal1->get_nome_cientifico() << endl;
    cout << "NOME DE BATISMO: " << animal1->get_nome_batismo() << endl;
    cout << "CLASSE: " << animal1->get_classe() << endl;
    cout << "SEXO: " << animal1->get_sexo() << endl;
    cout << "TAMANHO(m): " << animal1->get_tamanho() << endl;
    cout << "DIETA: " << animal1->get_dieta() << endl;

    //problema na tabelação pois varia o tamanho dos espaços preenchidos pelas variáveis
    /*cout << "ID\tNOME\t\tNOME CIENTIFICO\t\tNOME BATISMO\t\tCLASSE\t\tSEXO\tTAMANHO(m)\tDIETA" << endl;
    cout << animal1->get_id() << "\t" << animal1->get_nome() << "\t\t" << animal1->get_nome_cientifico()
            << "\t\t" << animal1->get_nome_batismo() << "\t\t" << animal1->get_classe() << "\t"
            << animal1->get_sexo() << "\t" << animal1->get_tamanho() << "\t" << animal1->get_dieta();*/
return 0;
}
