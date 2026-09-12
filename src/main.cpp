#include "cppstudy/vec2.hpp"

#include<iostream>

int main(){
    cppstudy::Vec2 a{3.0f, 4.0f};
    cppstudy::Vec2 b{1.0f, 2.0f};

    const auto c = a + b;

    std::cout << "a.length() : " << a.length() << '\n';
    std::cout << "c: " << c.x << ", " << c.y << '\n';

    return 0;
}