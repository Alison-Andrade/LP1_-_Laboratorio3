#include <iostream>

#include "../Includes/Roupa.h"
#include "../Includes/Bebida.h"

int main(int argc, char const *argv[]){
	
	Produto *r = new Roupa("7895456123857", "Uma roupa", 7.98, "qwesd", 'M', 'G');
	Produto *b = new Bebida("7895459423857", "Uma bebida", 7.98, 33.3);

	cout << *r;
	cout << *b;
	
	return 0;
}