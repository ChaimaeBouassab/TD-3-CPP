#include <iostream>
#include <set>
#include <vector>
#include <list>
#include <iterator>

using namespace std; 

set<int> createSet() {
    set<int> intSet;
    for (int i = 1; i <= 100; i++) {
        intSet.insert(i);
    }
    return intSet;
}

// 2. Write a function to check if a value is present in a set
bool searchValueInSet(const set<int>& intSet, int value) {
    return intSet.find(value) != intSet.end();
}

// 3. Modify the function to accept iterators
template <typename InputIterator, typename T>
bool searchValueInRange(InputIterator begin, InputIterator end, const T& value) {
    while (begin != end) {
        if (*begin == value) {
            return true;
        }
        ++begin;
    }
    return false;
}

int main() {
    set<int> intSet = createSet();
    vector<string> stringVector = {"apple", "banana", "cherry", "date"};
    list<int> intList = {10, 20, 30, 40, 50};
    float floatArray[] = {1.5, 2.5, 3.5, 4.5, 5.5};

    // Example usage of the searchValueInSet function with set<int>
    int valueToSearch = 42;
    bool foundInSet = searchValueInSet(intSet, valueToSearch);
    cout << "Value " << valueToSearch << " is " << (foundInSet ? "found" : "not found") << " in the set." << endl;

    // Example usage of the searchValueInRange function with vector<string>
    string searchString = "banana";
    bool foundInVector = searchValueInRange(stringVector.begin(), stringVector.end(), searchString);
    cout << "Value " << searchString << " is " << (foundInVector ? "found" : "not found") << " in the vector." << endl;

    // Example usage of the searchValueInRange function with list<int>
    int searchInt = 30;
    bool foundInList = searchValueInRange(intList.begin(), intList.end(), searchInt);
    cout << "Value " << searchInt << " is " << (foundInList ? "found" : "not found") << " in the list." << endl;

    // Example usage of the searchValueInRange function with a classic array of floats
    float searchFloat = 3.5;
    bool foundInArray = searchValueInRange(begin(floatArray), end(floatArray), searchFloat);
    cout << "Value " << searchFloat << " is " << (foundInArray ? "found" : "not found") << " in the array." << endl;

    return 0;
}
