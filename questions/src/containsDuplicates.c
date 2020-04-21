#include <stdio.h>
#include <stdbool.h>

bool containsDuplicate(int* nums, int numsSize){
    // Brute force, will not work for O(n)
    if (numsSize <= 1) {
        return false;
    }
    for(int i = 0; i < numsSize; i++) {
        for(int j = 0; j < numsSize; j++) {
            if (i != j){
                if (nums[i] == nums[j]) {
                    return true;
                }
            }
        }
    }
    return false;
}

int main() {
    int nums[] = {1,1,1,3,3,4,3,2,4,2};
    int numsSize = 10;
    bool dupes = containsDuplicate(nums, numsSize);
    return 0;
}