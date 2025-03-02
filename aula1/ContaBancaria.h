#include <string>

class ContaBancaria{
    public: 
        // Construtor padrão
        ContaBancaria();
        //Destrutor
        ~ContaBancaria();
    
        // Métodos
        bool Abrir(int numeroConta, int numeroAgencia, std::string nome, int tipo);
        bool AlteraSenha(std::string senha);
        void Depositar(float valor);
        void Sacar(float valor);
        void Consultar();
        void Fechar();
    private:
        int numeroDaConta;
        int numeroDaAgencia;
        std::string nomeCliente;
        std::string senha;
        int tipoDaConta;
        float saldo;
        bool ativa;
};