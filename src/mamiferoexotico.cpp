#include "mamiferoexotico.hpp"

MamiferoExotico::MamiferoExotico(){}

MamiferoExotico::MamiferoExotico(int id, string nome_batismo, string nome, string nome_cientifico, string classe, string dieta,
               char sexo, float tamanho, string cor_pelo, char extincao, char autorizacao_ibama, string pais_origem):
                    Mamifero(id, nome_batismo, nome, nome_cientifico, classe, dieta, sexo, tamanho, cor_pelo),
                    Exotico(extincao, autorizacao_ibama, pais_origem){}

MamiferoExotico::~MamiferoExotico(){}

ostream& operator<< (ostream &o, MamiferoExotico &mamiferoexotico){
    o << setfill(' ') << left<< setw(8) << mamiferoexotico.get_id()
      << setfill(' ') << left << setw(24) << mamiferoexotico.get_nome()
      << setfill(' ') << left << setw(24) << mamiferoexotico.get_nome_batismo()
      << setfill(' ') << left << setw(8) << mamiferoexotico.get_sexo()
      << setfill(' ') << left << setw(5) << mamiferoexotico.get_tamanho()
      << setfill(' ') << left << setw(18) << mamiferoexotico.get_classe()
      << setfill(' ') << left << setw(18) << mamiferoexotico.get_pais_origem();
    return o;
}
