#include "mamiferonativo.hpp"

MamiferoNativo::MamiferoNativo(){}

MamiferoNativo::MamiferoNativo(int id, string nome_batismo, string nome, string nome_cientifico, string classe, string dieta,
               char sexo, float tamanho, string cor_pelo, string estado_origem):
                    Mamifero(id, nome_batismo, nome, nome_cientifico, classe, dieta, sexo, tamanho, cor_pelo),
                    Nativo(estado_origem){}

MamiferoNativo::~MamiferoNativo(){}

ostream& operator<< (ostream &o, MamiferoNativo &mn){
    o << setfill('.') << setw(5) << mn.get_id()
      << setfill('.') << setw(20) << mn.get_nome()
      << setfill('.') << setw(5) << mn.get_sexo()
      << setfill('.') << setw(10) << mn.get_classe();
    return o;
}
