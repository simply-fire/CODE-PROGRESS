#include<iostream>
using namespace std;

int grtst(int a,int b,int c,int d){

    if (a>b && a>c && a>d)
    {
        return a;
    }
    else if (b>a && b>c && b>d)
    {
        return b;
    }
    else if (c>b && c>a && c>d)
    {
        return c;
    }
    else 
    {
        return d;
    }
    return 0;
}

int main(){

    int a,b,c,d;
    cin>>a>>b>>c>>d;

    cout<<grtst(a,b,c,d)<<endl;

    return 0;
}