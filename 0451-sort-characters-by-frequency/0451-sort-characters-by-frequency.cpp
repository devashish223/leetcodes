class Solution {
public:
    string frequencySort(string s) {
        map<char,int>mp;
        for(auto c:s)
        {
            mp[c]++;
        }
        vector<pair<int,char>>v;
        for(auto c:mp)
        {
            v.push_back(make_pair(c.second,c.first));
            
        }
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
        string s1;
        for(auto c:v)
        {
            int p=c.first;
            char y=c.second;
            for(int i=0;i<p;i++)
            {
                s1.push_back(y);
            }
        }
        return s1;
    }
};