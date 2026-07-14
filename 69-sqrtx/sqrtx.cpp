class Solution {
public:
    int mySqrt(int x) {
        int st=0, end=x, ans=0;
        while(st<=end){
            int mid=st+(end-st)/2;
            long long square= 1ll*mid*mid;
            if(square==x)
            {
                return mid;
            }
            else if(square>x){
                end=mid-1;
            }
            else{
                ans=mid;
                st=mid+1;
            }
        }
        return ans;
    }
};