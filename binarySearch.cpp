#include <iostream>
#include <cstdlib>

using namespace std;



// set up a function to randomly generate a sorted array of n length
void generateArray(int* arr)
{
    // Generate radom start number
    srand((unsigned) time(NULL));
    int random = rand() % 100;

    // Input numbers into array
    for(int i = 0; i < 12; ++i)
    {
        *arr = random;
        ++arr;
        ++random;
    };
}

// Set up function takes sorted array, and finds number x
// int searchArray(int* arr)
// {

// }

int main()
{
    std::cout << "Lets start a binary Search Algo\n";
    // Initialize array
    int array[12];
    
    // Fill in array
    generateArray(array);
    cout << "After" << endl;

    // Find mid point
    int mid = array[6];
    cout << "Mid point: " << mid << endl;

    // Generate random goal number
    srand((unsigned) time(NULL));
    int random = array[0] + (rand() % 12);

    



    for(int i = 0; i < 12; ++i){
        cout << array[i] << endl;
    }
    return 0;
}