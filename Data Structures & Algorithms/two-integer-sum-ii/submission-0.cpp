class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int start=0,end=numbers.size()-1;
        vector<int> ans;

        while(start<end){
            int sum=numbers[start]+numbers[end];
            if(sum==target)
                break;
            else if(sum>target)
                end--;
            else
                start++;
        }
        if(start<end)   {
            ans.push_back(start+1);
            ans.push_back(end+1);
        }
        return ans;
    }
};
