#include<iostream>
#include<string>
using namespace std;

int Factorial(int n){
//Calculate n!
    if (n==0 || n==1)
    {
        return 1;
    }
    else
        return n * Factorial(n-1);
        
}
int main(){
    int n;
    cout << "input n:";
    cin >> n;
    cout << n << "! = " << Factorial(n) << endl;
    return 0;

    system("pause");
    return 0;
}