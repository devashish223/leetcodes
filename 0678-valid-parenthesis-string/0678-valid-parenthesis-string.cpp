class Solution {
public:
    bool checkValidString(string s) {
        int leftcou=0,starcou=0;
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(')
            {
                leftcou++;
            }
            else if(s[i]=='*')
            {
                starcou++;
            }
            else
            {
                if(leftcou>0)
                {
                    leftcou--;
                }
                else if(starcou>0)
                {
                    starcou--;
                }
                else
                {
                    return false;
                }
            }
        }
        //return true;
        int rightcou=0;
        starcou=0;
        for(int i=n-1;i>=0;i--)
        {
            if(s[i]==')')
            {
                rightcou++;
            }
            else if(s[i]=='*')
            {
                starcou++;
            }
            else
            {
                if(rightcou>0)
                {
                    rightcou--;
                }
                else if(starcou>0)
                {
                    starcou--;
                }
                else
                {
                    return false;
                }
            }
        }
        return true;
    }
};