class Solution {
public:
    int fib(int n) {
        if(n==0){
            return 0;
        }
        int t1=0;
        int t2=1;
        int next=t1+t2;
        for(int i=3;i<=n;i++){
            t1=t2;
            t2=next;
            next=t1+t2;
        }
        return next;
    }
};