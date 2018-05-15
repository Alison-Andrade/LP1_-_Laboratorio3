#ifndef _PRODUTO_H_
#define _PRODUTO_H_

#include <string>
#include <iostream>

using namespace std;

class Produto {
private:
	string codBarras;
	string descricao;
	float preco;
public:
	Produto(string codBarras_, string descricao_, float preco_);
	~Produto();

	string getCodBarras();
	void setCodBarras(string);
	string getDescricao();
	void setDescricao(string);
	float getPreco();
	void setPreco(float);

	float operator+(Produto &p1);
	float operator-(Produto &p1);
	bool operator==(Produto &p1);

	virtual void print(ostream &out) = 0;
	friend ostream& operator<<(ostream &out, Produto &p);
	
};


#endif
