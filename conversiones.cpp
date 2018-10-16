
#include <string> 
#include <iostream> 
#include <math.h>
#include "conversiones.h"

using namespace std;

int convertirOctalADecimal(int numero) {
    int resultado = 0;
    int tem = 1;
    int resul = 1;
    int numeroOctal = 0, i = 0;
    string mensaje="Proceso de convertir ";
    cout<<mensaje;
    cout<<numero+" a octal\n ";
    
    while (numero != 0) {

        if (numero > 10) {
             resultado = pow(8, i);
            tem = numero % 10;
            resul = tem * resultado;
            numeroOctal += resul;
            numero /= 10;
             cout<<resul+ "\n";
             cout <<"\n nuevo numero a dividir"+numero;
             
        } else {
            resultado = pow(8, i);
            resul = numero * resultado;
            numeroOctal += resul;
            numero /= 10;
             cout<<resul+ "\n";
             cout <<"\n nuevo numero a dividir"+numero;

        }

        i++;
    }

    return numeroOctal;

}

int convertirHexadecimalADecimal(string numero) {
       int numerDecimal = 0;
       int exponente=numero.length();
       cout<<"Pasos para pasar a hexadecimal ";
    for (int i=0; i<numero.length(); i++) {
                if (isdigit(numero[i])) {
                     cout<<"Se obtiene por posiciones el numero ";
                    cout<<numero[i]-'0'*pow(16,exponente-i-1);
              numerDecimal += (numero[i]-'0')*pow(16,exponente-i-1);
        } else if (numero[i]>='A' && numero[i]<='F') {
                 cout<<"Se obtiene por posiciones el numero ";
                    cout<<numero[i]-55*pow(16,exponente-i-1);
            numerDecimal += (numero[i]-55)*pow(16,exponente-i-1);
        } else if (numero[i]>='a' && numero[i]<='f') {
                 cout<<"Se obtiene por posiciones el numero ";
                    cout<<numero[i]-87*pow(16,exponente-i-1);
            numerDecimal += (numero[i]-87)*pow(16,exponente-i-1);
        }
    }
    return numerDecimal;
  

}

int convertirBinarioADecimal(int numero) {
    int resultado = 0;
    int tem = 1;
    int resul = 1;
    int numeroBinario = 0, i = 0;
     string mensaje="Proceso de convertir ";
    cout<<mensaje;
    cout<<numero+" a binario ";
 
    while (numero != 0) {

        if (numero >= 2) {
            resultado = pow(2, i);
            tem = numero % 10;
            resul = tem * resultado;
            numeroBinario += resul;
            numero /= 10;
             cout<<resul+ "\n";
             cout <<"\n nuevo numero a dividir"+numero;
            
        } else {
            resultado = pow(2, i);
            resul = numero * resultado;
            numeroBinario += resul;
            numero /= 10;
            cout<<resul+ "\n";
            cout <<"\n nuevo numero a dividir"+numero;

        }

        i++;
    }

    return numeroBinario;

}
