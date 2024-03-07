#ifndef _CODAPUNT_
#define _CODAPUNT_
    
   
   #include "nodo.cpp"
    using namespace std;
    
    template < class tipoelem >
    class Coda {
         public:
            Coda();
            ~Coda();
          
            void creaCoda();
            bool codaVuota();
            void fuoriCoda();
            void inCoda(tipoelem);
            tipoelem leggiCoda();
            void stampaCoda();
            
        private:
            Nodo<tipoelem> gestore_coda;
            int n_elementi;
    };
     
   
#endif 
