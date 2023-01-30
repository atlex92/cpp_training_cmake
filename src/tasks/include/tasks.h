#pragma once

#include <cstddef>
#include <vector>

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

    size_t GetAnswer() const {
        //  Измените реализацию задачи в этом методе
        return 0u;
    }
    
private:
    std::vector<int> nums_;
    size_t k_{0u};
};

/*struct Task209 {
/**
 * Дан массив с положительными целыми числами произвольного размера, а также число целевое значение желаемой суммы summ.
 * Необходимо посчитать минимальную длину последовательности в массиве, сумма элементов в которой будет >= summ.
 * Если такой последовательности в массиве нет, нужно вернуть 0.
 * https://leetcode.com/problems/minimum-size-subarray-sum/
 
    void Setup(const std::vector<int>& input_num, const size_t summ) {
        nums_ = input_num;
        summ_ = summ;
    }

    size_t GetAnswer() const {
        //  Измените реализацию задачи в этом методе
        return 0u;
    }
private:
    std::vector<int> nums_;
    size_t summ_{0u};
};*/
