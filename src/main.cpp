#include "cppstudy/vec2.hpp"

#include<iostream>

cppstudy::Vec2& makeVec();

int main(){
    // cppstudy::Vec2 a{3.0f, 4.0f};
    // cppstudy::Vec2 b{1.0f, 2.0f};

    // const auto c = a + b;

    // std::cout << "a.length() : " << a.length() << '\n';
    // std::cout << "c: " << c.x << ", " << c.y << '\n';

    cppstudy::Vec2& vec = makeVec();

    std::cout << "vec address : " << &vec << "\n";
    std::cout << "vec.x : " << &vec.x << ", vec.y : " << &vec.y << "\n";
    std::cout << "vec.x : " << vec.x << ", vec.y : " << vec.y << "\n";

    std::cout << "sizeof(float): "
          << sizeof(float)
          << '\n';

    std::cout << "sizeof(Vec2): "
          << sizeof(cppstudy::Vec2)
          << '\n';

    return 0;
}

cppstudy::Vec2& makeVec()
{
    cppstudy::Vec2 v{1.0f, 2.0f};

    return v;
}