class Solution {
public:
    int majorityElement(vector<int>& nums) {
     
       int x=0,cnt=0;
       int el;
       for(int i=0;i<nums.size();i++){
       if(x==0){el=nums[i];x++;}
       else if(el==nums[i])x++;
       else x--;
       }
       for(int y:nums){
        if(y==el)cnt++;

       }
       if(cnt>nums.size()/2)
       return el;

       return -1;


    


        
    }
};