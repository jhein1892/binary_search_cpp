#include <iostream>
#include <cstdlib>

using namespace std;



// set up a function to randomly generate a sorted array of n length
void generateArray(int* arr)
{
    srand((unsigned) time(NULL));
    int random = rand() % 100;
    for(int i = 0; i < 5; ++i){
        *arr = random;
        ++arr;
        ++random;
    };
}

// Set up function takes sorted array, and finds number x


int main()
{
    std::cout << "Lets start a binary Search Algo\n";
    int array[5];
    generateArray(array);
    cout << "After" << endl;
    for(int i = 0; i < 5; ++i){
        cout << array[i] << endl;
    }
    return 0;
}