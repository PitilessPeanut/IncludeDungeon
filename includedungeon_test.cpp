#define INCLUDEDUNGEON_IMPLEMENTATION
//#include "includedungeon.hpp"
#include <iostream>

//using namespace include_dungeon;

constexpr unsigned long long fib(unsigned long long n)
{
    return (n <= 1) ? n : fib(n - 1) + fib(n - 2);
}

template<int Count>
constexpr void make_fib_list(float *dst, const int offset)
{
    const auto first_val = fib(offset);
    const float divisor =
        [=]
        {
            for (unsigned long long d=1; d<=first_val; ++d)
            {
                const float scaled = first_val / float(d);
                if (scaled >= 1.0f && scaled <= 1.9f)
                    return d-0.f;
            }
            return 1.0f;
        }();
    dst[0] = first_val / divisor;
    for (std::size_t i = 1; i < Count; ++i)
    {
        dst[i] = fib(offset+i) / divisor;
    }
}

int main()
{
    std::array<float, 7> fib_list{};
    make_fib_list<7>(fib_list.data(), 20);
    for (auto f : fib_list) {
        std::cout << std::floor(f) << ' ';
    }
    std::cout << '\n';
}
