# cpp-study

C++20 학습용 프로젝트. 2차원 벡터(`Vec2`)의 덧셈과 길이 계산을 구현합니다.

## 빌드 및 실행

C++20 지원 컴파일러와 CMake 3.20 이상이 필요합니다.

```sh
cmake -S . -B build
cmake --build build
./build/cpp-study
```

## 테스트

```sh
ctest --test-dir build --output-on-failure
```

## 로드맵

```
1. 지금 프로젝트 빌드
        ↓
2. 변수 / stack / function
        ↓
3. pointer / reference
        ↓
4. struct / class
        ↓
5. constructor / destructor
        ↓
6. RAII
        ↓
7. new/delete를 직접 사용해보기
        ↓
8. vector가 내부적으로 어떻게 메모리를 늘리는지 구현
        ↓
9. allocator / arena / pool
        ↓
10. Vec2 / Vec3 / Vec4
        ↓
11. Matrix
        ↓
12. 그래픽스
```