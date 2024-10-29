
#include <iostream>
#include <string.h>

using namespace std;

int factorial(int n);

int result;

int main() {

    int N;

    cout << "\nCual numero desea conseguir su factorial? -->";
    cin >> N;

    cout << "\nLa factorial es: " << factorial(N) << endl;

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