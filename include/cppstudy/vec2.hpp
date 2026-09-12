#pragma once

namespace cppstudy{

    // 구조체 선언
    struct Vec2{
        // x 축 선언
        float x {};
        // y 축 선언
        float y {};

        // 명시적 기본 멤ㅂ머 함수?? 
        Vec2() = default;
        // 생성자 선언 x, y축 선언 가능
        Vec2(float x, float y);

        // 구조체 함수 반환값을 무시할 경우 컴파일 단계에서 경고를 발생함
        [[nodiscard]]
        float length() const;

        // + 연산자를 할때 처리할 함수
        Vec2 operator+(const Vec2& other) const;
    };
}