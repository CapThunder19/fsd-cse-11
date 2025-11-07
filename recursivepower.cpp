#include <iostream>
using namespace std;

int power(int a, int b){
    if (b == 0){
        return 1;
    }
    else{
        int x = power(a,b/2);
        if (b % 2 == 0){
            return x * x;
        }
        else{
            return a * x * x;
        }
    }
}

int main(){
    int a, b;
    cout << "Enter base and exponent: ";
    cin >> a >> b;
    cout << a << " raised to the power " << b << " is " << power(a, b) << endl;
    return 0;
}