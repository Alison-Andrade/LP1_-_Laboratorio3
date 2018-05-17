#ifndef _FRUTA_H_
#define _FRUTA_H_

class Fruta : public Produto{
public:
	
private:
	std::string m_data_lote;
	short m_validade;
public:

	Fruta();
	Fruta(std::string _codigo, std::string _descricao, short _preco, 
			std::string _data, short _validade);
	~Fruta();

	std::string getDataLote();
	void setDataLote(string data_);
	short getValidade();
	void setValidade(short validade_);
private:
	std::ostream& print(std::ostream &o) const;
};

#endif