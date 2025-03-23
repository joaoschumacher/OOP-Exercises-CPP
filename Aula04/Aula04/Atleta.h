#pragma once
#include <string>

using namespace std;

class Atleta {
	private:
		string nome;
		int idade;
	public:
		Atleta();
		~Atleta();
		Atleta(string nome, int idade);

		string getNome();
		void setNome(string nome);
		int getIdade();
		void setIdade(int idade);

		void imprimeInfo();
};

