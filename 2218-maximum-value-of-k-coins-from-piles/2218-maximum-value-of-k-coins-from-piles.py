class Solution:
    def maxValueOfCoins(self, piles: List[List[int]], k: int) -> int:
        newPiles=[]
        for pile in piles:
            temp=[pile[0]]
            for i in range(1,len(pile)):
                temp.append(temp[i-1]+pile[i])
            newPiles.append(temp)
        
        @lru_cache(None)
        def helper(indx,k):
            if k==0:
                return 0
            if k<0 or indx>=len(newPiles):
                return float('-inf')
            res=-1
            for i in range(len(newPiles[indx])):
                res=max(res,newPiles[indx][i]+helper(indx+1,k-(i+1)),helper(indx+1,k))
            return res
        return helper(0,k)
        