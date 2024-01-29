class Solution {
public:
    bool isPalindrome(int x) {
        long int z=x;
        long int y=0;
        if(x<0){
            return false;
        }
        else{
            while(x){
                y=y*10+x%10;
                x/=10;
            }
            return y==z;
        }
        
    }
};