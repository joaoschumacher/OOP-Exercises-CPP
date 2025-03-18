#pragma once
#include <string>

using namespace std;

class Pessoa {
	private:
		string nome;
		int idade;
		float altura;
		int quantidadeIrmaos;
		string endereco;
	public:
		Pessoa();
		Pessoa(string nome, int idade, float altura, int quantidadeIrmaos, string endereco);
		~Pessoa();

		void setNome(string nome);
		string getNome();

		void setIdade(int idade);
		int getIdade();

		void setAltura(float altura);
		float getAltura();

		void setQuantidadeIrmaos(int quantidadeIrmaos);
		int getQuantidadeIrmaos();

		void setEndereco(string endereco);
		string getEndereco();

		void imprimeInfo();

		bool isFilhoUnico();
};

