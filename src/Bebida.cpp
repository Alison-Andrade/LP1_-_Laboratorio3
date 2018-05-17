#include "../Includes/Bebida.h"

Bebida::Bebida(string codBarras_, string descricao_, float preco_, float teorAlcolico_):
Produto(codBarras_, descricao_, preco_), teorAlcolico(teorAlcolico_)
{}

Bebida::~Bebida()
{}

float
Bebida::getTeorAlcolico(){
	return teorAlcolico;
}

void
Bebida::setTeorAlcolico(float teorAlcolico_){
	teorAlcolico = teorAlcolico_;
}

ostream&
Bebida::print(ostream &out){
	out << getCodBarras() << " | "
	<< getDescricao() << " | "
	<< getPreco() << " | "
	<< getTeorAlcolico() << "%" << endl;

	return out;
}