#ifndef	POLINOMIO_HPP
#define	POLINOMIO_HPP
#include "listaligada.hpp"
#include "mono.hpp"

template <typename E>
class Polinomio: public Listaligada<Monomio*>{

  public: 
    Polinomio();
    ~Polinomio();
    void insere(Monomio X);
    int getGrau();
    void mostra();
    double calcula(double k);
};

template <typename E>
Polinomio<E>::Polinomio(){
Listaligada<Monomio*>();
};

template <typename E>
Polinomio<E>::~Polinomio(){}

template <typename E>
void Polinomio<E>::insere(Monomio X){
  Listaligada<Monomio*>::insereInicio(&X);
};


template <typename E>
void Polinomio<E>::mostra(){
  No<Monomio*> * cursor = getCabeca();
  while(cursor!=NULL){
    Monomio* A = getElem(cursor);
    if(getProx(cursor)!= NULL){
      if(A->getMonGrau()!= 0){
        cout<<A->getMonCoef()<<"Xe"<<A->getMonGrau()<<" + ";
      }
      else{
        cout<<A->getMonCoef()<<" + ";
      }
    }
    else{
      if(A->getMonGrau() != 0){
        cout<<A->getMonCoef()<<"Xe"<<A->getMonGrau()<<endl;
      }
      else{
        cout<<A->getMonCoef()<<endl;
        }
      }
    cursor = getProx(cursor);
  }
}
 

template<typename E> 
double Polinomio<E>::calcula(double k){
  No<Monomio*> *cursor = getCabeca();
  double soma = 0;
  while(cursor != NULL){
    Monomio* A = getElem(cursor);
    double elemento = A->getMonCoef();
      if (elemento == k) soma = soma + elemento;
  
    cursor = getProx(cursor);

  }
  return soma;
}

#endif
