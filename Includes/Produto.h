#ifndef _PRODUTO_H_
#define _PRODUTO_H_

#include <string>

using namespace std;

class Produto {
private:
	string codBarras;
	string descricao;
	float preco;
public:
	Produto(string codBarras_, string descricao_, float preco_);
	~Produto();

	virtual std::ostream& operator<<(ostream &out, Produto &p) = 0;
	string getCodBarras();
	void setCodBarras(string);
	string getDescricao();
	void setDescricao(string);
	float getPreco();
	void setPreco(float);
};

#endif