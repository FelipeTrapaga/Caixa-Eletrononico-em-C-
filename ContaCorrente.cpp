#include "ContaCorrente.hpp"

ContaCorrente::ContaCorrente(int numeroConta) {
    this->numeroConta = numeroConta;
    this->saldo = 0.0;
}

int ContaCorrente::getNumeroConta() {
    return numeroConta;
}

double ContaCorrente::getSaldo() {
    return saldo;
}

bool ContaCorrente::sacar(double valor) {
    if (valor > saldo) {
        return false;
    }
    saldo -= valor;
    return true;
}

void ContaCorrente::depositar(double valor) {
    saldo += valor;
}

