#include <iostream>
#include <string>
using std::cout;
using std::string;

// Write the PrintStrings function here.
void PrintStrings(string s1, string s2)
{
    cout << s1 << "\n";
    cout << s2 << "\n"; 
}

int main() 
{
    string s1 = "C++ is ";
    string s2 = "super awesome.";
    
    // Uncomment the following line to call your function:
    PrintStrings(s1, s2);
}