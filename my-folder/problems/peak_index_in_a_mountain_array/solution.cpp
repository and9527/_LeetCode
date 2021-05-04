class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int left=0;
        int right=arr.size()-1; 
        while(left<=right){
            int mid=(right+left)/2;
            if(arr[right]==arr[left]){
                return mid;
            }else if(arr[mid]>=arr[right]){
                right--;
            }else{
                left++;
            }
        }
        return -1;
    }
};