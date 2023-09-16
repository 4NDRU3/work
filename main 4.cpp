#include <iostream>
using namespace std;

int main() {
//Crear un algoritmo que, al ingresar la edad, imprima si la persona es mayor o menor de edad 
  
  int edad;

  cout<< "Por favor seleccione su edad: \n>>";
  cin>>edad;

  if(edad>=18){
    cout<<"Cumples con el minimo de edad. ";
  }
  else{
    cout<<"No cumples con el minimo de edad para beber";
  }
}