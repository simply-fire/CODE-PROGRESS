#include<iostream>
using namespace std;

int main(){
        
    int n,m;
    cin>>n;

    int ara[n];

    for (int i = 0; i <= (n-1); i++)
    {
        cin>>ara[i];
    }
    

    for (int i = (n-1); i >= 0 ; i--)
    {
        cout<<ara[i]<<" ";
    }
    
    
    return 0;
}