#ifndef NO_HPP
#define NO_HPP
#include "listaligada.hpp"

template <typename E>
class No{
  private: 
    E elem;
    No<E>* prox;
   template <typename U> friend class Listaligada;
};

#endif