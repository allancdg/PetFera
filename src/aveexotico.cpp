#include "aveexotico.hpp"

AveExotico::AveExotico(){}

AveExotico::AveExotico(int id, string nome_batismo, string nome, string nome_cientifico, string classe, string dieta,
               char sexo, float tamanho, int tamanho_bico, int tamanho_pernas, string cor_penas,
               char extincao, char autorizacao_ibama, string pais_origem):
                   Ave(id, nome_batismo, nome, nome_cientifico, classe, dieta, sexo, tamanho, tamanho_bico,
                        tamanho_pernas, cor_penas),
                   Exotico(extincao, autorizacao_ibama, pais_origem){}

AveExotico::~AveExotico(){}

ostream& operator<< (ostream &o, AveExotico &aveexotico){
    cout << "IN OPERATOR << ON AveExotico" << endl;
    o << setfill(' ') << left<< setw(8) << aveexotico.get_id()
      << setfill(' ') << left << setw(24) << aveexotico.get_nome()
      << setfill(' ') << left << setw(24) << aveexotico.get_nome_batismo()
      << setfill(' ') << left << setw(8) << aveexotico.get_sexo()
      << setfill(' ') << left << setw(5) << aveexotico.get_tamanho()
      << setfill(' ') << left << setw(18) << aveexotico.get_classe()
      << setfill(' ') << left << setw(18) << aveexotico.get_pais_origem();
    return o;
}
