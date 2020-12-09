#include "mamiferoexotico.hpp"

MamiferoExotico::MamiferoExotico(){}

MamiferoExotico::MamiferoExotico(int id, string nome_batismo, string nome, string nome_cientifico, string classe, string dieta,
               char sexo, float tamanho, string cor_pelo, char extincao, char autorizacao_ibama, string pais_origem):
                    Mamifero(id, nome_batismo, nome, nome_cientifico, classe, dieta, sexo, tamanho, cor_pelo),
                    Exotico(extincao, autorizacao_ibama, pais_origem){}

MamiferoExotico::~MamiferoExotico(){}

void
MamiferoExotico::cadastrarMamiferoExotico(){

    cadastrarAnimal();

    // ================================================================ //

    cadastrarMamifero();

    // ================================================================ //

    cadastrarExotico();
}
