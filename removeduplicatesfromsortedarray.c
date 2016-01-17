#include<stdio.h>

int main(){
    int nums[6] = {1, 2, 2, 3, 4, 4};
    int length = sizeof(nums)/sizeof(nums[0]);
    printf("%d", removeDuplicates(nums, length));
}

int removeDuplicates(int* nums, int numsSize) {
    if(numsSize == 0){
        return 0;
    }
    int i = 0;
    for(int j = 1; j < numsSize; j++){
        if(nums[i] != nums[j]){
            i++;
            nums[i] = nums[j];

        }
    }
    return i + 1;

}
