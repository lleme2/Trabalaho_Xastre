#include<iostream>
#include<random>
#include<chrono>
#include<ctime>

using namespace std;

void insertionSort(int arr[], int n) {
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}


int main(){

    int vet[] = {13,312,45,1,213,0,123,56,1,2,35,9};
    int size = sizeof(vet)/sizeof(int);

    insertionSort(vet, size);
}