#include <iostream>
#include <list>

using namespace std;

struct Person {
  string name;
  string first_name;
  int age;
};

bool compare_people(const Person& p1, const Person& p2) {
  if (p1.name < p2.name) {
    return true;
  } else if (p1.name == p2.name) {
    if (p1.first_name < p2.first_name) {
      return true;
    }
  }
  return false;
}

int main() {
  list<Person> list;

  string name, first_name;
  int age;
  while (true) {
    cout << "Enter the name: ";
    cin >> name;
    if (name == "") {
      break;
    }
    cout << "Enter the first name: ";
    cin >> first_name;
    cout << "Enter the age: ";
    cin >> age;

    Person person = {name, first_name, age};

    // Add the person to the list
    list.push_back(person);
  }

  // Sort the list
  list.sort(compare_people);

  // Display the sorted list
  for (auto& person : list) {
    cout << person.name << " " << person.first_name << " " << person.age << "\n";
  }

  return 0;
}
