// EXTERNAL LIBRARIES
#include <omp.h>
#include "CStopWatch.h"
// INTERNAL LIBRARIES
#include <iostream>
#include <random>
#include <vector>
#include <ctime>
#include <fstream>
#include <string>


// FUNCTION INITIALIZATION
void countSort(std::vector<int>& a, int numThreads);
void fillVector(std::vector<int>& a, int size);
bool isSorted(std::vector<int>& a);


// MAIN
int main(){
    std::vector<int> my_vector;
    CStopWatch timer;
    std::ofstream outputFile("output.txt");


    for(int num_t = 1; num_t <= 12; num_t++) {
        omp_set_num_threads(num_t);
        for(int size = 10000; size <= 100000; size += 10000){
            fillVector(my_vector, size);

            timer.startTimer();

            countSort(my_vector, num_t);

            timer.stopTimer();

            if(!isSorted(my_vector)) {
                std::cout << "ERROR - NOT SORTED" << std::endl;
                exit(0);
            }

            std::cout << "Threads: " << num_t << ", Size: " << size <<", Time: " << timer.getElapsedTime() << std::endl;

            if (outputFile.is_open()) {
                outputFile << timer.getElapsedTime() << std::endl;
            }


            my_vector.clear();
        }
    }

    outputFile.close();

    return 0;
}


// FUNCTIONS
void countSort(std::vector<int>& a, int numThreads = 1){  
    std::vector<int> temp;
    int n, count;

    n = a.size();
    temp.resize(n);

    #pragma omp parallel for num_threads(numThreads) private(count)
    for(int i = 0; i < n; i++){
        count = 0;
        for(int j = 0; j < n; j++){
           if(a[j] < a[i])                { count++;}
           else if(a[j] == a[i] && j < i) { count++;}
        }
        temp[count] = a[i];
    }

    a = temp;
    temp.clear();
}

void fillVector(std::vector<int>& a, int size) {
    std::srand(std::time(0));

    for (int i = 0; i < size; ++i) {
        a.push_back(1 + std::rand() % 100);
    }
}

bool isSorted(std::vector<int>& a) {
    for (size_t i = 1; i < a.size(); i++) {
        if (a[i - 1] > a[i]) {
            return false;
        }
    }
    return true;

}