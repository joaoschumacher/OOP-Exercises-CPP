#include "Nadador.h"
#include <iostream>

using namespace std;

Nadador::Nadador() {
	setNome("");
	setIdade(0);
	categoria = "";
}

Nadador::~Nadador() {}

Nadador::Nadador(string nome, int idade, string categoria): Atleta(nome, idade) {
	this->categoria = categoria;
}

string Nadador::getCategoria() {
	return categoria;	
}

void Nadador::setCategoria(string categoria) {
	this->categoria = categoria;
}

void Nadador::imprimeInfo() {
	Atleta::imprimeInfo();
	cout << "Categoria: " << categoria << endl;
}
