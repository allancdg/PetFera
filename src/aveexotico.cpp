#include "aveexotico.hpp"

AveExotico::AveExotico(){}

AveExotico::AveExotico(int id, string nome_batismo, string nome, string nome_cientifico, string classe, string dieta,
               char sexo, float tamanho, int tamanho_bico, int tamanho_pernas, string cor_penas,
               char extincao, char autorizacao_ibama, string pais_origem):
                   Ave(id, nome_batismo, nome, nome_cientifico, classe, dieta, sexo, tamanho, tamanho_bico,
                        tamanho_pernas, cor_penas),
                   Exotico(extincao, autorizacao_ibama, pais_origem){}

AveExotico::~AveExotico(){}

ostream& operator<< (ostream &o, AveExotico &ave){
    o << setfill('.') << setw(5) << ave.get_id()
      << setfill('.') << setw(20) << ave.get_nome()
      << setfill('.') << setw(5) << ave.get_sexo()
      << setfill('.') << setw(10) << ave.get_classe();
    return o;
}
