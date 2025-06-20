class Solution {
public:
    int climbStairs(int n) {
        if(n==0 || n==1) return 1;

        int a=1, b=1, result;

        for(int i=2;i<=n;i++){
            result=a+b;
            a=b;
            b=result;
        }
        return result;
    }
};
