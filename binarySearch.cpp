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

// As an added feature I could require the user to input a size for the array
int main()
{
    // Initialize array
    int array[12];
    
    // Fill in array
    generateArray(array);

    // Find mid point
    int mid = 6;

    cout << "Here is my the random sorted array: ";
    for(int i = 0; i < 12; ++i){
        cout << array[i] << " ";
    }
    cout << "\n";

    // Generate random goal number
    srand((unsigned) time(NULL));
    int random = array[0] + (rand() % 12);

    int bottom = 0;
    int top = 11;
    while(array[mid] != random)
    {
        if(array[mid] > random){ top = mid - 1; }
        else{ bottom = mid + 1; }

        mid = (bottom + top) / 2;
        if(bottom == top) break;
    }    

    if(array[mid] == random){
        cout << "Number " << random << " is at index " << mid << endl;
    } else {
        cout <<"Something is wrong" << endl;
    }
    
    return 0;
}