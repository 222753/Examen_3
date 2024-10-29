/**
Autor: Arturo Villa Quiñones
Version: 1.2
Fecha: 29 de Octubre de 2024
Nota: Programa con un menu de selección para dos funciones, factorial de un numero y un cajero
automatico
**/
#include <iostream>
#include <string.h>

using namespace std;

/**Declaración de funciones**/
int factorial(int n);
void consulta(int s);
int retiro(int s);

/**Variable global para factorial**/
int result;

/**Función principal para elegir la función a ejecutar**/
int main() {
    /**Declaración de variables**/
    int N, opcion, A, saldo = 20000;

    /**Elegir la función a ejecutar**/
    cout << "\nCual programa desea ejecutar? -->";
    cout << "\n1- Cajero automatico";
    cout << "\n2- Factorial de N";
    cout << "\nCual elije? --> ";
    cin >> opcion;

    cout << endl;
    /**Ejecutar la fucnión correcpondiente al caso**/
    switch (opcion) {
        case 1:
            /**Ciclo para ejecutar el programa hasta que el usuario decida**/
            do {
                /**Menú selectivo del cajero automatico**/
                cout << "\n\tCajero automatico";
                cout << "\n1- Consultar saldo";
                cout << "\n2- Retirar dinero";
                cout << "\n3- Salir";
                cout << "\nCual elije? --> ";
                cin >> A;

                /**Seleccionar la función correcta a ejecutar**/
                switch (A) {
                    case 1:
                        /**Llamar la función Consulta**/
                        consulta(saldo);
                        break;
                    case 2:
                        /**Llama la función Retiro y actualisa el saldo actual**/
                        saldo = retiro(saldo);
                        break;
                    case 3:
                        /**Imprime el mensaje del que el programa a terminado**/
                        cout << "\nSe termino el programa, hasta luego";
                    break;
                    default:
                        /**Advertencia de que esa opción no existe**/
                        cout << "\nEsa opcion no existe, ingrese otra";
                    break;
                }
            /**Termina el ciclo solo si el usuario lo indica**/
            }while (A != 3);

            break;
        case 2:
            /**Le pide el usuario un numero a factorizar**/
            cout << "\nCual numero desea conseguir su factorial? -->";
            cin >> N;
            /**Imprime y llama la funcion factorial para idndicar al usuario la factorial del numero ingresado**/
            cout << "\nLa factorial es: " << factorial(N) << endl;
            break;
        default:
            /**Advertencia de que esa opción no existe**/
                cout << "\nEsa opcion no existe, ingrese otra";
            break;
    }

    return 0;
}

/**Función para factorizar un numero N**/
int factorial(int n) {
    /**Factorial de 0 es 1, evita regresar 0**/
    if (n == 0) {
        n = 1;
    }

    /**Calcula el factorial atreave de recursividad**/
    if (n == 1) {
        return n;
    }else{
        result = n * factorial(n - 1);
    }
    /**Retorna el resultado**/
    return result;

}

/**Función que imprime el saldo actual**/
void consulta(int s) {

    cout << "\nSu saldo total es: " << s;

}

/**Función que pide un retiro al usuario y calcula el saldo actual respecto al retiro**/
int retiro(int s) {
    /**Declaración de varibles**/
    int r;
    /**Le pide al usuario cuanto va a retirar**/
    cout << "\nCuanto desea retira? --> ";
    cin >> r;
    /**Se imprime el total a retira y c¿el saldo actual**/
    cout << "\nSe a retirado un total de: " << r << ". Su saldo actual es de: " << s - r;
    /**retorna el saldo actual tras el retiro**/
    return (s - r);
}

