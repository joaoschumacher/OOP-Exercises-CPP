#include "Competicao.h"

using namespace std;

Competicao::Competicao() {
	nome = "";
	data = Data();
}

Competicao::~Competicao() {}

Competicao::Competicao(string nome, Data data) {
	this->nome = nome;
	this->data = data;
}

string Competicao::getNome() {
	return nome;
}

void Competicao::setNome(string nome) {
	this->nome = nome;
}

Data Competicao::getData() {
	return data;
}

void Competicao::setData(Data data) {
	this->data = data;
}

void Competicao::imprimeData() {
	data.imprimeData();
}