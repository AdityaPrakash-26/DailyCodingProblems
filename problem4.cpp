#include <algorithm>
#include <array>
using namespace std;

int findLowestMissingPositive(int arr[]) {
    if (arr == nullptr || arr.length() < 2)
        return -1;

    for (int i = 0; i < arr.length(); ) {
        if (arr[i] <= 0 || arr[i] > arr.length() || arr[i] - 1 == i)
            i++;
        else
            swap(arr, i, arr[i] - 1);
    }

    for (int i = 0; i < arr.length; i++)
        if (arr[i] - 1 != i)
            return i + 1;

    return -1;
}

void swap(int arr[], int i, int j) {
    int tmp = arr[i];
    arr[i] = arr[j];
    arr[j] = tmp;
}