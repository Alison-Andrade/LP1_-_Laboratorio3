#include <iostream>
#include <vector>
#include <fstream>

#include "../Includes/Roupa.h"
#include "../Includes/Bebida.h"
#include "../Includes/Fruta.h"
#include "../Includes/Produto.h"

int main(int argc, char const *argv[]){
	
	vector<shared_ptr<Produto>> lista;

	ifstream Frutas;
	Frutas.open("../Data/Fruta.dat");

	ifstream Bebidas;
	Bebidas.open ("../Data/Bebida.dat");

	ifstream Roupas;
	Roupas.open ("../Data/Roupa.dat");

	string in;
	while(std::getline(Frutas, in)) {
		string codBarras_;
		string descricao_;
		string preco_;
		string dataLote_;
		string validade_;

		lista.pushback(make_sharede<Produto> fruta(codBarras_, descricao_,
			preco_, dataLote_, validade_));
	}
	
	return 0;
}