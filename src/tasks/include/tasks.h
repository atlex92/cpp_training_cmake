#pragma once

#include <vector>
#include <iostream>
#include <queue>

using namespace std;
struct Task1004 {
/**
 * Дан массив произвольного размера, содержащий цифры '0' и '1', а также число k.
 * Необходимо посчитать максимальную длину последовательности из '1' в массиве,
 * с учетом, что можно заменять встречающиеся '0' не более k раз.
 * https://leetcode.com/problems/max-consecutive-ones-iii/
 */
    int longestOnes(vector<int> nums, int k) {
        int ret{};

        size_t left_border{};
        size_t right_border{};
        const size_t last_element{nums.size()};
        queue<size_t> zero_index_queue{};
        int frame_length{};

        while((right_border < last_element) && (ret < frame_length + (last_element - right_border))) {
            if(0u == nums[right_border]) {
                zero_index_queue.push(right_border);
                if(zero_index_queue.size() > k) {
                    left_border = zero_index_queue.front();
                    zero_index_queue.pop();
                    left_border++;
                    // cout << "reset, " << "left_border = " << left_border << endl;
                }
            }
            frame_length = right_border - left_border + 1u;
            ret = max(ret, frame_length);
            ++right_border;
        }

        return ret;
    }
};

struct Task209 {
/**
 * Дан массив с положительными целыми числами произвольного размера, а также число целевое значение желаемой суммы summ.
 * Необходимо посчитать минимальную длину последовательности в массиве, сумма элементов в которой будет >= summ.
 * Если такой последовательности в массиве нет, нужно вернуть 0.
 * https://leetcode.com/problems/minimum-size-subarray-sum/
 */
    int minSubArrayLen(const int& target, const vector<int>& nums) {
        size_t ret{0u};

        if(!nums.empty()) {
            int summ{nums[0]};
            size_t left_border{};
            size_t right_border{};
            const size_t last_element_index{nums.size() - 1u};

            while((left_border <= last_element_index) && (right_border <= last_element_index)) {
                if(summ >= target) {
                    const size_t len{(right_border - left_border + 1u)};
                    if(ret == 0 || len < ret) {
                        ret = len;
                    }

                    if(ret == 1) {
                        break;
                    }
            
                    if((left_border != right_border) && (summ != target)) {
                        summ -= nums[left_border];
                        ++left_border;
                    }
                    else if((left_border + 2u) < last_element_index) {
                        summ -= (nums[left_border] + nums[left_border + 1]);
                        ++right_border;
                        summ += nums[right_border];
                        left_border += 2u;
                    }
                    else {
                        break;
                    }
                }
                else {
                    if(++right_border <= last_element_index) {
                        summ += nums[right_border];
                    }
                    else {
                        break;
                    }
                }
            }
        }
        return ret;
    }
};

struct Task1109 {
/**
 * There are n flights that are labeled from 1 to n.

 * You are given an array of flight bookings bookings, where bookings[i] = [firsti, lasti, seatsi] represents
 * a booking for flights firsti through lasti (inclusive) with seatsi seats reserved for each flight in the range.

 * Return an array answer of length n, where answer[i] is the total number of seats reserved for flight i.
 * https://leetcode.com/problems/corporate-flight-bookings/
 */
    enum BookingFieldPositionE{
        POS_FLIGHT_FROM = 0u,
        POS_FLIGHT_TO,
        POS_SEATS,
    };

    vector<int> corpFlightBookings(const vector<vector<int>>& bookings, int n) {
        vector<int> ret(n, 0u);
        for(const auto& booking : bookings) {
            const auto first{booking[POS_FLIGHT_FROM]};
            const auto last{booking[POS_FLIGHT_TO]};
            const auto seats{booking[POS_SEATS]};
            ret[first - 1u] += seats;
            if(last < n) {
                ret[last] -= seats;
            }
        }

        for (size_t i = 1; i < n; i++) {
            ret[i] += ret[i - 1u];
        }        

        return ret;
    }
};
