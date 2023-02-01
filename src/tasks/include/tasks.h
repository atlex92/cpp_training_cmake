#pragma once

#include <vector>
#include <iostream>
struct Task1004 {
/**
 * Дан массив произвольного размера, содержащий цифры '0' и '1', а также число k.
 * Необходимо посчитать максимальную длину последовательности из '1' в массиве,
 * с учетом, что можно заменять встречающиеся '0' не более k раз.
 * https://leetcode.com/problems/max-consecutive-ones-iii/
 */
    void Setup(const std::vector<int>& input_num, const int k) {
        nums_ = input_num;
        k_ = k;
    }

    int GetAnswer() const {
        size_t ret{0u};
        for (size_t start_index{0u}; start_index < nums_.size();) {

            const auto subarray_solution{FindMaxLenAndFirstZeroFromIndex(start_index)};
            const auto subarray_length{subarray_solution.first};
            start_index = subarray_solution.second + 1u;
            if(subarray_length > ret) {
                ret = subarray_length;
            }
        }
        return ret;
    }
private:
    std::pair<int, size_t> FindMaxLenAndFirstZeroFromIndex(const size_t start_index) const {
        int max_len{0u};
        size_t first_zero_index{start_index};
        int replacings_left{k_};

        for (size_t i{start_index}; i < nums_.size(); i++) {
            if(0u == nums_[i]) {
                if(start_index == first_zero_index) {
                    first_zero_index = i;
                }
                if(0u == replacings_left) {
                    break;
                }
                else {
                    replacings_left--;
                }
            }
            max_len++;
        }
        return std::make_pair(max_len, first_zero_index);
    }

    std::vector<int> nums_;
    int k_;
};

struct Task209 {
/**
 * Дан массив с положительными целыми числами произвольного размера, а также число целевое значение желаемой суммы summ.
 * Необходимо посчитать минимальную длину последовательности в массиве, сумма элементов в которой будет >= summ.
 * Если такой последовательности в массиве нет, нужно вернуть 0.
 * https://leetcode.com/problems/minimum-size-subarray-sum/
 */
    void Setup(const std::vector<int>& input_num, const size_t summ) {
        nums_ = input_num;
        summ_ = summ;
    }

    size_t GetAnswer() const {
        size_t ret{0u};
        for(size_t i{}; i < nums_.size(); i++) {
            const size_t sub_array_length{GetSubArrayLengthFromIndex(i)};
            const bool is_any_answer_found{ret != 0u};
            const bool is_better_answer_found{(sub_array_length < ret) && (sub_array_length != 0u)};
            if(is_better_answer_found || !is_any_answer_found) {
                ret = sub_array_length;
            }
            if(kMinPossibleLength == ret) {
                break;
            }
        }
        return ret;
    }
private:
    size_t GetSubArrayLengthFromIndex(const size_t index) const {
        size_t ret{0u};
        size_t summ{0u};
        for(size_t i{index}; i < nums_.size(); i++) {
            summ += nums_[i];
            if(summ >= summ_) {
                ret = (i - index + 1u);
                break;
            }
        }
        return ret;
    }
    std::vector<int> nums_;
    size_t summ_{0u};
    static constexpr size_t kMinPossibleLength{1u}; 
};
