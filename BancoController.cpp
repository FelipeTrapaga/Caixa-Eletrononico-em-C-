#include "CaixaEletronico.hpp"
#include <iostream>
using namespace std;
void CaixaEletronico::abrirConta() {
  int numeroConta;
  cout << "Digite o numero da nova conta: ";
  cin >> numeroConta;
  contas.push_back(ContaCorrente(numeroConta));
  cout << "Conta criada com sucesso." << endl;
}
void CaixaEletronico::listarContas() {
  cout << "Listando contas correntes..." << endl;
  for (int i = 0; i < contas.size(); i++) {
    cout << "Conta " << contas[i].getNumeroConta() << " - Saldo: R$"
         << contas[i].getSaldo() << endl;
  }
}
void CaixaEletronico::Depositar() {
  double valor;
  int conta;
  cout<<"Digite o número da conta :"<<endl;
  cin>>conta;
  cout<<"Qual valor que deseja depositar "<<endl;
  cin>>valor;
  
 for (int i = 0; i < contas.size(); i++) {
    if (contas[i].getNumeroConta() == conta) {
      contas[i].depositar(valor);
      cout << "Depósito realizado com sucesso." << endl;
      break;
    }
  }
}
void CaixaEletronico::Sacar() {
  double valor;
  int conta;
  cout << "Digite o número da conta: " << endl;
  cin >> conta;
  cout << "Qual valor que deseja sacar: " << endl;
  cin >> valor;

  for (int i = 0; i < contas.size(); i++) {
    if (contas[i].getNumeroConta() == conta) {
      if (contas[i].getSaldo() >= valor) {
        contas[i].sacar(valor);
        cout << "Saque realizado com sucesso." << endl;
      } else {
        cout << "Saldo insuficiente." << endl;
      }
      break;
    }
  }
}
