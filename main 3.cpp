#include <iostream>
using namespace std;

int main() {
// Crear un algoritmo que sume 2 números 
  int numero1 , numero2, numero3, count;

  cout<< "Por favor seleccione la opcion: \n"<<
    "sumar(ingrese 1) \nrestar(ingrese 2)\n\n>>";
  cin>>count;
  
  cout<<"Por favor ingrese el primer digito: ";
  cin>>numero1;
  
  cout<<"Por favor ingrese el segundo digito: \n";
  cin>>numero2;
  
  if (count==1) {
    numero3= numero1+numero2;
    cout<<"El resultado es: "<<numero3; 
  }
  else{
    numero3= numero1-numero2;
    cout<<"El resultado es: "<<numero3;
  }
}

