class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size(); vector<vector<int>>ans;
        for(int i=0;i<n-2;i++){
            if(i>0 && nums[i]==nums[i-1])continue;
            for(int j=i+1;j<n-1;j++){
                if(j>i+1 && nums[j]==nums[j-1])continue;
               int rem=-1*(nums[i]+nums[j]);
               int k=lower_bound(nums.begin()+j+1,nums.end(),rem)-nums.begin();
               if(k<n && nums[k]==rem){
                ans.push_back({nums[i],nums[j],nums[k]});

               }
            }
        } return ans;
    }
};
