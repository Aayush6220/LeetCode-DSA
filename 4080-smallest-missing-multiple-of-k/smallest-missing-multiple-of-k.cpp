class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int> occ(nums.begin(), nums.end());
        for(int i=1;;i++){
            if(occ.find(k*i)==occ.end()){
                return k*i;
            }
        }
        return 0;
    }
};