#pragma once
#include <string>
#include "Data.h"

using namespace std;

class Competicao {
	private:
		string nome;
		Data data;
	public:
		Competicao();
		~Competicao();
		Competicao(string nome, Data data);

		string getNome();
		void setNome(string nome);
		Data getData();
		void setData(Data data);

		void imprimeData();
};

