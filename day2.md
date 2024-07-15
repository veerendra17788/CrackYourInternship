class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int i=0, j=n-1;
        while(j>=0 && nums[j]==2) j--;
        while(i<n && i<j && j>=0){
            if(nums[i]==2){
                    while(nums[j]==2 && i<j) j--;
                swap(nums[i], nums[j--]);
            }
            i++;
        }j=n-1; i=0;
        while(i<n && nums[i]==0) i++;
        while(j>=0 && i<j && i<n){
            if(nums[j]==0){
                    while(nums[i]==0 && i<j) i++;
                swap(nums[j], nums[i++]);
            }
            j--;
        }
    }
};