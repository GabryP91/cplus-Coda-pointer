 #include <iostream>
 #include <assert.h>
 #include "coda.h"
 
 template < class tipoelem >
     Coda<tipoelem>::Coda() {
           creaCoda();                  
     };     
    
    template < class tipoelem >
     Coda<tipoelem>::~Coda() {};     
     
     
    template < class tipoelem >
    void  Coda<tipoelem>::creaCoda() {
          n_elementi = 0;                    
     };     
     
     
    template < class tipoelem >
     bool Coda<tipoelem>::codaVuota() {
        bool risp;
        
        if ( n_elementi == 0) 
           risp = true;
         else 
            risp = false;
           
         return risp;                         
     };
     
    template < class tipoelem >
    void Coda<tipoelem>::inCoda(tipoelem x) { 
          n_elementi++;
          gestore_coda.Set_Valore(x);   
    };
    
    template < class tipoelem >
    void Coda<tipoelem>::stampaCoda() { 
         gestore_coda.print();    
    };
    
    template < class tipoelem >
    tipoelem Coda<tipoelem>::leggiCoda(){
             assert((!codaVuota()));

           return gestore_coda.get_value();            
    }
    
    //elimina il primo elemento inserito nella coda
     template < class tipoelem >
    void Coda<tipoelem>::fuoriCoda(){
             assert((!codaVuota()));
             gestore_coda.out_queue();  
             n_elementi--;           
    }