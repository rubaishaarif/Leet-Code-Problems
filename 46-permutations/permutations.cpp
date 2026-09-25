class Solution {
public:
void calPermute(vector<int>& nums, int Idx, vector<vector<int>> &ans){
    int s = nums.size();
    if(Idx == s)
    {
        ans.push_back(nums);
        return;
    }
    for(int i=Idx;i<s;i++){
        swap(nums[Idx],nums[i]);
        calPermute(nums,Idx+1, ans);
        swap(nums[Idx],nums[i]);
    }
}
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        calPermute(nums,0,ans);
        return ans;}
};