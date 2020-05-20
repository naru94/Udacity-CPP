/* g++ -std=c++17 -o .\vectordeduction.exe .\vectordeduction.cpp */

#include<cassert>
#include<string>
#include<vector>

template <typename T>
T Max(T a, T b) {
    return a > b ? a : b;
} 

int main() {
    assert(Max(2, 4) == 4);
    assert(Max(-1.0, -2.3) == -1.0);
    assert(Max('a', 'b') == 'b');

    std::vector v{1, 2, 3};
    assert(v.size() == 3);
}