/*
* 适用于c++11及以上版本
*/
#include <chrono>
using namespace std::chrono;
int main(){
    auto start = steady_clock::now();
    // your code
    auto end = steady_clock::now();
    auto duration = duration_cast<microseconds>(end - start);
    // 浮点数，单位为s
    double t = double(duration.count()) * microseconds::period::num / microseconds::period::den;
    return 0; 
}
