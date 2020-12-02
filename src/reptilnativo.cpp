#include "reptilnativo.hpp"

ReptilNativo::ReptilNativo(){}

ReptilNativo::ReptilNativo(int id, string nome_batismo, string nome, string nome_cientifico, string classe, string dieta,
               char sexo, float tamanho, int total_mudas, string data_ultima_muda, string estado_origem):
                   Reptil(id, nome_batismo, nome, nome_cientifico, classe, dieta, sexo, tamanho, total_mudas, data_ultima_muda),
                   Nativo(estado_origem){}

ReptilNativo::~ReptilNativo(){}

ostream& operator<< (ostream &o, ReptilNativo &rn){
    o << setfill('.') << setw(5) << rn.get_id()
      << setfill('.') << setw(20) << rn.get_nome()
      << setfill('.') << setw(5) << rn.get_sexo()
      << setfill('.') << setw(10) << rn.get_classe();
    return o;
}
