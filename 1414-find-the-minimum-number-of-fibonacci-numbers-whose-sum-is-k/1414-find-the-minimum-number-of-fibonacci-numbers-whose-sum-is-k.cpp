class Solution {
public:
    int findMinFibonacciNumbers(int k) {
        vector<int>fibo;
        fibo.push_back(0);
        fibo.push_back(1);
        int a=0, b=1, c=a+b;
        while(c<=k){
            fibo.push_back(c);
            a=b;
            b=c;
            c=a+b;
        }
        int count=0;
        int index=fibo.size()-1;
        while(k>0 && index>=0){
            if(k>=fibo[index]){
                k=k-fibo[index];
                count++;
            }
            index--;
        }
        return count;
    }
};