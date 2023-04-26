#ifndef CONTACORRENTE_HPP
#define CONTACORRENTE_HPP

class ContaCorrente {
    private:
        int numeroConta;
        double saldo;
    public:
        ContaCorrente(int numeroConta);
        int getNumeroConta();
        double getSaldo();
        bool sacar(double valor);
        void depositar(double valor);
};

#endif
