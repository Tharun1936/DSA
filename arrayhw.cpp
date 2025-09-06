//sum of all numbers of array
// #include <iostream>
// using namespace std;
// int main(){
//     int sum=0;
//     int arr[]={2,4,6,8};
//     int size=4;
//     for(int i=0;i<size;i++){
//         sum=sum+arr[i];
//     }
//     cout<<sum<<endl;
// }


//product of all numbers in array
// {#include <iostream>
// using namespace std;
// int main(){
//     int pdt=1;
//     int arr[]={2,4,6,8};
//     int size=4;
//     for(int i=0;i<size;i++){
//         pdt=pdt*arr[i];
//     }
//     cout<<pdt<<endl;
// }


//swap min and max value of array
// #include <iostream>
// #include<climits>
// using namespace std;
// int main(){
//     int largest=INT_MIN;  
//     int smallest=INT_MAX;
//     int arr[]={1,3,5,7,9};
//     int size=5;
//     for(int i=0;i<size;i++){
//         if(arr[i]<smallest){
//             smallest=arr[i];   
//         }
//         if(arr[i]>largest){
//             largest=arr[i];
//         }
//        }
//        cout<<smallest<<endl;
//        cout<<largest<<endl;
       
       
//        for(int i=0;i<size;i++){
//         swap(arr[smallest],arr[largest]);
//         cout<<arr[i];
//        }
       
//        cout<<endl;    
//     }


//intersection of two array
#include <iostream>
using namespace std;
int main(){
    int arr1[]={1,2,3,4};
    int arr2[]={1,3,5,6};
    int size=4;
    for(int i=0;i<size;i++){
        
        for(int j=0;j<size;j++){
            if(arr1[i]==arr2[j]){
                return i;
            }
            
        
        }

    }
}