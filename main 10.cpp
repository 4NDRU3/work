#include <iostream>
using namespace std;

int main() {
  
  int N; //número de notas
  double suma = 0, promedio, porcentaje; 

  cout << "Ingrese el número de notas: ";
  cin >> N; 

  for (int i = 1; i <= N; i++) { // repetir N veces
    double nota;
    cout << "Ingrese la nota " << i << ": ";
    cin >> nota; 
    suma += nota; 
    
    if (i == 3) { 
      porcentaje = nota * 0.25;
    }
  }

  promedio = suma / N;

  cout << "El promedio de las notas es: " << promedio << endl; 
  cout << "El porcentaje de la tercera nota en la FESC es: " << porcentaje << endl; 

  return 0;
}
