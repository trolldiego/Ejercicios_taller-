#include <iostream>

using namespace std;

int main(){

    int cantidad=0,suma=0,i=0,fin=1;
        while(fin==1){
            for (i=1; i<=10; i++){

            cout << "Cantidad: " << i <<endl;

            suma=suma+i;

            cout << "Suma" << suma <<endl;



            }



        cout << "Desea cerrar el programa?. ingrese cero '0' para cerrarlo: " <<endl;
        cout << "De lo contrario ingrese 1: ";
        cin >> fin;
        }



    return 0;
}
