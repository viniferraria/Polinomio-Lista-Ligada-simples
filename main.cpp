#include <iostream>
#include "listaligada.hpp"
#include "poli.hpp"
#include "mono.hpp"
using namespace std;

int main() {
  
  Polinomio <Monomio*> Polista;
  Monomio A(2.9, 3);
  Monomio B(2.9, 5);
  Polista.insere(A);
  Polista.insere(B);
  Polista.mostra();
  cout<<endl<<"Calcula: "<<Polista.calcula(2.9);

}