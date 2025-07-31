class Solution {
public:
    bool checkDivisibility(int n) {
        vector <int> a;
        int number=n;
        while(n>0)
        {
            int b=n%10;
            a.push_back(b);
            n=n/10;
        }
        int sums=0;
        int mul=1;
        for(auto i:a)
        {
            sums=sums+i;
            mul=mul*i;
        }
        int sum=sums+mul;
        return(number%sum==0)?true:false;
    }
};
