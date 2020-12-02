#include "avenativo.hpp"

AveNativo::AveNativo(){}

AveNativo::AveNativo(int id, string nome_batismo, string nome, string nome_cientifico, string classe, string dieta,
               char sexo, float tamanho, int tamanho_bico, int tamanho_pernas, string cor_penas, string estado_origem):
                   Ave(id, nome_batismo, nome, nome_cientifico, classe, dieta, sexo, tamanho, tamanho_bico,
                        tamanho_pernas, cor_penas),
                   Nativo(estado_origem){}

AveNativo::~AveNativo(){}

ostream& operator<< (ostream &o, AveNativo &avn){
    o << setfill('.') << setw(5) << avn.get_id()
      << setfill('.') << setw(20) << avn.get_nome()
      << setfill('.') << setw(5) << avn.get_sexo()
      << setfill('.') << setw(10) << avn.get_classe();
    return o;
}
