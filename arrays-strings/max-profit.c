#include <stdio.h>

int maxProfit(int* prices, int pricesSize) {

    int mn = prices[0];
    int profit = 0;

    for(int i = 1; i < pricesSize; i++) {

        // Find minimum price so far
        if(prices[i] < mn) {
            mn = prices[i];
        }

        // Calculate profit if we sell today
        if(prices[i] - mn > profit) {
            profit = prices[i] - mn;
        }
    }

    return profit;
}

int main() {

    int n;

    printf("Enter number of days: ");
    scanf("%d", &n);

    int prices[n];

    printf("Enter stock prices:\n");

    for(int i = 0; i < n; i++) {
        scanf("%d", &prices[i]);
    }

    int result = maxProfit(prices, n);

    printf("Maximum profit = %d\n", result);

    return 0;
}