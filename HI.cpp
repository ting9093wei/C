#include<iostream>
#include<string>
using namespace std;

int gcd(int m,int n){
    if (n==0)
    {
        return m;
    }
    return gcd(n ,m % n);
    
}
int main(){
    int m = 0;int n = 0;
    cout << "input:";
    cin >> m >> n;
    gcd(m,n);
    cout << "GCD:" << gcd(m,n) << endl;

    system("pause");
    return 0;
}