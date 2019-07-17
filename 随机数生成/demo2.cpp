/*
* 使用C++的<stdlib.h>中的随机数生成函数
* 参照: https://blog.csdn.net/beyond0824/article/details/6009908
*/

#include <iostream>
#include <stdlib.h>


int main(){
    // 设置初始化种子
    srand((int)time(0));
    // 产生0-RAND_MAX中的随机整数
    // RAND_MAX定义在<stdlib.h>中, 为INT_MAX
    int r = rand();
    std::cout << r << std::endl;

    return 0;
}