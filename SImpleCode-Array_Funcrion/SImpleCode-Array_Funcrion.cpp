#include <iostream>
#include <ctime>

void numberToArr(int arr[], const int SIZE);
void printNumber(int arr[], const int SIZE);

int main()
{
    std::srand(std::time(nullptr)); // Initialize random seed

    const int SIZE = 10;
    int arr[SIZE];

    numberToArr(arr, SIZE);
    printNumber(arr, SIZE);

}

void numberToArr(int arr[], const int SIZE)
{
    for (int i = 0; i < SIZE; i++)
    {
        arr[i] = rand() % 10;
        //std::cin >> arr[i];
    }
}

void printNumber(int arr[], const int SIZE)
{
    for (int i = 0; i < SIZE; i++)
    {
        std::cout << arr[i] << " ";
    }
}





/*
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

void numberToArr(std::vector<int>& arr, const int SIZE)
{
    arr.resize(SIZE);
    for (int i = 0; i < SIZE; i++)
    {
        arr[i] = rand() % 10;
        //std::cin >> arr[i];
    }
}

void printNumber(const std::vector<int>& arr, const int SIZE)
{
    for (int i = 0; i < SIZE; i++)
    {
        std::cout << arr[i] << " ";
    }
}

int main()
{
    std::srand(std::time(nullptr)); // Initialize random seed

    const int SIZE = 10;
    std::vector<int> arr(SIZE);

    numberToArr(arr, SIZE);
    printNumber(arr, SIZE);

    return 0;
}
*/
