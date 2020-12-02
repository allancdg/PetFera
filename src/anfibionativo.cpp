#include "anfibionativo.hpp"

AnfibioNativo::AnfibioNativo(){}

AnfibioNativo::AnfibioNativo(int id, string nome_batismo, string nome, string nome_cientifico, string classe, string dieta,
               char sexo, float tamanho, int total_mudas, string data_ultima_muda, string estado_origem):
                   Anfibio(id, nome_batismo, nome, nome_cientifico, classe, dieta, sexo, tamanho, total_mudas, data_ultima_muda),
                   Nativo(estado_origem){}

AnfibioNativo::~AnfibioNativo(){}

ostream& operator<< (ostream &o, AnfibioNativo &an){
    o << setfill('.') << setw(5) << an.get_id()
      << setfill('.') << setw(20) << an.get_nome()
      << setfill('.') << setw(5) << an.get_sexo()
      << setfill('.') << setw(10) << an.get_classe();
    return o;
}
