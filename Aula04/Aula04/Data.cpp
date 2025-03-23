#include "Data.h"
#include <iostream>

using namespace std;

Data::Data() {
	dia = 0;
	mes = 0;
	ano = 0;
}

Data::~Data() {}

Data::Data(int dia, int mes, int ano) {
	this->dia = dia;
	this->mes = mes;
	this->ano = ano;
}

int Data::getDia() {
	return dia;
}

void Data::setDia(int dia) {
	this->dia = dia;
}

int Data::getMes() {
	return mes;
}

void Data::setMes(int mes) {
	this->mes = mes;
}

int Data::getAno() {
	return ano;
}

void Data::setAno(int ano) {
	this->ano = ano;
}

void Data::imprimeData() {
	cout << dia << "/" << mes << "/" << ano << endl;
}
