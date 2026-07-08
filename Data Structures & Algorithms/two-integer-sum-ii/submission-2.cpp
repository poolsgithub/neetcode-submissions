class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        for(int i=0;i<n;i++){
            int rem = target - numbers[i];
            int j=0,k= n-1;
            int mid;
            while(j<=k){
                mid = (j+k)/2;
                if(numbers[mid] == rem && mid != i){
                    return {i+1,mid+1};
                }
                else if(numbers[mid] > rem){
                    k = mid-1;
                }
                else{
                    j = mid+1;
                }
            }   
        }
        return {};
    }
};
