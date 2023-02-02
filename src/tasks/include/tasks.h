#pragma once

#include <vector>
#include <limits>
#include <cstddef>

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
        int left_border{0};
        int right_border{0};
        int flips_left{k_};
        int res = std::numeric_limits<int>::min();

        if (nums_.size() == 0)
            return 0;

        for (right_border; right_border < nums_.size(); ++right_border) {
            if (nums_[right_border] == 0)
                flips_left--;
            while (flips_left < 0) {
                if (nums_[left_border] == 0)
                    flips_left++;
                left_border++;
            }
            res = std::max(res, right_border - left_border + 1);
        }
<<<<<<< HEAD
       return res; 
=======
        return res;
>>>>>>> d540943ef78e946f5c03b1d73f6880a021b98828
    }
    
private:
    std::vector<int> nums_;
    int k_{0};

};

struct Task209 {
/**
 * Дан массив с положительными целыми числами произвольного размера, а также число целевое значение желаемой суммы summ.
 * Необходимо посчитать минимальную длину последовательности в массиве, сумма элементов в которой будет >= summ.
 * Если такой последовательности в массиве нет, нужно вернуть 0.
 * https://leetcode.com/problems/minimum-size-subarray-sum/
**/ 
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
};
