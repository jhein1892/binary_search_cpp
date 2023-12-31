#include <iostream>
#include <cstdlib>

using namespace std;



// set up a function to randomly generate a sorted array of n length
auto generateArray(int length) -> int(*)[5]
{
    int array[5];
    srand((unsigned) time(NULL));
    int random = rand() % 100;
    for(int i = 0; i < length; ++i){
        array[i] = random;
        ++random;
    }
    return &array;
}

// Set up function takes sorted array, and finds number x


int main()
{
    std::cout << "Lets start a binary Search Algo\n";
    auto arrayPntr = generateArray(5);
    cout << arrayPntr[0] << endl;

    return 0;
}