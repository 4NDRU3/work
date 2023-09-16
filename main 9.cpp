#include <iostream>
using namespace std;

int main() {
   double valor_Nota, promedio_Notas, suma_Total, notas_Recolectadas;

  int i;

  cout<< "escriba las notas recolectadas: ";
  cin>> notas_Recolectadas;

  for (i = 1; i<=notas_Recolectadas; i++) {

	cout<< "cuanto es el valor de la nota numero "<< i<< " >>";

	cin>>valor_Nota;
	

  suma_Total = suma_Total + valor_Nota;

}
promedio_Notas = suma_Total /  notas_Recolectadas;

cout<<endl;


cout<< "el promedio de la tercera nota es de: "<<promedio_Notas<< endl;


cout<< "el porcentaje del valor de la tercera nota es de: "<< (promedio_Notas * 0.20);

}