#ifndef _BOX_H_
#define _BOX_H_

/**
 *
 * 定义一个C++的类
 * 并提供一个Public 方法供外部调用
 *
 */

#include <iostream>

class Box
{
public:
    double length;
    double width;
    double height;

    double volume();
};

#endif
