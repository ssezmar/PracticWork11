//Вариант 11

#include <iostream>
#include <cmath>
#include <vector>

//Task 1
template<typename T>
T geometry(std::vector<T> arr) {
    T pro = 1;
    for (int i = 0; i < arr.size(); ++i) {
        pro *= arr[i];
    }
    return std::pow(pro, 1.0 / arr.size());
}

//Task 2
template<typename T>
T sum_of_squar(std::vector<T> arr) {
    T sum = 0;
    for (int i = 0; i < arr.size(); ++i) {
        sum += arr[i] * arr[i];
    }
    return sum;
}

int main() {
    std::vector<int> vecInt {1, 2, 3, 4, 5};
    std::cout << "Int: " << geometry(vecInt) << std::endl;

    std::vector<double> vecDouble{1.1, 2.2, 3.3, 4.4, 5.5};
    std::cout << "Double: " << geometry(vecDouble) << std::endl;
    std::cout << "------------------\n ";

    std::cout << "Int: " << sum_of_squar(vecInt) << std::endl;
    std::cout << "Double: " << sum_of_squar(vecDouble) << std::endl;

}
