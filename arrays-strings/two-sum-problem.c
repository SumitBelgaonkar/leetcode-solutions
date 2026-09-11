#include <stdio.h>
#include <stdlib.h>

int* twoSum(int* nums, int numsize, int target, int* returnSize) {
    int *result = (int*)malloc(2 * sizeof(int));
    if (result == NULL) {
        return NULL;
    }

    if (returnSize != NULL) {
        *returnSize = 0;
    }

    for (int i = 0; i < numsize; i++) {
        for (int j = i + 1; j < numsize; j++) {
            if (nums[i] + nums[j] == target) {
                result[0] = i;
                result[1] = j;
                if (returnSize != NULL) {
                    *returnSize = 2;
                }
                return result;
            }
        }
    }

    free(result);
    return NULL;
}

int main(void) {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int* nums = (int*)malloc(n * sizeof(int));
    if (nums == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int target;
    printf("enter the target value: ");
    scanf("%d", &target);

    int returnsize = 0;
    int* result = twoSum(nums, n, target, &returnsize);

    if (result == NULL) {
        printf("No pair found that adds up to the target.\n");
        free(nums);
        return 0;
    }

    printf("The indices of the two numbers that add up to the target are: %d and %d\n", result[0], result[1]);
    free(result);
    free(nums);
    return 0;
}