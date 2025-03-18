#include "Calculadora.h"
#include <iostream>

using namespace std;

Calculadora::Calculadora() {
	memoria = 0;
	cor = PRETO;
}

Calculadora::Calculadora(Cor cor) {
	memoria = 0;
	this->cor = cor;
}

Calculadora::~Calculadora() {
}

void Calculadora::setMemoria(float memoria) {
	this->memoria = memoria;
}

float Calculadora::getMemoria() {
	return memoria;
}

void Calculadora::setCor(Cor cor) {
	this->cor = cor;
}

Cor Calculadora::getCor() {
	return cor;
}

float Calculadora::soma(float valor1, float valor2) {
	return valor1 + valor2;
}

float Calculadora::subtrai(float valor1, float valor2) {
	return valor1 - valor2;
}

float Calculadora::multiplica(float valor1, float valor2) {
	return valor1 * valor2;
}

float Calculadora::divide(float valor1, float valor2) {
	if (valor2 == 0) {
		cout << "Erro: Divisão por zero!" << endl;
		return 0;
	}
	return valor1 / valor2;
}


int Calculadora::elevaQuadrado(int valor) {
	return multiplica(valor, valor);
}

int Calculadora::elevaCubo(int valor) {
	return valor * valor * valor;
}

string Calculadora::corToString(Cor cor) {
	switch (cor) {
	case VERMELHO: return "Vermelho";
	case AZUL: return "Azul";
	case VERDE: return "Verde";
	case AMARELO: return "Amarelo";
	case LARANJA: return "Laranja";
	case ROXO: return "Roxo";
	case ROSA: return "Rosa";
	case MARROM: return "Marrom";
	case CINZA: return "Cinza";
	case PRETO: return "Preto";
	case BRANCO: return "Branco";
	default: return "Desconhecido";
	}
}

void Calculadora::imprimeInfo() {
	cout << "Memoria: " << memoria << endl;
	cout << "Cor: " << corToString(cor) << endl;
}