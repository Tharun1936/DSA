//simple fuction example
// #include<iostream>
// using namespace std;

// int printhello(){
//     cout<<"Hello"<<endl;
//     return 19;
// }

// int main(){
//     int val = printhello();
//     cout<<val<<endl;

//     return 0;
// }


//sum of two numbers
// #include<iostream>
// using namespace std;

// int sum(int a, int b){
//     int s=a+b;
//     return s;
// }

// int main(){
//     cout<<sum(10,35)<<endl;
    
// }


// //min of two
// #include<iostream>
// using namespace std;

// int minoftwo(int a, int b){     //parameter
//     if(a<b){
//         return a;
//     }
//     else{
//         return b;
//     }
// }

// int main(){
//     cout<<minoftwo(10,6)<<endl;     //argument
//     return 0;
// }


//sum 1 to n
// #include<iostream>
// using namespace std;

// int sumN(int n){
//     int sum =0;
//     for(int i=1;i<=n;i++){
//         sum+=i;
//     }
//     return sum;

// }

// int main(){
//     cout<<sumN(5)<<endl;
// }


//factorial
// #include<iostream>
// using namespace std;
// int factorial(int n){
//     int fact=1;
//     for(int i=1;i<=n;i++){
//         fact*=i;
//     }
//     return fact;
// }

// int main(){
//     cout<<factorial(5)<<endl;
// }


// sum of digits
// #include<iostream>
// using namespace std;
// int sum(int n){
//     int digitsum=0;
//     while(n>0){
//         int lastdigit=n%10;
//         int num=n/10;
//         digitsum+=lastdigit;

//     }
//     return digitsum;
// }

// int main(){
//     cout<<sum(1250)<<endl;
//     return 0;
// }               // however code is not running 


//calculate binomial ncr
#include<iostream>
using namespace std;
int factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    return fact;
}

int main(){
    int n=8,r=2;
    int fact_n=factorial(n);
    int fact_r=factorial(r);
    int fact_diff=factorial(n-r);
    
    int num = fact_n;
    int dino = fact_r*fact_diff;

    cout<<num/dino<<endl;
    return 0;
}
