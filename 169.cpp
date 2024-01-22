#include <vector>
#include <unordered_map>
using namespace std;

class Solution
{
public:
  int majorityElement(vector<int> &nums)
  {
    unordered_map<int, int> map;
    for (int num : nums)
    {
      map[num]++;
      if (map[num] > nums.size() / 2)
      {
        return num;
      }
    }
  }
};

// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//         int candidate = -1;
//         int count = 0;
//         for (int num : nums) {
//             if (num == candidate)
//                 ++count;
//             else if (--count < 0) {
//                 candidate = num;
//                 count = 1;
//             }
//         }
//         return candidate;
//     }
// };    投票算法，O（1）的空间复杂度