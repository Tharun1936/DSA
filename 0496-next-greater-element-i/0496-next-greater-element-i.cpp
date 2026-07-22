class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        for(int x: nums1){
            int j = 0;
            while (nums2[j] != x) {
                j++;
            }
            int nextGreater = -1;
            for (int k = j + 1; k < nums2.size(); k++) {
                if (nums2[k] > x) {
                    nextGreater = nums2[k];
                    break;
                }
            }
            ans.push_back(nextGreater);
        }
        return ans;
        // vector<int> ans;
        // stack<int> st;
        // for(int i = 0; i<nums2.size(); i++){
        //     st.push(nums2[i]);
        // }
        // for(int j = 0; j<nums1.size(); j++){
        //     while(!st.empty() && nums1[j]<=st.top()){
        //         st.pop();
        //         if(st.empty()){
        //             ans[i]=-1;
        //         }
        //         else{
        //             ans[i]=st.top();
        //         }
        //     }
        // }
        // return ans;
    }
};