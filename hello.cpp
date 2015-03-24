// hello.cpp: Maggie Johnson
// Description: a program that prints the immortal saying "hello world"

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // print hello world 4 times on a line for 6 lines, where each is printed in a field of
    // 17 spaces, useing for loop for this
    for(int i = 0; i < 7; ++i)
    {
        for(int j = 0; j < 4; ++j)
	    cout << setw(17) << "Hello World! ";
        cout << endl;
    }
    return 0;
}
