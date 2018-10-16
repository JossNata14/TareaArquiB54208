

#include <cstdlib>
#include <iostream>
#include "conversiones.h"
using namespace std;

int main(int argc, char** argv) {
    int opcion=1;
    int num;
    int r=0;
    string hexa;
    while(opcion!=0){
         cout << "\n Menu principal: ";
         cout << "\n 1. Convertir de octal a decimal: "; 
         cout << "\n 2. Convertir de hexadecimal a decimal: "; 
         cout << "\n 3. Convertir de binario a decimal: "; 
         cout << "\nIngrese la opcion que desea realizar: "; 
         cin>>opcion;         
         switch(opcion){
             case 1:
                    cout << "\n Ingrese el valor en octal que desee conocer su valor decimal: \n" ; 
                    cin>>num;
                    if(isdigit(num)){
                            r=convertirOctalADecimal(num);
                    cout<<"\nEl número en decimal es: ";
                    cout<< r;
                    }else{
                        cout<<"Ingrese un numero";
                    }
                    
                
                 break;
                  case 2:
                    cout << "\n Ingrese el valor en hexadecimal que desee conocer su valor decimal: \n" ; 
                       cin>>hexa;
                    r=convertirHexadecimalADecimal(hexa);
                    cout<<"\nEl número en decimal es: ";
                    cout<< r;
                 break;
                 case 3:
                    cout << "\n Ingrese el valor en binario que desee conocer su valor decimal: \n" ; 
                    cin>>num;
                     if(isdigit(num)){
                            r=convertirBinarioADecimal(num);
                    cout<<"\nEl número en decimal es: ";
                    cout<< r;
                    }else{
                        cout<<"Ingrese un numero";
                    }
                    
                    
                 break;
         }
    }
     
   
    return 0;
}

