#include<iostream>
using namespace std;
int main(){
    int a,b;
    char operation;
    cout<<"Enter the first number: "<<endl;
    cin>>a;
    cout<<"Enter the operation(+,-,*,/): "<<endl;
    cin>>operation;
    cout<<"Enter the second number: "<<endl;
    cin>>b;
    if(operation=='+'){
        cout<<(a+b)<<endl;
    }
    else if(operation=='-'){
        cout<<(a-b)<<endl;
    }
    else if(operation=='*'){
        cout<<(a*b)<<endl;
    }
    else if(operation=='/'){
        cout<<(a/b)<<endl;
    }
    else{
        cout<<"error"<<endl;
    }
    
}