"""
https://leetcode.com/problems/two-sum/
"""
class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        list_len = len(nums)
        ans_list = []
        for i in range(0, list_len):
            ans2 = target - nums[i]
            for j in range(i+1, list_len):
                if nums[j] == ans2:
                    ans_list.append(i)
                    ans_list.append(j)
                    return ans_list