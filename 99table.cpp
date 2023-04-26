#include<iostream>
using namespace std;

int Table(){
    for (int i = 1; i <= 9; i++)
    {
        for (int j = 1; j <= 9; j++)
        {
            cout << j << "*" << i << "=" << i*j << "\t";
        }
        cout << endl; 
    }
    return 0;
}   
int main(){
    Table();

    return 0;
}

