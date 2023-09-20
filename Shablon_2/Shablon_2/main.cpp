#include <iostream>
#include <vector>

template<typename T>
class Table {
private:
    std::vector<std::vector<T>> data;
    int rows;
    int cols;

public:
    Table(int rows, int cols) : rows(rows), cols(cols) {
        data.resize(rows, std::vector<T>(cols));
    }

    std::vector<T>& operator[](int row) {
        return data[row];
    }

    const std::vector<T>& operator[](int row) const {
        return data[row];
    }

    int Size() const {
        return rows * cols;
    }
};

int main() {
    Table<int> test(2, 3);
    test[0][0] = 4;
    std::cout << test[0][0]; // выводит 4
    std::cout << std::endl << test.Size() << std::endl;

    return 0;
}
