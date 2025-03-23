#include "Atleta.h"
#include <iostream>


Atleta::Atleta() {
	nome = "";
	idade = 0;
}

Atleta::~Atleta() {
}

Atleta::Atleta(string nome, int idade) {
	this->nome = nome;
	this->idade = idade;
}


string Atleta::getNome() {
	return nome;
}

void Atleta::setNome(string nome) {
	this->nome = nome;
}

int Atleta::getIdade() {
	return idade;
}

void Atleta::setIdade(int idade) {
	this->idade = idade;
}


void Atleta::imprimeInfo() {
	cout << "Nome: " << nome << endl;
	cout << "idade: " << idade << endl;
}