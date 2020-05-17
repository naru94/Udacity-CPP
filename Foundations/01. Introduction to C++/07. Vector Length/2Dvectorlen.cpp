#include <iostream>
#include <vector>
using std::vector;
using std::cout;

int main() {

    vector<vector<int>> b = {{1, 1, 2, 3, 4},
                             {2, 1, 2, 3},
                             {3, 1, 2}};
    // Print the length of an inner vector of b here.
    cout << b.size() << "\n";
    cout << b[0].size() << "\n";

}