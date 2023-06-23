class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> ans( n , vector<int> (n, 0));
        

        int count=0;
        int total =n*n;

        int startingrow=0;
        int startingcol=0;
        int endingrow=n-1;
        int endingcol=n-1;


        while(count<total)
        {
            for(int i=startingcol;count<total && i<=endingcol;i++)
            {
                ans[startingrow][i]=count+1;
                count++;
            }
            startingrow++;
            for(int i=startingrow;count<total &&i<=endingrow;i++)
            {
                ans[i][endingcol]=count+1;
                count++;
            }
            endingcol--;
            for(int i=endingcol;count<total && i>=startingcol;i--)
            {
                ans[endingrow][i]=count+1;
                count++;
            }
            endingrow--;
            for(int i=endingrow;count<total &&i>=startingrow;i--)
            {
                ans[i][startingcol]=count+1;
                count++;
            }
            startingcol++;

        }
        return ans;
    }
};