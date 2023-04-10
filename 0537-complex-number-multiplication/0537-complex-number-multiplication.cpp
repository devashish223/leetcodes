class Solution {
public:
    void stringtoint(string &s,int &rl,int &im){
        string t1="";
        string t2="";
        int i = 0;
        while(i<s.length()&&s[i]!='+'){
            t1+=s[i];
            i++;
        }
        i++;
        rl = stoi(t1);
        while(i<s.length()&&s[i]!='+'){
            t2+=s[i];
            i++;
        }
        im = stoi(t2);
        
    }
    string complexNumberMultiply(string num1, string num2) {
        int r1,r2,i1,i2,rl,im;
        stringtoint(num1,r1,i1);
        stringtoint(num2,r2,i2);
        rl = (r1*r2 - i1*i2);
        im = (r1*i2 + i1*r2);
        
        string a,b,c = "";
        a = to_string(rl);
        b = to_string(im);
        
        c = a+'+'+b+'i';
        
        return c;
    }
};