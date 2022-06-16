#include <iostream>

using namespace std; 

int main()
{
    cout<<"\n\nEjemplo de bucle while que imprime la tabla del 9";

    int tabla=9;
    int i=1;
    while(i<=10)
    {
        cout<<"\n" <<tabla << " x " << i << " = " << (tabla * i );
        i++;
    }
    //Se pide por teclado un numero entero que debe estar entre 1 y 20. 
    //Este numero representa la tabla que el usuario desea generar.
    //Se pide con un bucle while generar la tabla de multiplicar 

    int num;
    cout<<endl<<endl<<"Ingrese la tabla que deseas generar: ";
    cin>>num;
    if( ! (num>=1 && num<=20))
    {
        cout<<endl<<"Rango no valido... ";
        return 0; //Abandonar la ejecicion del programa
    }

    i=1;
    while(i<=12)
    {
        cout<<"\n" << num << " x " << i << " = " << (num + 1);
        i++;
    }

    return 0;
}