#include<iostream>
#include<random>
#include<chrono>
#include<ctime>

using namespace std;

int main(){
    double time_spent = 0.0; // tempo do sort
    double time_spent2 = 0.0; // tempo do search


    clock_t start = clock();
    /*
        chamada do sort
    */ 
    clock_t end = clock();

    time_spent += (double)(end - start) / CLOCKS_PER_SEC;

    cout << endl << " Tempo do Sort selecionado: " << time_spent << " segundos\n\n\n";

    clock_t start2 = clock();
    /*
        chamada dos searches
    */
    clock_t end2 = clock();

    time_spent2 += (double)(end2 - start2) / CLOCKS_PER_SEC;

    cout << " Tempo dos Searches: " << time_spent2 << " segundos\n\n\n";

    
}