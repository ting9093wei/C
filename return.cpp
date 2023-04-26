#include<iostream>
#include<string>
using namespace std;

int CalNum(int n){
//Calculate -1+2+-3+4+....+n=?
    if (n % 2 ==0)
    {
        return -1*(n/2);
    }
    else{
        return -1*(n/2) + n;
    }
    
}
int main(){
    int result = CalNum(30);
    std::cout << result <<endl;

    system("pause");
    return 0;
}
