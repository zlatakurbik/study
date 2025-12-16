#include <cmath>
#include <iostream>


void generate_output_and_average(float arr[], const int size) {
    double average = 0;
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % size; 
        std::cout << arr[i] << ' ';
        average += arr[i];  
    }
    std::cout << std::endl;
	average /= size; 
	std::cout << "Среднее значение = " << average << std::endl;
}
int main(){ 
	const int size = 10;
	int arr[size];
	
	for (int i = 0; i < 3; i++) {
		std::cout << "Последовательность номер " << i << std::endl;
		generate_output_and_average(arr, size);
	}

    return 0;
}
