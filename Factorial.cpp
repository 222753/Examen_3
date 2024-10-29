
#include <iostream>
#include <string.h>

using namespace std;

int factorial(int n);
void consulta(int s);
int retiro(int s);

int result;

int main() {

    int N, opcion, A, saldo = 20000;

    cout << "\nCual programa desea ejecutar? -->";
    cout << "\n1- Cajero automatico";
    cout << "\n2- Factorial de N";
    cout << "\nCual elije? --> ";
    cin >> opcion;

    cout << endl;

    switch (opcion) {
        case 1:

            do {
                cout << "\n\tCajero automatico";
                cout << "\n1- Consultar saldo";
                cout << "\n2- Retirar dinero";
                cout << "\n3- Salir";
                cout << "\nCual elije? --> ";
                cin >> A;

                switch (A) {
                    case 1:
                        consulta(saldo);
                        break;
                    case 2:
                        saldo = retiro(saldo);
                        break;
                    case 3:
                        cout << "\nSe termino el programa, hasta luego";
                    break;
                    default:
                        cout << "\nEsa opcion no existe, ingrese otra";
                    break;
                }
            }while (A != 3);

            break;
        case 2:
            cout << "\nCual numero desea conseguir su factorial? -->";
            cin >> N;

            cout << "\nLa factorial es: " << factorial(N) << endl;
            break;
        default:
            break;
    }

    return 0;
}

int factorial(int n) {

    if (n == 1) {
        return n;
    }else{
        result = n * factorial(n - 1);
    }
    return result;

}

void consulta(int s) {

    cout << "\nSu saldo total es: " << s;

}

int retiro(int s) {

    int r;

    cout << "\nCuanto desea retira? --> ";
    cin >> r;

    cout << "\nSe a retirado un total de: " << r << ". Su saldo actual es de: " << s - r;

    return (s - r);
}

