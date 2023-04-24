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
    int sub_x, sub_y;
    std::cin >> sx >> sy;
    std::cout << "\nThe answer is: " << sub(sub_x, sub_y); // yan specfic na yan jusq!

    //added comment

    return 0;
}
