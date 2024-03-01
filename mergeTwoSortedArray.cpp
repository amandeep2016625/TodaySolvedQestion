class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) { int n=0;
        int a=nums1.size();
        int b=nums2.size();
        vector<int>v(a+b,0);
        merge(nums1.begin(),nums1.end(),nums2.begin(),nums2.end(),v.begin());
        int c=a+b;
        if(c%2==0)
        { n=c/2;
            float mid=(v[n]+v[n-1])/2.0;
            return mid;}
        else
        { int mid=c/2;
           return v[mid];}
            
    }
};
