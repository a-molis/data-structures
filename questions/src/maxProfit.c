#include <stdio.h>

int maxProfit(int* prices, int pricesSize) {
    int returns = 0;
    for (int i = 1; i < pricesSize; i++) {
        int currentPrice = prices[i];
        int lastPrice = prices[i-1];
        if (prices[i] > prices[i-1]) {
            returns += prices[i] - prices[i-1];
        }
    }
    return returns;
}

int main() {
    int prices[] = {7, 1, 5, 1, 2, 36, 37, 4};
    int pricesSize = 8;
    int profit = maxProfit(prices, pricesSize);
    printf("Profits are %d", profit);
    return 0;
}
