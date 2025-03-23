#include "FuncionarioCaixa.h"

FuncionarioCaixa::FuncionarioCaixa() {
	nome = "";
	endereco = "";
	calculadora = Calculadora();
}

FuncionarioCaixa::~FuncionarioCaixa() {
}
 
FuncionarioCaixa::FuncionarioCaixa(string nome, string endereco, Calculadora calculadora) {
	this->nome = nome;
	this->endereco = endereco;
	this->calculadora = calculadora;
}

string FuncionarioCaixa::getNome() {
	return nome;
}

void FuncionarioCaixa::setNome(string nome) {
	this->nome = nome;
}

string FuncionarioCaixa::getEndereco() {
	return endereco;
}

void FuncionarioCaixa::setEndereco(string endereco) {
	this->endereco = endereco;
}

Calculadora FuncionarioCaixa::getCalculadora() {
	return calculadora;
}

void FuncionarioCaixa::setCalculadora(Calculadora calculadora) {
	this->calculadora = calculadora;
}

float FuncionarioCaixa::soma(float valor1, float valor2) {
	return calculadora.soma(valor1, valor2);
}

float FuncionarioCaixa::subtrai(float valor1, float valor2) {
	return calculadora.subtrai(valor1, valor2);
}

float FuncionarioCaixa::multiplica(float valor1, float valor2) {
	return calculadora.multiplica(valor1, valor2);
}

float FuncionarioCaixa::divide(float valor1, float valor2) {
	return calculadora.divide(valor1, valor2);
}

int FuncionarioCaixa::elevaQuadrado(int valor) {
	return calculadora.elevaQuadrado(valor);
}

int FuncionarioCaixa::elevaCubo(int valor) {
	return calculadora.elevaCubo(valor);
}