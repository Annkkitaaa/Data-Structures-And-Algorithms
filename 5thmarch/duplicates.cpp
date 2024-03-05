class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       set<int> mpp;
       int n=nums.size();
       for(int i=0;i<n;i++){
           mpp.insert(nums[i]);
       }

       int t=mpp.size();
       vector<int> uniqueVector(mpp.begin(), mpp.end());
       copy(uniqueVector.begin(), uniqueVector.end(), nums.begin());

       

       return t;
    }

};