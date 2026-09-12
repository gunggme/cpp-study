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
