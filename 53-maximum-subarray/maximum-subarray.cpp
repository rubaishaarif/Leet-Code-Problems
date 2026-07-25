class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int MaxSum = INT_MIN;
        int CurrentSum=0;

        for(int i : nums){
            CurrentSum += i;
            MaxSum = max(CurrentSum, MaxSum);

            if (CurrentSum < 0)
            CurrentSum = 0; 
        } 
         return MaxSum;
    }
   
};