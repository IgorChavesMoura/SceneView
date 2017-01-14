#include "Cenario.h"

Cenario::Cenario(FonteLuminosa *fl){
    FL = fl;
    solid = true;
    wired = true;
}

void Cenario::adicionarObjeto(Objeto *o){
    listaObjetos.push_back(o);
}

void Cenario::modelar(){}

void Cenario::resetar()
{
    for(int i = listaObjetos.size(); i > 0; i--){
        listaObjetos.pop_back();
    }
}
