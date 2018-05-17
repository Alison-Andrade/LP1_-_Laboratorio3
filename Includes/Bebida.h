#ifndef _BEBIDA_H_
#define _BEBIDA_H_

#include "../Includes/Produto.h"

class Bebida: public Produto {
private:
	float teorAlcolico;
public:
	Bebida(string codBarras_, string descricao_, float preco_, float teorAlcolico_);
	~Bebida();

	float getTeorAlcolico();
	void setTeorAlcolico(float teorAlcolico_);

	ostream& print(ostream &out);
};

#endif