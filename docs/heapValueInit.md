# heapValueInit

## use this code
```cpp
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
```

## somthing
스택에다가 변수 초기화 하면, 정상적으로 메모리 스택에 값이 저장됨 주소값 출력시 아래 주소 출력
```
stackVec address      : 0x7ffc1aa56dd0
```

또한 힙에다가 데이터를 저장해도 메모리 스택에 "힙"에대한 주소값이 저장됨
```
stackVec address      : 0x7ffc1aa56dd0
```

그러고 별도의 힙 공간에 x,y값들이 저장되어, heap의 데이터는 주소값이 들어있ㅇ서 그냥 출력시 heap의 주소가 출력됨
```
heapVec value         : 0x55ac6e2d0020
```

그렇게해서 heap에저장된 구조체 변수들을 꺼내면 정상적으로 출력되는걸 확인할 수 있음
```
heapVec x             : 30
heapVec y             : 40
```


## off boarding
```
STACK

0x7ffc1aa56dc8
┌────────────────────────┐
│ heapVec                │
│ 값 = 0x55ac6e2d0020    │
└───────────┬────────────┘
            │
            │ 가리킴
            ▼

HEAP

0x55ac6e2d0020
┌────────────────────────┐
│ Vec2                   │
│ x = 30                 │
│ y = 40                 │
└────────────────────────┘
```