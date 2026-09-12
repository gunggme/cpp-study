#include "cppstudy/vec2.hpp"

#include<cassert>
#include <cmath>

int main(){
    const cppstudy::Vec2 v{3.0f, 4.0f};

    assert(std::abs(v.length() - 5.0f) < 0.001f);

    const cppstudy::Vec2 a{1.0f, 2.0f};
    const cppstudy::Vec2 b{3.0f, 4.0f};

    const auto c = a + b;

    assert(c.x == 4.0f);
    assert(c.y == 6.0f);

    return 0;
}