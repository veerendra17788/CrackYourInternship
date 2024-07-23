class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        set<vector<int>> st;
        for(int i=0; i<n; i++){
            //if(i<n-1 && nums[i]==nums[i+1]) continue;
            vector<int> temp;
            int j=i+1, k=n-1, sum1=nums[i];
            while(j<k){
                int sum=sum1+nums[k]+nums[j];
                if(sum>0){
                    k--;
                }else if(sum<0){
                    j++;
                }else {
                    st.insert({nums[i], nums[j], nums[k]});
                    j++;k--;
                }
            }
        }
        for(auto it: st){
            ans.push_back(it);
        }
        return ans;
    }
};