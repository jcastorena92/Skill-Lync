#include <iostream>  // Include for cout
#include <vector>    // Include for vector

//using namespace std; 

int main() {
    unsigned int i;
    std::vector<int> first;  // Specify vector type as int
    std::vector<int> second(4, 100);
    std::vector<int> third(second.begin(), second.end());
    std::vector<int> fourth(third);

    int myints[] = {16, 2, 77, 29};
    std::vector<int> fifth(myints, myints + sizeof(myints) / sizeof(int));

    for (std::vector<int>::iterator it = fifth.begin(); it != fifth.end(); ++it) {
        std::cout << ' ' << *it;
      }
    return 0;
}
