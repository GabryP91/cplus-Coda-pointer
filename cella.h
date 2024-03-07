#ifndef _cella_h
#define _cella_h

template <class tipoelem>
class Cella{
       public:
     
     tipoelem dato;
     Cella <tipoelem>* succ;
};

#endif
