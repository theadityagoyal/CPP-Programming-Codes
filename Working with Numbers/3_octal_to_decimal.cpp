#include <iostream>
using namespace std;
 
int main()
{
  string binaryNumber;
    cin >> binaryNumber;
  
    // format stoi(binary_in_string_format, 0, base_value)
    cout << stoi(binaryNumber, 0, 8);
 
    return 0;
}
