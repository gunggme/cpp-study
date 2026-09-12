#include "cppstudy/vec2.hpp"

#include <cmath>

namespace cppstudy {
    // 기본 생성자 구조체 선언시 x,y 변수 초기화 
    Vec2::Vec2(float x, float y) 
    : x{x}, y{y}
    {
    }

    // 길이를 내뱉는 함수
    float Vec2::length() const{
        return std::sqrt(x * x + y * y);
    }

    // + 연산 구조체, x는 x끼리, y는 y끼리 연산
    Vec2 Vec2::operator+(const Vec2& other) const{
        return {
            x + other.x,
            y + other.y
        };
    }
}