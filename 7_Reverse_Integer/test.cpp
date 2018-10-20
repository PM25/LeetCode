#include "solution.h"
#include <iostream>
using namespace std;

const int testInput[] = {
    123,
    -123,
    1534236469,
    -1534236469,
    2147483647,
    -2147483648,
    0,
    3,
    -3
};

int main()
{
    int testInputLen = sizeof(testInput) / sizeof(testInput[0]);
    Solution pm;

    for(int iter(0); iter < testInputLen; ++iter){
        cout << "Input: " << testInput[iter] << endl;
        cout << "Output: " << pm.reverse(testInput[iter]) << endl;
        cout << "----------\n" << endl;
    }

    return 0;
}
