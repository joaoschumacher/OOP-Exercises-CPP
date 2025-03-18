#include "Pessoa.h"
#include <iostream>

using namespace std;

Pessoa::Pessoa() {
	nome = "";
	idade = 0;
	altura = 0;
	quantidadeIrmaos = 0;
	endereco = "";
}

Pessoa::Pessoa(string nome, int idade, float altura, int quantidadeIrmaos, string endereco) {
	this->nome = nome;
	this->idade = idade;
	this->altura = altura;
	this->quantidadeIrmaos = quantidadeIrmaos;
	this->endereco = endereco;
}

Pessoa::~Pessoa() {
}

void Pessoa::setNome(string nome) {
	this->nome = nome;
}

string Pessoa::getNome() {
	return nome;
}

void Pessoa::setIdade(int idade) {
	this->idade = idade;
}

int Pessoa::getIdade() {
	return idade;
}

void Pessoa::setAltura(float altura) {
	this->altura = altura;
}

float Pessoa::getAltura() {
	return altura;
}

void Pessoa::setQuantidadeIrmaos(int quantidadeIrmaos) {
	this->quantidadeIrmaos = quantidadeIrmaos;
}

int Pessoa::getQuantidadeIrmaos() {
	return quantidadeIrmaos;
}

void Pessoa::setEndereco(string endereco) {
	this->endereco = endereco;
}

string Pessoa::getEndereco() {
	return endereco;
}

void Pessoa::imprimeInfo() {
	cout << "----------------" << endl;
	cout << "Nome: " << nome << endl;
	cout << "Idade: " << idade << endl;
	cout << "Altura: " << altura << " m" << endl;
	if (this->isFilhoUnico()) {
		cout << "Filho(a) unico(a)" << endl;
	} else {
		cout << "Nao e filho(a) unico(a)" << endl;
		cout << "Quantidade de irmaos: " << quantidadeIrmaos << endl;
	}
	cout << "Endereco: " << endereco << endl;
}

bool Pessoa::isFilhoUnico() {
	if (quantidadeIrmaos > 1) {
		return false;
	} else {
		return true;
	}
}

