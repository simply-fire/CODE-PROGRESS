#include<iostream>
// #include<string>
using namespace std;

int main(){
        
    int a,b,n,m; // a<b
    cin>>a;
    cin>>b;// n belongs to [a,b]

    string spel[]={"unus","one","two","three","four","five","six","seven","eight","nine"};
    if (a<=b)
    {
        /* code */
   
    
    if(b<=9)
    {
        for (int n = a; (n <= 9 && n<b); n++)
        {
            cout<<spel[n]<<endl;
        }
    }else{

        for (int n = a; n <= 9; n++)
        {
            cout<<spel[n]<<endl;
        }
        for (int i = 10; i <= b; i++)
        {
            if (i%2==0)
            {
                cout<<"even"<<endl;
            }
            else
            {
                cout<<"odd"<<endl;
            }
            
        }
        

    }
    }

    return 0;
}