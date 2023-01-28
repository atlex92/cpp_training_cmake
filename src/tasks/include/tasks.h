#pragma once

#include <vector>

struct Task1004 {
/**
 * Дан массив произвольного размера, содержащий цифры '0' и '1', а также число k.
 * Необходимо посчитать максимальную длину последовательности из '1' в массиве,
 * с учетом, что можно заменять встречающиеся '0' не более k раз.
 * https://leetcode.com/problems/max-consecutive-ones-iii/
 */
    void Setup(const std::vector<int>& input_num, const size_t k) {
        nums_ = input_num;
        k_ = k;
    }

    size_t GetAnswer() const {
        //  Измените реализацию задачи в этом методе
        return 0u;
    }
private:
    std::vector<int> nums_;
    size_t k_{0u};
};
