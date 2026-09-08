class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int windowSum = 0;
        int maxwindowSum = 0;
        int zeroSum = 0;
        int n = customers.size();
        for(int i=0;i<n;i++){
            if(grumpy[i]==0){
                zeroSum+=customers[i];
            }
            if(i<minutes){
                if(grumpy[i]==1){
                    windowSum+=customers[i];
                }
            }
            else{
                if(grumpy[i]==1){
                    windowSum+=customers[i];
                }
                if(grumpy[i-minutes]==1){
                    windowSum-=customers[i-minutes];
                }
            }
            maxwindowSum=max(maxwindowSum,windowSum);
        }
        return maxwindowSum+zeroSum;
    }
};