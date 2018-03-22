#include <iostream>

using namespace std;

int main(){


        int edad=0,suma1=0,i=0,alumnos=0,suma=0,n=1,suma2=0,fin=0;
        float promedio=0.0;

        cout << "Este programa calcula el promedio de edad de un grupo de alumnos"<< endl;
        cout << "Ingrese el numero de alumnos:  "<< endl;
        cin >> alumnos;

            for (i=0; i<=alumnos; i++){


                cout << "Ingrese la edad de sus alumnos: "<< endl;
                cin >> i;

                    suma=suma+i;
                    suma1=suma-i;
                    n++;
                    promedio=suma/n-1;
                    suma2=suma2+promedio;
                    if (i==18){

                        cout << "Su promedio es: " << suma2 << endl;

                        cout << "Desea cerrar el programa?. ingrese cero '0' para cerrarlo: " <<endl;
                        cout << "De lo contrario ingrese 1: ";
                        cin >> fin;

                            if (fin==0){

                              break;
                            }


                    }


            }
















    return 0;

}
