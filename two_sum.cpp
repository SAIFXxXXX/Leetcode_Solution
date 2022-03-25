class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       // int i=0,j=nums.size()-1;
        vector<int>ans;
        for(int i=0;i<nums.size()-1;i++){
            for(int j=nums.size()-1;j>i;j--){
                if(nums[i]+nums[j]==target){
                    ans.push_back(i);
                    ans.push_back(j);
                    break;
                }
            }
}
        return ans;
    }
};
