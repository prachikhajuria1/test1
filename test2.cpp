#include <iostream>
#include <list>
#include<limits>
using namespace std;
int main() {
// Create a list of integers
list<int> numbers;
int num, count;
cout << "Enter  number of elements: \n";
cin >> count;
cout << "Enter elements:\n";
for (int i = 0; i < count; i++) {
cin >> num;
numbers.push_back(num);
}
// Check if the list is empty
if (numbers.empty()) {
cout << "The list is empty." << endl;
return 0;
}
// Find the maximum element
int max_element = numeric_limits<int>::min();
for (int num : numbers) {
if (num > max_element) {
max_element = num;
}
}
cout << "The list contains: ";
for (int num : numbers) {
cout << num << " ";
  }
cout << endl;
// Display the maximum element
cout << "The maximum element is: " << max_element << endl;
return 0;
}

















