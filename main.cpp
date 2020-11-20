#include "animal.hpp"
#include "petfera.hpp"
#include <iostream>

using namespace std;

void pausar() {
#if defined _WIN32
    system("pause");
#elif defined (__LINUX__) || defined(__gnu_linux__) || defined(__linux__)
    system("read -n 1 -s -p \"Pressione qualquer tecla para continuar...\"");
#elif defined (__APPLE__)
    system("read -n 1 -s -p \"Pressione qualquer tecla para continuar...\"");
#endif
}
void limpaTela(){
#if defined _WIN32
    system("cls");
#elif defined (__LINUX__) || defined(__gnu_linux__) || defined(__linux__)
    system("clear");
#elif defined (__APPLE__)
    system("clear");
#endif
}

void menuPrincipal(Petfera* petfera) {
	char opcao;
	limpaTela();
	do {
		cout<< endl << "Menu principal de opcoes: ";
		cout<< endl << "========";
		cout<< endl << "C - Cadastrar animal.";
		cout<< endl << "R - Remover animal.";
		cout<< endl << "L - Listar animal.";
		cout<< endl << "---------";
		cout<< endl << endl << "X - Encerrar.";

		cout<< endl << endl << "Selecione a opcao: ";
		cin >> opcao;

		limpaTela();

		switch(opcao)
		{
			case 'C' :
			case 'c' :{ petfera->cadastrarAnimal();}
			break;
			case 'R' :
			case 'r' :{ petfera->removerAnimal();}
			break;
			case 'L' :
			case 'l' :{ petfera->listarAnimal();}
			break;
            case 'X' :
			case 'x' :{ return;}
			break;
			default : cout << endl << "Opção inválida!";
		}
		cout << endl;

		pausar();
		limpaTela();

	} while (opcao != 'X' && opcao !='x');
}

int main(){
    Petfera* petfera = new Petfera();

    menuPrincipal(petfera);
return 0;
}
