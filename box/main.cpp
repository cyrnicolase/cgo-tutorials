#include <iostream>
#include "box.h"

int main()
{
    Box box1;
    box1.height = 2;
    box1.length = 2;
    box1.width = 2;

    std::cout << "盒子体积：" << box1.volume() << std::endl;
}
