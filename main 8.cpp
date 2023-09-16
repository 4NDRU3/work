#include <iostream>
using namespace std;
/*Crear un algoritmo que transforme una temperatura N, se asigne la escala de temperatura
(Celsius, Fahrenheit, kelvin) y al final imprima los resultados de las 3 escalas de temperatura.*/
int main() { 

  double temperatura=0, celsius=0, fahrenheit=0, kelvin=0;
  int escala;


cout<<"por favor ingrese un sistema de escala para la conversion."<<endl;
cout<<" Celsius(Integrese el digito 1), Fahrenheit(Integrese el digito 2), kelvin(Integrese el digito 3): >>";
cin>>escala;

cout<<"por favor ingrese la temperatura que quiere usar para la conversion >>";
cin>>temperatura;

/*Celcius*/
if (escala==1) {
	celsius=temperatura;
	fahrenheit=9*escala/5+32;
	kelvin=escala+273.15;
}
else
/*Fahrenheit*/
	if (escala==2) {
		fahrenheit= temperatura;
		celsius= 5*(escala-32)/9;
		kelvin= 5*(escala-32)/9+273.15;
  }
  else {

    
  }
    
		
/*kelvin*/
		if (escala==3) {
			kelvin=temperatura;
			celsius=escala-273.15;
			fahrenheit=9*(escala-273.15/5)+32;
    }
  
cout<< "la conversion es: \n";
cout<< "celsius=  "<<celsius<<" °C \n";
cout<<"fahrenheit= "<<fahrenheit<<" °F \n";
cout<<"kelvin= "<<kelvin<<" °K";

}