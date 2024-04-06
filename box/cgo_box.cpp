#include "cgo_box.h"
#include "box.h"
#include <iostream>

/**
 * 通过C++的类的方法计算体积
 * 这里的Box_volume 实现了C 的接口,供CGO调用
 * 其内部调用了C++的类的方法
 */

double Box_volume(double length, double width, double height)
{
    Box box;
    box.length = length;
    box.width = width;
    box.height = height;
    return box.volume();
}
