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
    Transacao* historicoDasTransacoes = conta.retirarExtrato();
    for(int i = 0; i < conta.getQuantidadeDeTransacoes(); i++) {
        cout << "--------------------------------" << endl;
        cout << "Transacao " << i + 1 << endl;
        cout << "Tipo: ";
        switch (historicoDasTransacoes[i].getTipo()) {
            case DEPOSITO:
            cout << "Deposito" << endl;
            break;
            case SAQUE:
            cout << "Saque" << endl;
            break;
            case TRANSFERENCIA:
            cout << "Transferencia" << endl;
            break;
        }
        cout << "Valor: " << historicoDasTransacoes[i].getValor() << endl;
        cout << "Data: " << historicoDasTransacoes[i].getData() << endl;
        cout << "De: " << *historicoDasTransacoes[i].getDe() << endl;
        cout << "Para: " << *historicoDasTransacoes[i].getPare() << endl;
        cout << "--------------------------------" << endl;
    };
    conta.fechar();
    return 0;
}