#include <iostream>

using namespace std;

int main() {

        int cantidad=0,cantidad1=0,suma=0,fin=1;
        while(fin==1){
         cout << "Cuantas cantidades desea calcular: ";
         cin >> cantidad1;

                for (cantidad=0; cantidad<=cantidad1; cantidad+1){


                cout << "Ingrese el valor de la cantidad:" << endl;
                cin >> cantidad;
                suma=suma+cantidad;
                    if (cantidad<=0){

                        cout << "Su cantidad es menor o igual a 0" << endl;
                        cout << "La suma de sus cantidades menores o iguales a 0 es: "<< suma<<endl;

                    }
                        else if (cantidad>0){

                            cout << "Su cantidad es mayor que 0" << endl;
                            cout << "La suma de sus cantidades mayores a 0 es: "<< suma<<endl;

                        }




                }

                                cout << "Desea cerrar el programa?. ingrese cero '0' para cerrarlo: " <<endl;
                                cout << "De lo contrario ingrese 1: ";
                                cin >> fin;

        }



















    return 0;

}
