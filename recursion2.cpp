// #include <iostream>
// using namespace std;

// void name(int i,int n){
    
//     if(i<n){
//         return;
//     }
//     cout<<"Tharun"<<endl;
//     name(i+1,n);

// }

// int main(){
//     int n;
//     cin>>n;
//     name(1,n);
// }


#include <iostream>
using namespace std;

void f(int i, int n){
    if (i<1)
    {
        return;
    }
   cout<<i;
   f(i-1,n);
}
int main(){
    int n;
    cin>>n;
    f(n,n);
    return 0;
}
