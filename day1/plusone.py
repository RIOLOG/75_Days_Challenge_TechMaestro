class Solution:
    def plusOne(self, l: List[int]) -> List[int]:
        ans=""
        sol=[]
        for i in l:
            s=str(i)
            ans=ans+s
        newans=int(ans)+1
        newans=str(newans)
        for i in newans:
            sol.append(int(i))
        return sol
        
