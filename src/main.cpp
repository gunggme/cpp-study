#include "cppstudy/vec2.hpp"

#include<iostream>

int main(){
    // 오리지널 변수 생성
    cppstudy::Vec2 original{10.0f, 20.0f};

    // 그냥 오리지널 변수값을 가진 변수 초기화
    cppstudy::Vec2 value = original;
    // 오리지널 변수값의 주소값을 가진 변수 초기화
    cppstudy::Vec2& ref = original;
    // 오리지널 변수값의 주소값으로 초기화
    cppstudy::Vec2* ptr = &original;

    ptr->y = 999.0f;

    // 오리지널 주소 출력
    std::cout << "original address  : " << &original << '\n';
    // 일반 변수 주소 출력
    std::cout << "value adress      : " << &value << "\n";
    // 주소값 출력
    std::cout << "ref adddress      : " << &ref << "\n";
    // 주소값으로 초기화된 변수 출력
    std::cout << "ptr value         : " << ptr << "\n";

    std::cout << '\n';
    
    std::cout << "original  : " << original.x << ", " << original.y << "\n";
    std::cout << "value     : " << value.x << ", " << value.y << "\n";
    std::cout << "ref       : " << ref.x << ", " << ref.y << "\n";
    std::cout << "ptr       : " << ptr->x << ", " << ptr->y << "\n";

    return 0;
}