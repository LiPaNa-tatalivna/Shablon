#include <iostream>

class DivisibleByThree {
private:
    int sum;
    int count;

public:
    DivisibleByThree() : sum(0), count(0) {}

    void operator()(int number) {
        if (number % 3 == 0) {
            sum += number;
            count++;
        }
    }

    int get_sum() const {
        return sum;
    }

    int get_count() const {
        return count;
    }
};

int main() {
    DivisibleByThree functor;

    functor(3);
    functor(6);
    functor(9);
    functor(12);

    std::cout << "Sum: " << functor.get_sum() << std::endl;
    std::cout << "Count: " << functor.get_count() << std::endl;

    return 0;
}
