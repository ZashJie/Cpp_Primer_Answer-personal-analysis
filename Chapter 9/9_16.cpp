#include <iostream>
#include <vector>
#include <string>
#include <list>
using namespace std;


int main() {

    std::list<int> li{ 1, 2, 3, 4, 5 };
    std::vector<int> vec2{ 1, 2, 3, 4, 5 };
    std::vector<int> vec3{ 1, 2, 3, 4 };

    std::cout << (vector<int>(li.begin(), li.end()) == vec2 ? "true" : "false") << std::endl;
    std::cout << (vector<int>(li.begin(), li.end()) == vec3 ? "true" : "false") << std::endl;

    return 0;
}
