#include "ContaBancaria.cpp"

using namespace std;

int main() {
    ContaBancaria conta;
    conta.abrir(1234, 5678, "Joao", CONTA_SALARIO);
    conta.depositar(1000);
    conta.consultar();
    conta.retirarExtrato();
    conta.sacar(500);
    conta.consultar();
    conta.retirarExtrato();
    conta.fechar();
    return 0;
}