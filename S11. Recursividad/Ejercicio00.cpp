//Ejercicio: Factorial


#include <iostream>

using namespace std;

static int factorial(int n){
    if (n == 1){
        return 1;
    }else{
        return n*factorial(n-1);
    }
}
// 4! = 4x3x2x1
// 5! = 5x4x3x2x1
int main()
{
    int num=0;
    cout<<"Numero =";
    cin >> num;
    cout<<num<<"! = "<<factorial(num);
    return 0;
}