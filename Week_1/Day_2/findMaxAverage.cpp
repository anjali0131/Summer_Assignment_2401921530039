#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
    double sum = 0;

    for(int i = 0; i < k; i++)      
        sum += nums[i];

    double maxSum = sum;

    for(int i = k; i < nums.size(); i++) {
        sum += nums[i];             // add new element
        sum -= nums[i - k];         // remove old element
        maxSum = max(maxSum, sum);  // update max
    }

    return maxSum / k;              // return average
}
};