#include "mamiferonativo.hpp"

MamiferoNativo::MamiferoNativo(){}

MamiferoNativo::MamiferoNativo(int id, string nome_batismo, string nome, string nome_cientifico, string classe, string dieta,
               char sexo, float tamanho, string cor_pelo, string estado_origem):
                    Mamifero(id, nome_batismo, nome, nome_cientifico, classe, dieta, sexo, tamanho, cor_pelo),
                    Nativo(estado_origem){}

MamiferoNativo::~MamiferoNativo(){}

ostream& operator<< (ostream &o, MamiferoNativo &mamiferonativo){
    o << setfill(' ') << left<< setw(8) << mamiferonativo.get_id()
      << setfill(' ') << left << setw(24) << mamiferonativo.get_nome()
      << setfill(' ') << left << setw(24) << mamiferonativo.get_nome_batismo()
      << setfill(' ') << left << setw(8) << mamiferonativo.get_sexo()
      << setfill(' ') << left << setw(5) << mamiferonativo.get_tamanho()
      << setfill(' ') << left << setw(18) << mamiferonativo.get_classe()
      << setfill(' ') << left << setw(15) << "BRASIL";
    return o;
}
