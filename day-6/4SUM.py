class Solution:
    def fourSum(self, nums: List[int], target: int) -> List[List[int]]:
        nums=sorted(nums)
        s=set()
        for i in range(len(nums)):
            for j in range(i+1,len(nums)):
                low=j+1
                high=len(nums)-1
                
                while low<high:
                    if nums[low]+nums[high]+nums[i]+nums[j]==target:
                        s.add((nums[i],nums[j],nums[low],nums[high]))
                        low+=1
                        high-=1
                    elif nums[low]+nums[high]+nums[i]+nums[j]<target:
                        low+=1
                    else:
                        high-=1
        return list(s)
        
