#include <stdio.h>
#include "cgo_box.h"

int main()
{
    // 使用C 的方式调用体积计算方法
    printf("Volumn: %.2f\n", Box_volume(5, 4, 4));
}
