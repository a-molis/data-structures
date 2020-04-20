#include <stdio.h>

void reverseArray(int* nums, int left, int right) {
    while(left < right) {
        int temp = nums[left];
        nums[left] = nums[right];
        nums[right] = temp;
        right--;
        left++;
    }
}

void rotate(int* nums, int numsSize, int k){
    int rotations;
    if (k > 0) {
        rotations = k % numsSize;
    } else {
        rotations = k;
    }
    reverseArray(nums, 0, numsSize - 1);
    reverseArray(nums, 0, rotations -1);
    reverseArray(nums, rotations, numsSize - 1);
}

int main() {
    int nums[] = {7, 1, 5, 1, 2, 36, 37, 4};
    int numsSize = 8;
    rotate(nums, numsSize, 3);
    for(int i = 0; i < numsSize; i++) {
        printf("%d, ", nums[i]);
    }
    return 0;
}