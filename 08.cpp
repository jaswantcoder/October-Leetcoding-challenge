class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int l=0,r=n-1,m;
       while(l<=r)
       {
           m=(l+r)/2;
           if(nums[m]==target)
           {
               return m;
           }
           else if(nums[m]<target)
           {
               l++;
           }
           else r--;
               if(l<0 || r<0 || l>n-1 || r>n-1)
                   return -1;
       }
        return -1;
    }
};
