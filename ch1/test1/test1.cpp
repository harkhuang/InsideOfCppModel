#include <iostream>
#include "timecost.hpp"

 
class Point{
public:
    Point(){
        x = 1;
        y = 2;
        z = 3;
    }
    ~Point(){   
    }

private:
    int x;
    int y;
    int z;
};

class Point1{
public:
    Point1(int x,int y,int z):x(x),y(y),z(z){ }
    ~Point1(){ }
private:
    int x;
    int y;
    int z;
};



 
// 1.测试初始化的效率
// 2.测试拷贝构造的效率
// 3.测试复制拷贝构造效率

int main()
{
    {
        MyClock tempclock("测试用例1");
        for(int i=0;i<100000;i++){
            Point a;
        }
    }

    

    {
        MyClock tempclock2("测试用例2");
        for(int i=0;i<100000;i++){
            Point1 a(1,2,3);
        }
    }

    // std::clock_t c_start = std::clock();
    // auto t_start = std::chrono::high_resolution_clock::now();
    // std::clock_t c_end = std::clock();
    // auto t_end = std::chrono::high_resolution_clock::now();
    // std::cout << std::fixed << std::setprecision(2) << "CPU time used: "
    //           << 1000.0 * (c_end - c_start) / CLOCKS_PER_SEC << " ms\n";
    // std::cout << "Wall clock time passed:"  
    // << std::chrono::duration<double, std::milli>(t_end - t_start).count() << "ms\n";

    return 0;
}



/*

#仅仅-O3优化时 显示出比较明显的区别
# 这里能体现出的优化是什么?
g++ -std=c++11 -O3
hk-mac:ch1 hk$ g++  --std=c++11 test1.cpp -O3
hk-mac:ch1 hk$ ./a.out 
测试用例1 clock time passed:0.002653ms
测试用例2 clock time passed:0.000121ms
hk-mac:ch1 hk$ ./a.out 
测试用例1 clock time passed:0.002501ms
测试用例2 clock time passed:0.00012ms

*/