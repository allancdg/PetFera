#include "reptilexotico.hpp"

ReptilExotico::ReptilExotico(){}

ReptilExotico::ReptilExotico(int id, string nome_batismo, string nome, string nome_cientifico, string classe, string dieta,
                char sexo, float tamanho, int total_mudas, string data_ultima_muda,
                char extincao, char autorizacao_ibama, string pais_origem):
                    Reptil(id, nome_batismo, nome, nome_cientifico, classe, dieta, sexo, tamanho, total_mudas, data_ultima_muda),
                    Exotico(extincao, autorizacao_ibama, pais_origem){}

ReptilExotico::~ReptilExotico(){}

ostream& operator<< (ostream &o, ReptilExotico &re){
    o << setfill('.') << setw(5) << re.get_id()
      << setfill('.') << setw(20) << re.get_nome()
      << setfill('.') << setw(5) << re.get_sexo()
      << setfill('.') << setw(10) << re.get_classe();
    return o;
}
