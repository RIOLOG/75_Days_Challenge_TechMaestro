class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        nums=sorted(nums)
        s=set()
        for i in range(len(nums)):
            low=i+1
            high=len(nums)-1
            target=-nums[i]
            while low<high:
                if nums[low]+nums[high]==target:
                    s.add((nums[i],nums[low],nums[high]))
                    low+=1
                    high-=1
                elif nums[low]+nums[high]<target:
                    low+=1
                else:
                    high-=1
        return list(s)
