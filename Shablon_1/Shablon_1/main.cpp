#include <vector>
#include <iostream>


template <typename T>
T square(T number) {
    return number * number;
}

// 2. Реализация для векторов:

template <typename T>
std::vector<T> square(const std::vector<T>& vec) {
    std::vector<T> result;
    for (const auto& element : vec) {
        result.push_back(element * element);
    }
    return result;
}

int main() {
    // Пример для простых чисел
    int num = 5;
    int squaredNum = square(num);
    std::cout << "Square of " << num << " is: " << squaredNum << std::endl;

    // Пример для вектора
    std::vector<double> vec = {1.5, 2.5, 3.5};
    std::vector<double> squaredVec = square(vec);
    std::cout << "Vector: ";
    std::cout << "Squared vector: ";
    for (const auto& element : squaredVec) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    return 0;
}
