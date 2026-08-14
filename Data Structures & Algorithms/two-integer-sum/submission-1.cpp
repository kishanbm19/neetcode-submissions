class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int l=0,r=nums.size()-1;
        int sum=0;
       for(int i=0;i<nums.size()-1;i++){
        for(int j=i+1;j<nums.size();j++){
            if(nums[i]+nums[j]==target && i!=j)return {i,j};
            
        }
       }
       return {};
    }
};
