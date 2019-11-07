#ifndef LISTALIGADA_HPP
#define LISTALIGADA_HPP
#include <iostream>
#include "No.hpp"

using namespace std;

template <typename E>
class Listaligada{
  private:
    No<E>*cabeca;
  public:
    Listaligada();
    ~Listaligada();
    bool vazia() const;
    const E& inicio() const;
    void insereInicio(E const& e);
    void removeInicio();
    No<E>* getCabeca();
    No<E>* getProx(No<E> * aux);
    E getElem(No<E> * aux);
    };

template <typename E>
Listaligada<E>::Listaligada(){
  cabeca = NULL;
}

template <typename E>
Listaligada<E>::~Listaligada(){
  delete cabeca;
}

template <typename E>
bool Listaligada<E>::vazia() const{
  return cabeca == NULL;
}

template <typename E>
const E& Listaligada<E>::inicio()const{
  return cabeca -> elem;
}

template <typename E>
void Listaligada<E>::insereInicio(E const& e){
  No<E>*aux;
  aux = new No<E>();
  aux -> elem = e;
  aux -> prox = cabeca;
  cabeca = aux;
}

template <typename E>
void Listaligada<E>::removeInicio(){
  if(!vazia()){
    No<E>*aux = cabeca;
    cabeca = cabeca -> prox;
    delete aux;
  }
}

template <typename E>
No<E>* Listaligada<E>::getCabeca(){
  return cabeca;
}

template <typename E>
No<E>* Listaligada<E>::getProx(No<E> * aux){
  return aux->prox;
}

template <typename E>
E Listaligada<E>::getElem(No<E> * aux){
  return aux->elem;
}


#endif