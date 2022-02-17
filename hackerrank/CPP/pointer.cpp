#include<iostream>
#include<cmath>
using namespace std;

void update(int *a,int *b) {
    int c=(*a+(*b));
    int d=abs(*a-(*b));
    *a=c;
    *b=d;
}

int main() {
    int a, b;
    
    cin>>a>>b;
    update(&a,&b);
    cout<<a<<endl;
    cout<<b<<endl;
    
    return 0;
}