/*
* 适用于C++11及以上
* 使用C++11的<random>提供的随机数引擎
* 参照: https://www.cnblogs.com/byhj/p/4149467.html
*/

#include <iostream>
#include <random>

int main(){
    // 1. 随机整数
    // 随机数引擎(默认产生1-2147483646之间的随机数)
    std::default_random_engine e;
    // 初始化种子
    e.seed((int)time(0));
    // 产生随机数
    int r = e();
    std::cout << "默认随机整数:" << r << std::endl;

    // 2. 指定随机数范围
    // 产生0-9之间的unsigned int类型的随即数(均匀分布)
    std::uniform_int_distribution<unsigned int> u(0,9);
    r = u(e);
    std::cout << "0-9之间的整数:" << r << std::endl;

    // 3. 随机小数
    // 0-1之间的随机小数(均匀分布)
    std::uniform_real_distribution<double> ud(0.0,1.0);
    double dr = ud(e);
    std::cout << "0-1之间的随机小数:" << dr << std::endl;

    // 4. 正态分布
    // 均值为0, 方差为1
    std::normal_distribution<double> nu(0,1);
    dr = nu(e);
    std::cout << "正态分布:" << dr << std::endl;

    return 0;
}