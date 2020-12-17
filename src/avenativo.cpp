#include "avenativo.hpp"

AveNativo::AveNativo(){}

AveNativo::AveNativo(int id, string nome_batismo, string nome, string nome_cientifico, string classe, string dieta,
               char sexo, float tamanho, int tamanho_bico, int tamanho_pernas, string cor_penas, string estado_origem):
                   Ave(id, nome_batismo, nome, nome_cientifico, classe, dieta, sexo, tamanho, tamanho_bico,
                        tamanho_pernas, cor_penas),
                   Nativo(estado_origem){}

AveNativo::~AveNativo(){}

ostream& operator<< (ostream &o, AveNativo &avenativo){
    cout << "OPERATOR << IN ON AveNativo" << endl;
    o << setfill(' ') << left<< setw(8) << avenativo.get_id()
      << setfill(' ') << left << setw(24) << avenativo.get_nome()
      << setfill(' ') << left << setw(24) << avenativo.get_nome_batismo()
      << setfill(' ') << left << setw(8) << avenativo.get_sexo()
      << setfill(' ') << left << setw(5) << avenativo.get_tamanho()
      << setfill(' ') << left << setw(18) << avenativo.get_classe()
      << setfill(' ') << left << setw(15) << "BRASIL";
    return o;
}
