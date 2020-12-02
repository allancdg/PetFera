#include "mamiferoexotico.hpp"

MamiferoExotico::MamiferoExotico(){}

MamiferoExotico::MamiferoExotico(int id, string nome_batismo, string nome, string nome_cientifico, string classe, string dieta,
               char sexo, float tamanho, string cor_pelo, char extincao, char autorizacao_ibama, string pais_origem):
                    Mamifero(id, nome_batismo, nome, nome_cientifico, classe, dieta, sexo, tamanho, cor_pelo),
                    Exotico(extincao, autorizacao_ibama, pais_origem){}

MamiferoExotico::~MamiferoExotico(){}

ostream& operator<< (ostream &o, MamiferoExotico &me){
    o << setfill('.') << setw(5) << me.get_id()
      << setfill('.') << setw(20) << me.get_nome()
      << setfill('.') << setw(5) << me.get_sexo()
      << setfill('.') << setw(10) << me.get_classe();
    return o;
}
