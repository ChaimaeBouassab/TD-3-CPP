#include <iostream>
#include <list>
#include <algorithm>

int main() {
    // Declare variables and containers
    int userInput;
    std::list<int> inputList;
    std::list<int> sortedList;

    // Read user input and store it in the list
    std::cout << "Enter some integers (separated by spaces): ";
    while (std::cin >> userInput) {
        inputList.push_back(userInput);
    }

    // Sort the list using bubble sort
    std::cout << "Bubble sort: ";
    for (auto it = inputList.begin(); it != inputList.end(); ++it) {
        for (auto jt = it; jt != inputList.end(); ++jt) {
            if (*it > *jt) {
                std::iter_swap(it, jt);
            }
        }
        sortedList = inputList;
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    // Sort the list using selection sort
    std::cout << "Selection sort: ";
    for (auto it = inputList.begin(); it != inputList.end(); ++it) {
        int minValue = *it;
        auto minIt = it;
        for (auto jt = it; jt != inputList.end(); ++jt) {
            if (*jt < minValue) {
                minValue = *jt;
                minIt = jt;
            }
        }
        std::iter_swap(minIt, it);
        sortedList = inputList;
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    // Sort the list using insertion sort
    std::cout << "Insertion sort: ";
    for (auto it = inputList.begin(); it != inputList.end(); ++it) {
        int value = *it;
        auto pos = std::prev(it);
        while (pos != inputList.begin() && *pos > value) {
            *pos = *std::next(pos);
            pos = std::prev(pos);
        }
        *pos = value;
        sortedList = inputList;
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    return 0;
}