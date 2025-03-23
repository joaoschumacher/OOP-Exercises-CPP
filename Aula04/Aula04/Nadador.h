#pragma once
#include "Atleta.h"

class Nadador: protected Atleta {
	private:
		string categoria;
	public:
		Nadador();
		~Nadador();
		Nadador(string nome, int idade, string categoria);
		string getCategoria();
		void setCategoria(string categoria);
		void imprimeInfo();
};

