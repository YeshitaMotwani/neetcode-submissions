class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
     int n=nums.size();
     unordered_map<int,int> m;
     vector<int> ans;
     for(int i=0;i<n;i++){
        int diff=target-nums[i];
        if(m.find(diff)!=m.end()){ //if diff exists in map m
            ans = {m[diff], i};
            return ans;
        }
        else{
            m[nums[i]]=i;
        }
        
     }

     return ans;

    }
};

