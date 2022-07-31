class NumArray {
public:
//      vector<int>v;
//     int sum=0;
    
//     NumArray(vector<int>& nums) {
//         v = nums;
        
//         for(int i = 0 ; i<nums.size() ; i++)
//         {
//             sum+=nums[i];
//         }
//     }
    
//     void update(int index, int val) {
//         sum-=v[index];
//         v[index] = val;
//         sum += val;
//     }
    
//     int sumRange(int left, int right) {
        
//         int ans = sum;
        
//         for(int i =0; i<left ; i++)
//             ans-= v[i];
//         for(int i = right+1 ; i<v.size() ; i++)
//             ans-= v[i];
        
//         return ans;
//     }
    vector<int>seg;
    int n;
    void build( vector<int>&nums, int left, int right, int pos)
    {
        if (left == right){
            seg[pos] = nums[left]; 
            return;
        }
        int mid = (left+right)/2;
        build(nums, left, mid , 2*pos+1); //left 
        build(nums,  mid+1, right, 2*pos+2); //right
        seg[pos]=seg[2*pos+1]+ seg[2*pos+2];
    }
    
    
    void updateq(int index, int val, int left, int right, int pos)
    {
        //no overlap
        if(index<left or index>right) return;
        
        //total overlap
        if(left== right)
        {
            if(left == index)
                seg[pos] = val;
            return ;
        }
        
        //partial overlap
        int mid = (left+right)/2;
        
        updateq( index, val, left,mid, 2*pos+1);
        updateq( index, val, mid+1, right, 2*pos+2);
            seg[pos] = seg[2*pos+1] + seg[2*pos+2];
    }
    
    int sumrangeq(int left, int right, int l, int r, int pos)
    {
        //no overlap
        if(left>r or right<l) return 0;
        
        // total overlap
        if(left <= l and right >= r)
        {
            return seg[pos];
        }
        
        //partial overlap
        int mid = (l+r)/2;
        
        
        
        return (sumrangeq(left, right, l, mid,2*pos+1) +
            sumrangeq(left, right, mid+1, r, 2*pos+2));
    }
    
    
    
    NumArray(vector<int>& nums) {
        
        n = nums.size();
        if(n>0)
        {
            seg.resize(4*n,0);
            build(nums, 0, n-1, 0);
        }
    }
    
    void update(int index, int val) {
        if(n==0) return;
        
        return updateq(index, val, 0, n-1,0);
    }
    
    int sumRange(int left, int right) {
        if(n==0) return 0;
        
        return sumrangeq(left, right, 0, n-1, 0);
    }

};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * obj->update(index,val);
 * int param_2 = obj->sumRange(left,right);
 */





