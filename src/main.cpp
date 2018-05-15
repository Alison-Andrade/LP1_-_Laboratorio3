#include <iostream>

#include "../Includes/Roupa.h"

int main(int argc, char const *argv[]){
	
	Produto *r = new Roupa("7895456123857", "Uma roupa", 7.98, "qwesd", 'M', 'G');

	cout << *r;
	
	return 0;
}