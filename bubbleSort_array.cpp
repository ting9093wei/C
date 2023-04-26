#include<iostream>
using namespace std;

int main(){
    int array[]={98,78,34,12,64,83};
    int n=sizeof(array)/sizeof(array[0]);//n代表陣列中有幾個元素
    int tmp;

    cout<<"before:";
    for (int i = 0; i < n; i++)
    {
        cout<<array[i]<<" ";
    }

    for (int i = 0; i < n-1; i++)//總共做陣列元素數-1次
    {
        for (int j = i+1; j < n; j++)
        {
            if (array[i]>array[j])
            {
                tmp=array[i];
                array[i]=array[j];
                array[j]=tmp;
            }
            
        }
        
    }

    cout<<"after:";
    for (int i = 0; i < n; i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<"\n";  
    
    system("pause");
    return 0;
}