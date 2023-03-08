#include<iostream>
#include<random>
#include<chrono>
#include<ctime>

using namespace std;

bool Linear_Search (int* vet, int size, int num) {

    for(int i=0; i<size; i++){
        if(vet[i] == num){
            return true;
        }
    }
    return false;
}

bool BinarySearch(int* vet, int pointer, int size, int num) {

    int mid = (pointer+size)/2;

    if(size >= pointer){
        if(vet[mid] == num)
            return true;
        if(vet[mid] < num)
            return BinarySearch(vet, mid+1, size, num);
        if(vet[mid] > num)
            return BinarySearch(vet, pointer, mid - 1, num);
    }
    return false;
}

int main(){
    int vet[] = {1,2,3,5,678,312,132,456};
    int size = sizeof(vet)/sizeof(int);

    cout << BinarySearch(vet, 0, size, 1) << endl;
    cout << Linear_Search(vet, size, 11);

}