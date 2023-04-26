#include<iostream>
#include<string>
using namespace std;
//最大公因數
int gcd(int m,int n){
    if (n==0)
    {
        return m;
    }
    return gcd(n ,m % n);
    
}
//最小公倍數
// int lcm(int m, int n) {
//     return (m * n) / gcd(m, n);
// }

int main(){
    int m,n;
    cout << "input:";
    cin >> m >> n;
    gcd(m,n);
    cout << "GCD:" << gcd(m,n) << endl;

    system("pause");
    return 0;
}