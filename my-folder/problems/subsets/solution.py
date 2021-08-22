class Solution:
    def subsets(self, nums: List[int]) -> List[List[int]]:
        n = len(nums)
        output = []
        for i in range(0, 2**n):
            output.append([nums[j] for j in range(n) if (i& 1<<j) > 0])
        return output
        