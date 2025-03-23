#pragma once
class Data {
	private:
		int dia;
		int mes;
		int ano;
	public:
		Data();
		~Data();
		Data(int dia, int mes, int ano);
		
		int getDia();
		void setDia(int dia);
		int getMes();
		void setMes(int mes);
		int getAno();
		void setAno(int ano);

		void imprimeData();
};

