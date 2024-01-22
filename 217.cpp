#include <vector>
#include <bitset>//bitset是在栈上分配空间，大了会爆栈
#include <unordered_set>
using namespace std;
class Solution
{
public:
  bool containsDuplicate(vector<int> &nums)
  {
   unordered_set<int> hash;
    for(int num:nums)
    {
      if(hash.find(num)!=hash.end())
      {
        return true;
      }
      else
      {
        hash.insert(num);
      }
    }
    return false;


    // bitset<100000> count;
    // bitset<100000> count2;
    // for (int i = 0; i < nums.size(); i++)
    // {
    //   if (nums[i] < 0)
    //   {
    //     if (count2[-nums[i]] == 0)
    //     {
    //       count.set(nums[i]);
    //     }
    //     else if (count2[-nums[i]] == 1)
    //     {
    //       return true;
    //     }
    //   }
    //   else
    //   {
    //     if (count[nums[i]] == 0)
    //     {
    //       count.set(nums[i]);
    //     }
    //     else if (count[nums[i]] == 1)
    //     {
    //       return true;
    //     }
    //   }
    // }
    // return false;
  }
};