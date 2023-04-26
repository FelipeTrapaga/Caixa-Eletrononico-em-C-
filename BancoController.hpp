#ifndef bancoController_HPP
#define bancoController_HPP
#include "CaixaEletronico.hpp"
#include "ContaCorrente.hpp"
class Controlador {
    public:
    void executar();  
private:
    CaixaEletronico caixa;
};
#endif
