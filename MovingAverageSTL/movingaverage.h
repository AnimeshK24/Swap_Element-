#ifndef MOVINGAVERAGE_H
#define MOVINGAVERAGE_H

#include <iostream>
#include <numeric>

namespace std _GLIBCXX_VISIBILITY(default)
{

    template <typename InputContainer, typename OutputContainer>
    void moving_average(const InputContainer &values, OutputContainer &moving_avg, size_t window_size)
    {
        // Clear the output container
        moving_avg.clear();

        // Iterate over the input sequence
        for (auto it = values.begin(); it != values.end(); ++it)
        {
            // Calculate the start and end iterators for the current window
            auto start = std::max(values.begin(), it - window_size + 1);
            auto end = it + 1;

            // Calculate the sum of values in the current window
            auto sum = std::accumulate(start, end, typename OutputContainer::value_type(0));

            // Calculate the average and store it in the output sequence
            moving_avg.push_back(sum / std::distance(start, end));
        }
    }
}

#endif // MOVINGAVERAGE_H
