class Solution {
public:
    int maxProduct(int n) {
        vector<int>arr;
        int a=n;
        int maxi=0;
        while(n!=0){
            arr.push_back(n%10);
            n=n/10;
        }
        //
        for(int i=0;i<arr.size()-1;i++){
            for(int j=1;j<arr.size();j++){
                if(i==j){
                    continue;
                }
                maxi=max(maxi,arr[i]*arr[j]);
            }

        }
        return maxi;
    }
};