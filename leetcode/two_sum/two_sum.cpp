#include <iostream>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i = 0; i<sizeof(nums); i++){
            cout<<nums[i]<<endl;
        }
    }
};

int main(){

 vector<int> nums = [2,7,11,15];
 int target = 9;
 Solution s = new Solution();
 s->twoSum(nums, target);

 return 0;

}
