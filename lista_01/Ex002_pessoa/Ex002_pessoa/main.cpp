#include "Pessoa.h"

int main() {
	Pessoa pessoa1 = Pessoa("Joao", 21, 1.81, 2, "Novo Hamburgo");
	Pessoa pessoa2 = Pessoa("Fulano", 65, 1.33, 1, "Sao Leopoldo");
	Pessoa pessoa3 = Pessoa("Siclano", 13, 2.10, 5, "Porto Alegre");
	
	pessoa1.imprimeInfo();
	pessoa2.imprimeInfo();
	pessoa3.imprimeInfo();
}