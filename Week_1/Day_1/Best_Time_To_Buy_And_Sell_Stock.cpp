#include <iostream>
#include <vector>

class Solution {
public:
    int maxProfit(std::vector<int>& prices) {
        if (prices.empty())
            return 0;

        int minPrice = prices[0];
        int profit = 0;
        for (int i = 1; i < static_cast<int>(prices.size()); i++) {
            int diff = prices[i] - minPrice;
            if (prices[i] < minPrice)
                minPrice = prices[i];
            else if (diff > profit)
                profit = diff;
        }
        return profit;
    }
};

int main() {
    Solution solution;
    std::vector<int> prices = {7, 1, 5, 3, 6, 4};
    int result = solution.maxProfit(prices);
    std::cout << "Max Profit: " << result << std::endl;
    return 0;
}