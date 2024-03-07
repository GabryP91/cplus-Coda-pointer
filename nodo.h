#ifndef _Nodo
#define _Nodo
#include <iostream>
#include "cella.h"

using namespace std;

template <class tipoelem>

class Nodo{

    public:
         Nodo();
   	   	~Nodo();
      void Set_Valore(tipoelem);
      Cella<tipoelem>* last_full();
      tipoelem get_value();
      void out_queue();
      void print();
      void create();

      private:
        Cella<tipoelem>* coda; //puntatore alla testa della coda
        Cella<tipoelem>* fine_coda; // puntatore all'ultimo elemento della coda
};



#endif
