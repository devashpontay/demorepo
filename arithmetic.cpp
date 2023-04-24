#include <iostream>


int add(int x, int y) {
    return x + y;
}

int sub(int x, int y){
    return x - y;
}



int main () {

    std::cout << "Add two number for addition:";
    int x, y;
    std::cin >> x >> y;
    std::cout << "The answer is: " << add(x, y);

    std::cout << "\n\nAdd two number for subraction:";
    int sx, sy;
    std::cin >> sx >> sy;
    std::cout << "\nThe answer is: " << sub(sx, sy);

    return 0;
}
