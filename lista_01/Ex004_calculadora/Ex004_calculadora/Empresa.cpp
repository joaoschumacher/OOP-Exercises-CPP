#include "Empresa.h"
#include <iostream>

using namespace std;

Empresa::Empresa() {
	this->nome = "";
	this->funcionarioCaixa1 = FuncionarioCaixa();
	this->funcionarioCaixa2 = FuncionarioCaixa();
}

Empresa::~Empresa() {
}

Empresa::Empresa(string nome, FuncionarioCaixa funcionarioCaixa1, FuncionarioCaixa funcionarioCaixa2) {
	this->nome = nome;
	this->funcionarioCaixa1 = funcionarioCaixa1;
	this->funcionarioCaixa2 = funcionarioCaixa2;
}

string Empresa::getNome() {
	return this->nome;
}

void Empresa::setNome(string nome) {
	this->nome = nome;
}

FuncionarioCaixa Empresa::getFuncionarioCaixa1() {
	return this->funcionarioCaixa1;
}

void Empresa::setFuncionarioCaixa1(FuncionarioCaixa funcionarioCaixa1) {
	this->funcionarioCaixa1 = funcionarioCaixa1;
}

FuncionarioCaixa Empresa::getFuncionarioCaixa2() {
	return this->funcionarioCaixa2;
}

void Empresa::setFuncionarioCaixa2(FuncionarioCaixa funcionarioCaixa2) {
	this->funcionarioCaixa2 = funcionarioCaixa2;
}

void Empresa::imprime_info() {
	cout << "Nome da empresa: " << this->nome << endl;
	cout << "Funcionario 1: " << this->funcionarioCaixa1.getNome() << endl;
	cout << "Funcionario 2: " << this->funcionarioCaixa2.getNome() << endl;
}