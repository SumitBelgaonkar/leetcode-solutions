#include <stdio.h>

void moveZeroes(int* nums, int numsSize) {

    int j = 0;

    // Move non-zero elements to the front
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != 0) {
            nums[j] = nums[i];
            j++;
        }
    }

    // Put zeroes at the end
    while (j < numsSize) {
        nums[j] = 0;
        j++;
    }
}

int main() {

    int n;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    int nums[n];

    printf("Enter the elements:\n");

    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    moveZeroes(nums, n);

    printf("Array after moving zeroes:\n");

    for (int i = 0; i < n; i++) {
        printf("%d ", nums[i]);
    }

    return 0;
}