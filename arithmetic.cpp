#include <iostream>


int add(int x, int y) {
    return x + y;
}



int main () {

    std::cout << "Add two number for addition:";
    int x, y;
    std::cin >> x >> y;
    std::cout << "The answer is: " << add(x, y);

    return 0;
}
