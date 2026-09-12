#include "cppstudy/vec2.hpp"

#include<iostream>

int main(){
    // 1. stack에 생성
    cppstudy::Vec2 stackVec{10.0f, 20.0f};

    // 2. heap에 생성
    cppstudy::Vec2* heapVec = new cppstudy::Vec2{30.0f, 40.0f};

    std::cout << "stackVec address      : " << &stackVec << "\n";
    
    std::cout << "heapVec ptr address   : " << &heapVec << "\n";
    std::cout << "heapVec value         : " << heapVec << "\n";

    std::cout << "heapVec x             : " << heapVec->x << "\n";
    std::cout << "heapVec y             : " << heapVec->y << "\n";

    delete heapVec;

    return 0;
}