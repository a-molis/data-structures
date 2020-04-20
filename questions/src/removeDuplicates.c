#include <stdio.h>
int removeDuplicates(int* nums, int numsSize){
    for(int i = 0; i < numsSize; i++){
        printf("%d\n", nums[i]);
    }
    return 0;
}


int main() {
    int nums[] = {0,0,1,1,1,2,2,3,3,4};
    int numsSize = 10;
    int dupes = removeDuplicates(nums, numsSize);
}