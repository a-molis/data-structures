#include <stdio.h>
int removeDuplicates(int* nums, int numsSize){
    if (numsSize == 0){
        return numsSize;
    }
    int i = 0;
    for(int j = 0; j < numsSize; j++){
        if (nums[i] != nums[j]){
            i++;
            nums[i] = nums[j];
        }
    }
    return i + 1;
}


int main() {
    int nums[] = {0,0,1,1,1,2,2,3,3,4};
    int numsSize = 10;
    int dupes = removeDuplicates(nums, numsSize);
    printf("%d", dupes);
}