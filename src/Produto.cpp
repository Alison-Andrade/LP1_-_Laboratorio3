#include "../Includes/Produto.h"

Produto::Produto(string codBarras_, string descricao_, float preco_):
codBarras(codBarras_), descricao(descricao_), preco(preco_)
{}

Produto::~Produto()
{}

string
Produto::getCodBarras(){
	return codBarras;
}

void
Produto::setCodBarras(string codBarras_){
	codBarras = codBarras_;
}

string
Produto::getDescricao(){
	return descricao;
}

void
Produto::setDescricao(string descricao_){
	descricao = descricao_;
}

float
Produto::getPreco(){
	return preco;
}

void
Produto::setPreco(float preco_){
	preco = preco_;
}

ostream& operator<<(ostream &out, Produto &p){
	
	p.print(out);

	return out;
}