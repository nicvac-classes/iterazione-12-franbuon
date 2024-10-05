#include <iostream>
using namespace std;

int main() {
    float costo, risp, nuovorisp, ciframancante, cifraaggiuntiva;
    int i;
    cout<<"Quanto costa la moto?"<<endl;
    cin>>costo;
    cout<<"Quanto hai risparmiato?"<<endl;
    cin>>risp;
    i=0;
    while (costo>risp)
    {
         cout<<"Quanto hai risparmiato oggi?"<<endl;
        cin>>nuovorisp;
        risp=risp+nuovorisp;
        ciframancante=costo-risp;
        cout="La cifra mancante è "<<ciframancante<<"€"<<endl;
        i=i+1;
    }
    cifraaggiuntiva=risp-costo;
    cout<<"Hai risparmiato per "<<i<<" giorni"<<endl;
    cout<<"Hai risparmiato "<<risp<<"€"<<endl;
    cout<<"Ti sono avanzati "<<cifraaggiuntiva<<"€";
}

//LEGGERE LE ISTRUZIONI NEL FILE README.md
