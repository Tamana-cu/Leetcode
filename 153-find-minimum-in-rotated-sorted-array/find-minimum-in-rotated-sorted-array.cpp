class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        int left=0;
        int right=n-1;
        int ans = INT_MAX;
        while(left<=right){
            if(nums[left]<nums[right]){
                ans=min(nums[left],ans);
                break;
            }
            
            int mid=left+(right-left)/2;
            if(nums[left]<=nums[mid]){
                ans=min(nums[left],ans);
                left=mid+1;
            }
            else{
                ans=min(nums[mid],ans);
                right=mid-1;
            }
        }
        return ans;
    }
};