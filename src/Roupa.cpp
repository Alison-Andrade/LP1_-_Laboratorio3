#include "../Includes/Roupa.h"

Roupa::Roupa(string codBarras_, string descricao_, float preco_, string marca_, char sexo_, char tamanho_):
Produto(codBarras_, descricao_, preco_), marca(marca_), sexo(sexo_), tamanho(tamanho_)
{}

Roupa::~Roupa()
{}

string
Roupa::getMarca(){
	return marca;
}

void
Roupa::setMarca(string marca_){
	marca = marca_;
}

char
Roupa::getSexo(){
	return sexo;
}

void
Roupa::setSexo(char sexo_){
	sexo = sexo_;
}

char
Roupa::getTamanho(){
	return tamanho;
}

void
Roupa::setTamanho(char tamanho_){
	tamanho = tamanho_;
}

void
Roupa::print(ostream &out){
	out << getCodBarras() << " | "
	<< getDescricao() << " | "
	<< getPreco() << " | "
	<< getMarca() << " | "
	<< getSexo() << " | "
	<< getTamanho() << endl;
}