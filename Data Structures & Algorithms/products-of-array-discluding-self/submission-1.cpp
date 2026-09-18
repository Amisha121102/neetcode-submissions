class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans(nums.size());
        
int zeroes = 0;
int product = 1;
for(int i=0;i<nums.size();i++){
   if(nums[i] == 0){
    zeroes++;
   }
   else{
      product = product * nums[i];
   }
}

if (zeroes > 1) return ans;
else if(zeroes == 0){
  for(int i=0;i<nums.size();i++){
    ans[i] = product/nums[i];
  }
}
else{
    for(int i=0;i<nums.size();i++){
        if(nums[i]!=0){
            ans[i] = 0;
        }
        else{
            ans[i] = product;
        }
    }
}
return ans;
    }
};
