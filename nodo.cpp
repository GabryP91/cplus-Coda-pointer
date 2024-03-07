#include "nodo.h"

template <class tipoelem>
Nodo<tipoelem>::Nodo()
{
  create();                      
}

template <class tipoelem>
Nodo<tipoelem>::~Nodo() {};

template <class tipoelem>
void Nodo<tipoelem>::create(){
    
    coda=(Cella<tipoelem>*) malloc(sizeof(Cella<tipoelem>));

    coda-> succ = NULL; 
       
    fine_coda=(Cella<tipoelem>*) malloc(sizeof(Cella<tipoelem>));
    fine_coda->succ = fine_coda; 
    
 }


template <class tipoelem>
void Nodo<tipoelem>::Set_Valore(tipoelem e){

   	Cella<tipoelem>* temp;

	temp = (Cella<tipoelem>*) malloc(sizeof(Cella<tipoelem>));

	temp->dato = e; 
     
    temp->succ = NULL; 
    fine_coda->succ = temp;
    
    if (coda->succ == NULL)
       coda->succ = temp;
    else {
         Cella<tipoelem>* pos = coda;
         do {
             
             pos = pos->succ;
             
           } while(pos->succ != NULL);

         pos->succ = temp;  
    }   
       
};


template <class tipoelem>
void Nodo<tipoelem>::print(){

     Cella<tipoelem>* pos = coda;

     if(pos->succ == NULL) cout << "la coda è vuota" << endl;  
     
     else{
            do {
             
              pos = pos->succ;
              tipoelem z = pos->dato;
              
              cout << z << endl;               
           } while(pos->succ != NULL);
     }
     
    
};


template <class tipoelem>
tipoelem Nodo<tipoelem>::get_value() {
       return coda->succ->dato; 
};


template <class tipoelem>
void Nodo<tipoelem>::out_queue() {

     Cella<tipoelem> *x = coda;
     
     if (coda->succ->succ != NULL)   {
                
         coda = coda->succ;
         
         delete x;
     }
     else {
                  
         delete x;
         
         create();
     }    
};