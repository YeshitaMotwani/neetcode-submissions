class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n=heights.size();
        int l=0,r=heights.size()-1;
        int maxArea=0;
        while(l<r){
            int w=r-l;
            int ht=min(heights[l],heights[r]);
            int currArea=w*ht;
            maxArea=max(currArea,maxArea);
            if(heights[l]<heights[r])
                l++;
            else
                r--;
        }
        return maxArea;
    }
};
