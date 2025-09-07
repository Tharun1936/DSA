//decimal to binary
// #include<iostream>
// using namespace std;
// int dectobi(int decnum){
//     int ans=0;
//     int pow=1;
//     while (decnum>0)
//     {
//         int rem=decnum%2;
//         decnum=decnum/2;
//         ans+=(rem*pow);
//         pow=pow*10;
//     }
//     return ans;

// }
// int main(){
//     int decnum=50;
//     for(int i=1;i<=10;i++){
//     cout<<dectobi(i)<<endl;   
//     }
// }


//binary to decimal
// #include<iostream>
// using namespace std;
// int bitodec(int binum){
//     int ans=0;
//     int pow=1;
//     while(binum>0){
//         int rem=binum%10;
//         ans+=(rem*pow);
//         binum/=10;
//         pow*=2;
//     }
//     return ans;
// }
// int main(){
//     int binum=101010;
//     cout<<bitodec(binum)<<endl;
// }


#include<iostream>
using namespace std;
int main(){
    int a=7;
    cout<<(a>>1)<<endl;
}