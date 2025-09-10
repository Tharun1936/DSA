// // Brute force approach
// #include<iostream>
// #include<climits>
// using namespace std;
// int main(){
//     int n=5;
//     int maxsum=INT_MIN;
//     int arr[5]={1,2,3,4,5};
//     for(int st=0;st<n;st++){
//         int currentSum=0;
//         for(int end=st;end<n;end++){
//             currentSum+=arr[end];
//             maxsum=max(currentSum,maxsum);    
//         }
//     }
//     cout<<maxsum<<endl;
// }


// kadane's algorithm
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int currentSum=0;
    int maxSum=INT_MIN;
    int n=7;
    int arr[]={3,-4,5,4,-1,7,-8};
    for(int i=0;i<n;i++){
        currentSum+=arr[i];
        maxSum=max(currentSum,maxSum);
        if(currentSum<0){
            currentSum=0;
        }
    }
    cout<<maxSum<<endl;
}