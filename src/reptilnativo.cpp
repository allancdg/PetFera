#include "reptilnativo.hpp"

ReptilNativo::ReptilNativo(){}

ReptilNativo::ReptilNativo(int id, string nome_batismo, string nome, string nome_cientifico, string classe, string dieta,
               char sexo, float tamanho, int total_mudas, string data_ultima_muda, string estado_origem):
                   Reptil(id, nome_batismo, nome, nome_cientifico, classe, dieta, sexo, tamanho, total_mudas, data_ultima_muda),
                   Nativo(estado_origem){}

ReptilNativo::~ReptilNativo(){}

ostream& operator<< (ostream &o, ReptilNativo &reptilnativo){
    o << setfill(' ') << left<< setw(8) << reptilnativo.get_id()
      << setfill(' ') << left << setw(24) << reptilnativo.get_nome()
      << setfill(' ') << left << setw(24) << reptilnativo.get_nome_batismo()
      << setfill(' ') << left << setw(8) << reptilnativo.get_sexo()
      << setfill(' ') << left << setw(5) << reptilnativo.get_tamanho()
      << setfill(' ') << left << setw(18) << reptilnativo.get_classe()
      << setfill(' ') << left << setw(15) << "BRASIL";
    return o;
}
