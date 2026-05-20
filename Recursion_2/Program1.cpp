//Program to print name 5 times. Using recursion.
#include <iostream>
#include <string>
using namespace std;

void printing(string s)
{
    static int count = 5;
    if(count <= 0)
    {
        return;
    }
    cout << s << " ";
    count--;
    printing(s);
}

int main() {
    string s = "Neil";
    printing(s);
    return 0;
}