class Solution {
public:
    int bitwiseComplement(int n) {
        if(n==0) return 1;
        int val=1,i=1;
        while(val<n)
        {
            if(val==INT_MAX) break;
            i*=2;
            val+=i;
          
        }
        return val-n;
        
    }
};
