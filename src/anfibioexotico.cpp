#include "anfibioexotico.hpp"

AnfibioExotico::AnfibioExotico(){}

AnfibioExotico::AnfibioExotico(int id, string nome_batismo, string nome, string nome_cientifico, string classe, string dieta,
               char sexo, float tamanho, int total_mudas, string data_ultima_muda,
               char extincao, char autorizacao_ibama, string pais_origem):
                   Anfibio(id, nome_batismo, nome, nome_cientifico, classe, dieta, sexo, tamanho, total_mudas, data_ultima_muda),
                   Exotico(extincao, autorizacao_ibama, pais_origem){}

AnfibioExotico::~AnfibioExotico(){}

ostream& operator<< (ostream &o, AnfibioExotico &ae){
    o << setfill('.') << setw(5) << ae.get_id()
      << setfill('.') << setw(20) << ae.get_nome()
      << setfill('.') << setw(5) << ae.get_sexo()
      << setfill('.') << setw(10) << ae.get_classe();
    return o;
}
