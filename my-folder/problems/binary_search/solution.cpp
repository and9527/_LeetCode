class Solution {
public:
    int search(vector<int>& nums, int target) {
    vector<int>::iterator it_i;
        for(it_i=nums.begin(); it_i!=nums.end(); ++it_i){
            if(*it_i==target){
                return it_i - nums.begin();
            }       
        } 
        return -1; 
    }
};