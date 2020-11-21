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

void menuSecundarioCadastramento(Petfera* petfera) {
    char opcaoCadastramento;
	limpaTela();
	do {
		cout<< endl << "MENU DE CADASTRAMENTO: ";
		cout<< endl << "========";
		cout<< endl << "A - ANIMAL.";
		cout<< endl << "P - PROFISSIONAL.";
		cout<< endl << "---------";
		cout<< endl << endl << "X - Voltar ao menu principal.";

		cout<< endl << endl << "Selecione a opcao: ";
		cin >> opcaoCadastramento;

		limpaTela();

		switch(opcaoCadastramento)
		{
			case 'A' :
			case 'a' :{ petfera->cadastrarAnimal();}
			break;
			case 'P' :
			case 'p' :{ cout << "EM CONSTRUCAO!";}
			break;
            case 'X' :
			case 'x' :{ return;}
			break;
			default : cout << endl << "Opção inválida!";
		}
		cout << endl;


		pausar();
		limpaTela();

	} while (opcaoCadastramento != 'X' && opcaoCadastramento !='x');
}

void menuPrincipal(Petfera* petfera) {
	char opcao;
	limpaTela();
	do {
		cout<< endl << "Menu principal de opcoes: ";
		cout<< endl << "========";
		cout<< endl << "C - Cadastradastramento.";
		cout<< endl << "R - Remocao.";
		cout<< endl << "L - Listagem.";
		cout<< endl << "---------";
		cout<< endl << endl << "X - Encerrar.";

		cout<< endl << endl << "Selecione a opcao: ";
		cin >> opcao;

		limpaTela();

		switch(opcao)
		{
			case 'C' :
			case 'c' :{ menuSecundarioCadastramento(petfera);}
			break;
			case 'R' :
			case 'r' :{ cout << "EM CONSTRUCAO!"; }//menuSecundarioRemocao(petfera);}
			break;
			case 'L' :
			case 'l' :{ cout << "EM CONSTRUCAO!"; }// menuSecundarioListagem(petfera);}
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
