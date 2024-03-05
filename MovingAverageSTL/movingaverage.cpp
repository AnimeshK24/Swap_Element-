#include <iostream>
#include <vector>
#include "movingaverage.h"

int main()
{
   
    // Example: Historical stock prices of a company (daily closing prices)
    std::vector<double> stock_prices = {100.0, 102.5, 105.2, 103.8, 107.6, 109.3, 112.0, 114.5, 116.2, 118.0};

    // Window size for moving average calculation (3 days)
    size_t window_size = 3;

    // Vector to store the moving average values
    std::vector<double> moving_avg;

    // Calculate the moving average of stock prices
    std::moving_average(stock_prices,moving_avg,window_size);

    // Output the moving average values
    std::cout << "Moving Average of Stock Prices (Window Size = " << window_size << "):" << std::endl;
    for (size_t i = 0; i < moving_avg.size(); ++i) {
        std::cout << "Day " << i + 1 << ": " << moving_avg[i] << std::endl;
    }

}


