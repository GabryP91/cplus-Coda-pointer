#include <cstdlib>
#include <iostream>
#include "coda.cpp"
using namespace std;

int main(int argc, char *argv[])
{
    Coda<int> coda;
    int i;
    
    for (i=0; i<4; i++)
         coda.inCoda(i+1);
    
    //stampo elementi coda
    coda.stampaCoda();

    coda.fuoriCoda();
  
    int x = coda.leggiCoda();
    
    cout << "primo elemento coda dopo cancellazione: " << x << endl;

    
    for (i=0; i<3; i++)
        coda.fuoriCoda();
    
    
    coda.stampaCoda();

    system("PAUSE");
    return EXIT_SUCCESS;
}
