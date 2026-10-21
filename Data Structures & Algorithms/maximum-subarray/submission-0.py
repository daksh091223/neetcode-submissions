class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        currSum=nums[0]; maxSum=nums[0]
        for x in nums[1:]:
            currSum=max(currSum+x,x)
            maxSum=max(currSum,maxSum)
        
        return maxSum