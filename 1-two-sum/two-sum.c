//2 sum using pointers
int *twoSum(int *nums, int numsize, int target , int *returnsize)
{
*returnsize=2;
int *result = (int*) malloc(2 * sizeof(int));
int i,j;
for(i=0;i<numsize;i++)
{
    for(j=i+1;j<numsize;j++)
    {
        if(nums[i]+nums[j]== target) {
        result[0] = i;
        result[1] = j;
        return result;    }
    }

}
return result;

}