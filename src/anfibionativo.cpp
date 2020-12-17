#include "anfibionativo.hpp"

AnfibioNativo::AnfibioNativo(){}

AnfibioNativo::AnfibioNativo(int id, string nome_batismo, string nome, string nome_cientifico, string classe, string dieta,
               char sexo, float tamanho, int total_mudas, string data_ultima_muda, string estado_origem):
                   Anfibio(id, nome_batismo, nome, nome_cientifico, classe, dieta, sexo, tamanho, total_mudas, data_ultima_muda),
                   Nativo(estado_origem){}

AnfibioNativo::~AnfibioNativo(){}

ostream& operator<< (ostream &o, AnfibioNativo &anfibionativo){
    cout << "OPERATOR << IN ON AnfibioNativo" << endl;
    o << setfill(' ') << left<< setw(8) << anfibionativo.get_id()
      << setfill(' ') << left << setw(24) << anfibionativo.get_nome()
      << setfill(' ') << left << setw(24) << anfibionativo.get_nome_batismo()
      << setfill(' ') << left << setw(8) << anfibionativo.get_sexo()
      << setfill(' ') << left << setw(5) << anfibionativo.get_tamanho()
      << setfill(' ') << left << setw(18) << anfibionativo.get_classe()
      << setfill(' ') << left << setw(15) << "BRASIL";
    return o;
}
