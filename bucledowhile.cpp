#include <iostream>

using namespace std; 

int main()
{
    cout<<endl<<"Ejemplo del bucle de while";

    int cont=10;
    int tabla =5;
    do{
        cout<<endl<<tabla << " x " <<cont << " = " << (tabla * cont);
        cont--;
    }while(cont>=1);

    return 0;
}