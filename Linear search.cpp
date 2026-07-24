#include <iostream>
#include <vector>

// Returns the index of the target, or -1 if not found
int linearSearch(const std::vector<int>& arr, int target) {
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] == target) {
            return i; // Target found, return index immediately
        }
    }
    return -1; // Target not found after checking all elements
}

int main() {
    std::vector<int> numbers = {24, 10, 5, 87, 43, 12};
    int target = 43;

    int result = linearSearch(numbers, target);

    if (result != -1) {
        std::cout << "Element found at index: " << result << std::endl;
    } else {
        std::cout << "Element not found in the array." << std::endl;
    }

    return 0;
}
