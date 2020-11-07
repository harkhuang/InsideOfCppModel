#ifndef __TIME_COST_HPP_
#define __TIME_COST_HPP_
#include <iostream>
#include <chrono>

// io测时精度
#include <iomanip>
#include <thread>

class MyClock{
    public:
    // 高精度时间戳
    MyClock(std::string name = "Myclock") :lockname_(name) ,start_(std::chrono::high_resolution_clock::now()) {

    };
    ~MyClock(){
        end_ = std::chrono::high_resolution_clock::now();
        // 
        std::cout << lockname_ + " clock time passed:"  << std::chrono::duration<double, std::milli>(end_ - start_).count() << "ms\n";
    }
    private:
    // 高精度时间类型
    std::chrono::steady_clock::time_point  start_;
    std::chrono::steady_clock::time_point  end_;
    std::string lockname_;
};


#endif