#include "animal.hpp"
#include "petfera.hpp"
#include <iostream>

using namespace std;

void pausar() {
    cout << "Pressione qualquer tecla para continuar ...";
    cin.get();
    cin.ignore();
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

void menuTerciarioListagemAnimal(Petfera* petfera) {
    char opcaoListagemAnimal;
	limpaTela();
	do {
		cout<< endl << "MENU DE LISTAGEM ANIMAL: ";
		cout<< endl << "========";
		cout<< endl << "T - TODOS.";
		cout<< endl << "A - ANFIBIO.";
		cout<< endl << "V - AVE.";
		cout<< endl << "M - MAMIFERO.";
		cout<< endl << "R - REPTIL.";
		cout<< endl << "---------";
		cout<< endl << endl << "X - Voltar ao menu anterior.";

		cout<< endl << endl << "Selecione a opcao: ";
		cin >> opcaoListagemAnimal;

		limpaTela();

		switch(opcaoListagemAnimal)
		{
			case 'T' :
			case 't' :{ petfera->listarTodosAnimais(); }
			break;
			case 'A' :
			case 'a' :{ petfera->listarAnfibios();}
			break;
			case 'V' :
			case 'v' :{ petfera->listarAves();}
			break;
			case 'M' :
			case 'm' :{ petfera->listarMamiferos();}
			break;
			case 'R' :
			case 'r' :{ petfera->listarRepteis();}
			break;
            case 'X' :
			case 'x' :{ return;}
			break;
			default : cout << endl << "Opcao invalida!";
		}
		cout << endl;

        pausar();
		limpaTela();

	} while (opcaoListagemAnimal != 'X' && opcaoListagemAnimal !='x');
}

void menuTerciarioListagemProfissional(Petfera* petfera) {
    char opc;
	limpaTela();
	do {
		cout<< endl << "MENU DE LISTAGEM PROFISSIONAL: ";
		cout<< endl << "========";
		cout<< endl << "T - TODOS.";
		cout<< endl << "V - VETERINARIO.";
		cout<< endl << "D - TRATADOR.";
		cout<< endl << "---------";
		cout<< endl << endl << "X - Voltar ao menu anterior.";

		cout<< endl << endl << "Selecione a opcao: ";
		cin >> opc;

		limpaTela();

		switch(opc)
		{
			case 'T' :
			case 't' :{ petfera->listarTodosProfissionais(); }
			break;
			case 'V' :
			case 'v' :{ petfera->listarVeterinarios();}
			break;
			case 'D' :
			case 'd' :{ petfera->listarTratadores(); }
			break;
            case 'X' :
			case 'x' :{ return;}
			break;
			default : cout << endl << "Opcao invalida!";
		}
		cout << endl;

        pausar();
		limpaTela();

	} while (opc != 'X' && opc !='x');
}

void menuSecundarioRemocao(Petfera* petfera) {
    char opcaoRemocao;
	limpaTela();
	do {
		cout<< endl << "MENU DE REMOCAO: ";
		cout<< endl << "========";
		cout<< endl << "A - ANIMAL.";
		cout<< endl << "P - PROFISSIONAL.";
		cout<< endl << "---------";
		cout<< endl << endl << "X - Voltar ao menu principal.";

		cout<< endl << endl << "Selecione a opcao: ";
		cin >> opcaoRemocao;

		limpaTela();

		switch(opcaoRemocao)
		{
			case 'A' :
			case 'a' :{ petfera->removerAnimal(); pausar();}
			break;
			case 'P' :
			case 'p' :{ cout << "EM CONSTRUCAO! " << endl ;}
			break;
            case 'X' :
			case 'x' :{ return;}
			break;
			default : cout << endl << "Opcao invalida!";
		}
		cout << endl;

		limpaTela();

	} while (opcaoRemocao != 'X' && opcaoRemocao !='x');
}

void menuSecundarioListagem(Petfera* petfera) {
    char opcaoListagem;
	limpaTela();
	do {
		cout<< endl << "MENU DE LISTAGEM: ";
		cout<< endl << "========";
		cout<< endl << "A - ANIMAL.";
		cout<< endl << "P - PROFISSIONAL.";
		cout<< endl << "---------";
		cout<< endl << endl << "X - Voltar ao menu anterior.";

		cout<< endl << endl << "Selecione a opcao: ";
		cin >> opcaoListagem;

		limpaTela();

		switch(opcaoListagem)
		{
			case 'A' :
			case 'a' :{ menuTerciarioListagemAnimal(petfera); }
			break;
			case 'P' :
			case 'p' :{ menuTerciarioListagemProfissional(petfera); }
			break;
            case 'X' :
			case 'x' :{ return;}
			break;
			default : cout << endl << "Opcao invalida!";
		}
		cout << endl;

		limpaTela();

	} while (opcaoListagem != 'X' && opcaoListagem !='x');
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
			case 'p' :{ petfera->cadastrarProfissional();}
			break;
            case 'X' :
			case 'x' :{ return;}
			break;
			default : cout << endl << "Opcao invalida!";
		}
		cout << endl;

		limpaTela();

	} while (opcaoCadastramento != 'X' && opcaoCadastramento !='x');
}

void menuPrincipal(Petfera* petfera) {
	char opcao;
	limpaTela();
	do {
		cout<< endl << "Menu principal de opcoes: ";
		cout<< endl << "========";
		cout<< endl << "C - Cadastramento.";
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
			case 'r' :{ menuSecundarioRemocao(petfera); }
			break;
			case 'L' :
			case 'l' :{ menuSecundarioListagem(petfera); }
			break;
            case 'X' :
			case 'x' :{ return;}
			break;
			default : cout << endl << "Op��o inv�lida!";
		}
		cout << endl;

		pausar();
		limpaTela();

	} while (opcao != 'X' && opcao !='x');
}

int main(){
    Petfera* petfera = new Petfera();

    petfera->lerAnimais();
	petfera->lerProfissionais();

    menuPrincipal(petfera);

    petfera->escreverAnimais(); //Antes de fechar o programa irá pegar o vetor com todos os animais cadastrados
                                // e escrever no arquivo 'dados.dat'

	petfera->escreverProfissionais();

return 0;
}
