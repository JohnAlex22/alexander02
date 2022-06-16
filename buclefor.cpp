#include <iostream>

using namespace std; 

int main()
{
    cout<<"Ejemplo de bucle for ";

    int tabla=10;
    for(int k=1; k<=10; k++)
    {
        cout<<endl<<tabla << " x " << k << " = " << (tabla * k);
    }

    //Tabla de 3, con incrementos de 2 en 2
    cout<<endl<<"Tabla del 3";

    tabla=3;
    for(int k=1; k<=30; k+=2)
    {
        cout<<endl<<tabla << " x " << k << " = " << (tabla * k);
    }

    //Ejercicio en clase:
    //Con un bucle for, genere la tabla del 7 desde el 12 al 1 
    cout<<endl<<"Tabla del 7";

    tabla=7;
    for(int k=12; k>=1; k--)
    {
        cout<<endl<<tabla << " x " << k << " = " << (tabla * k);
    }
    return 0; 

}