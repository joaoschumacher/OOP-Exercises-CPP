#pragma once
#include <string>
#include "FuncionarioCaixa.h"

using namespace std;

class Empresa {
	private:
		string nome;
		FuncionarioCaixa funcionarioCaixa1;
		FuncionarioCaixa funcionarioCaixa2;
	public:
		Empresa();
		~Empresa();
		Empresa(string nome, FuncionarioCaixa funcionarioCaixa1, FuncionarioCaixa funcionarioCaixa2);
		
		string getNome();
		void setNome(string nome);
		FuncionarioCaixa getFuncionarioCaixa1();
		void setFuncionarioCaixa1(FuncionarioCaixa funcionarioCaixa1);
		FuncionarioCaixa getFuncionarioCaixa2();
		void setFuncionarioCaixa2(FuncionarioCaixa funcionarioCaixa2);

		void imprime_info();
};

