#include <stdio.h>

int main() {
    int prices[100000];
    int n, i;
    int min_price, max_profit = 0, profit;

    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        scanf("%d", &prices[i]);
    }
    min_price = prices[0];

    for(i = 1; i < n; i++) {
        if(prices[i] < min_price) {
            min_price = prices[i];
        } else {
            profit = prices[i] - min_price;
            if(profit > max_profit) {
                max_profit = profit;
            }
        }
    }
    printf("%d", max_profit);
    return 0;
}
