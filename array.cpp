#include<iostream>
using namespace std;
int main(){
    int size = 5;
    int marks[size];
    

    for(int i=0;i<size;i++){
        cin>>marks[i];
    }
    for(int i=0;i<size;i++){
        cout<<marks[i]<<endl;
    }

}


finding the smallest
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int nums[]={2,4,5,-3,1};
    int size = 5;
    int smallest = INT_MAX;
    int index=-1;

    for(int i=0;i<size;i++){
        if(nums[i]<smallest){
            smallest=nums[i];
            index=i;
        }
    }
    cout<<smallest<<endl;
    cout<<index<<endl;
}


finding largest
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int nums[]={2,3,5,17,8};
    int largest=INT_MIN;
    int size=5;
    for(int i=0;i<size;i++){
        largest=max(nums[i],largest);
    }
    cout<<largest<<endl;
}


//index of largest number
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int nums[]={2,3,2,54,7};
    int size=5;
    int largest=INT_MIN;
    int index=0;
    for(int i=0;i<size;i++){
        largest=max(nums[i],largest);
        index=i-1;
    }
    cout<<largest<<endl;
    cout<<index<<endl; 
}


