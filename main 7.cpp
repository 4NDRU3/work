#include <iostream>
using namespace std;

int main() {
  int libra=500, kilo=0, gramos=0, count=0, numero=0;
  

  cout<< "Por favor seleccione la opcion: \n"<<
    "sumar(ingrese 1) \nrestar(ingrese 2)\n\n>>";
  cin>>count;
  
  cout<<"Por favor ingrese el primer digito: ";
  cin>>numero;
    
  switch (count){

    case 1:
      kilo=libra*0.4536/numero;
      cout<<"la conversion realizada de libras a kilos es: "<<kilo<<endl;
      break;
    
    case 2:
      gramos=libra* 453.59237/numero; 
      cout<<"la conversion realizada de libras a gramos es: "<<gramos<<endl;
      break;
  }
  
}