#include <iostream>

using namespace std;

int main() {

    float estatura=0.0,promedio=0.0,suma=0.0;
    int sumatotal=0,fin=1;


        while (estatura<=100){

        estatura=0;
        estatura++;
        sumatotal++;

        cout << "Ingrese su estatura: ";
        cin >> estatura;

        suma=suma+estatura;
        promedio=(suma/sumatotal);
            if (estatura==0){

            cout << "DEBE INGRESAR POR LO MENOS 1 ESTATURA" << endl;

            }

                else {

                cout << "Su promedio es: " << promedio <<endl;

                }


                cout << "Si desea cerrar el programa presione 0 sino , presione 1: ";
                cin >> fin;

                if (fin==0){

                    break;

                }


        }






    return 0;
}
