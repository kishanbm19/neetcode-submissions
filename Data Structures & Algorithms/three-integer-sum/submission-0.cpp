class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>v;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-2;i++){
            if(i>0 && nums[i-1]==nums[i])continue;
            int l=i+1,r=nums.size()-1;
            int sum=0;
            while(l<r){
                sum=nums[i]+nums[l]+nums[r];
                if(sum==0){v.push_back({nums[i],nums[l],nums[r]});
                while(l<r && nums[l+1]==nums[l])l++;
                while(l<r && nums[r-1]==nums[r])r--;
                l++;r--;}
                else if(sum>0)r--;
                else l++;
            }
        }
        return v;
    }
};
