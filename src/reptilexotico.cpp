#include "reptilexotico.hpp"

ReptilExotico::ReptilExotico(){}

ReptilExotico::ReptilExotico(int id, string nome_batismo, string nome, string nome_cientifico, string classe, string dieta,
                char sexo, float tamanho, int total_mudas, string data_ultima_muda,
                char extincao, char autorizacao_ibama, string pais_origem):
                    Reptil(id, nome_batismo, nome, nome_cientifico, classe, dieta, sexo, tamanho, total_mudas, data_ultima_muda),
                    Exotico(extincao, autorizacao_ibama, pais_origem){}

ReptilExotico::~ReptilExotico(){}

ostream& operator<< (ostream &o, ReptilExotico &reptilexotico){
    o << setfill(' ') << left<< setw(8) << reptilexotico.get_id()
      << setfill(' ') << left << setw(24) << reptilexotico.get_nome()
      << setfill(' ') << left << setw(24) << reptilexotico.get_nome_batismo()
      << setfill(' ') << left << setw(8) << reptilexotico.get_sexo()
      << setfill(' ') << left << setw(5) << reptilexotico.get_tamanho()
      << setfill(' ') << left << setw(18) << reptilexotico.get_classe()
      << setfill(' ') << left << setw(18) << reptilexotico.get_pais_origem();
    return o;
}
