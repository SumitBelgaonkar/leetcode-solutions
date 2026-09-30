#include <stdio.h>

int search(int* nums, int numsSize, int target) {

    int left = 0;
    int right = numsSize - 1;

    while (left <= right) {

        int mid = left + (right - left) / 2;

        if (nums[mid] == target) {
            return mid;
        }

        if (nums[mid] < target) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }

    return -1;
}

int main() {

    int n, target;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    int nums[n];

    printf("Enter elements in sorted order:\n");

    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    printf("Enter target: ");
    scanf("%d", &target);

    int result = search(nums, n, target);

    printf("Index: %d\n", result);

    return 0;
}