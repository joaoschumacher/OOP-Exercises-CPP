#include <iostream>
#include "Data.h"
#include "Atleta.h"
#include "Competicao.h"
#include "Nadador.h"

using namespace std;

int main() {
	Atleta atleta = Atleta("Joao", 21);
	atleta.imprimeInfo();
	atleta.setIdade(22);
	atleta.setNome("Pedro");
	cout << atleta.getNome() << ", " << atleta.getIdade() << endl;

	Data data = Data(15, 07, 2003);
	data.imprimeData();
	data.setAno(2004);
	data.imprimeData();

	Competicao competicao = Competicao("evento", data);
	competicao.imprimeData();

	Nadador nadador("Maria", 15, "Juvenil");
	nadador.imprimeInfo();


	return 0;
}