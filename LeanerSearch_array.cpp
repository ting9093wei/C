#include<iostream>
using namespace std;

int main(){
    for(;;){
        int num[]={256,731,943,389,142,645,829};
        string name[]={"Lin","Wang","Sao","Lee","Chen","Ja","Wu"};
        int n=sizeof(num)/sizeof(num[0]);
        int s,i;
        bool IsFound=false;//flag
        cout<<"input Num:";
        cin >> s;
        for (i = 0; i < n; i++)
        {
            if (num[i]==s)
            {
                IsFound=true;
                break;
            }
            
        }
        if (IsFound==true)
        {
            cout<<"congatulate!"<<name[i];
            break;
        }
        else
        { 
            cout<<"GG!";
        }  
    }
    system("pause");   
    return 0;
}