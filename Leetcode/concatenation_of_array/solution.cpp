class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
      vector<int> ans;
      long int n=nums.size();
      long int a=0;
      for(int i=0;i<2*n;i++){
          if(i<n){
              ans.push_back(nums[i]);
          }
          else{
              ans.push_back(nums[a]);
              a++;
          }
      } 
      return ans; 
    }
};