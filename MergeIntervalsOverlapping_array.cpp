class Solution {
public:
//(a,b) - previous
//(c,d) - current
//required for overlapping - c<=b
    vector<vector<int>> merge(vector<vector<int>>& intervals) {

        sort(intervals.begin(),intervals.end());
        int n=intervals.size();
        vector<vector<int>> ans;

        for(int i=0;i<n;i++){
            if(ans.empty())ans.push_back(intervals[i]);
            else{
                vector<int>&v=ans.back();
                int y=v[1];//end of previous  (b)
                if(intervals[i][0]<=y){
                    v[1] = max(intervals[i][1],y);
                }

                else{
                    ans.push_back(intervals[i]);
                }
            }
        }
        return ans;


    }
};

//Time Complexity: o(n(logn))
//Space Complexity: o(n)
