#include<iostream>
#include<random>
#include<chrono>
#include<ctime>

using namespace std;

void CriaVetRand (int* vet, int size) {

    random_device rd;
    uniform_int_distribution<int> distNUM(20, 2000000);

    for(int i = 0; i < size;i++){
        vet[i] = distNUM(rd);
    }
}

void PrintArr (int Arr[], int size) {
    for (int i=0; i<size; i++) {
        cout << Arr[i] << " ";
    }
    cout << endl;
}

int main(){
    random_device rd;
    uniform_int_distribution<int> distTAM(10000, 1000000);

    int size = distTAM(rd);
    int* vet = new int[size];

}
