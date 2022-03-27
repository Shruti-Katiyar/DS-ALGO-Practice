//Two Sum II - Input Array Is Sorted
https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/submissions/

class Solution {
public:
    //indexing 1 base h in this ques
    //2 methods are there
    //use 2 pointer or binary search bw arr is sorted
  vector<int> twoSum(vector<int>& numbers, int target) {
        int low = 0, high = numbers.size()-1;
        vector<int> sum;
        while(low < high)
        {
            if(numbers[low] + numbers[high] == target)
            {
                sum.push_back(low+1);
                sum.push_back(high+1);   // alternative: sum = {low+1, high+1};
                return sum;
            }
            else if(numbers[low] + numbers[high] > target)
                high--;
            else
                low++; 
        }
        return sum;
    }
};
