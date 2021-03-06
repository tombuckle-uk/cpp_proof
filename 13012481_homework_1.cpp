// 13012481_homework_1.cpp : Defines the entry point for the console application.
// Author: Thomas Buckle
// SN: 13012481
// Date: 03/11/2017
//todo add loading ability from text file

#include "stdafx.h"
#include <iostream>
#include <ctime>
#include <cstdio>
#include <chrono>
#include <thread>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;
using namespace std::chrono;
using namespace std::this_thread;
string typeOfTest;
vector<vector<int>> fileInUse;
//Universal Declarations
char ans,answer;
fstream test;
//declare files here
fstream file_10;
fstream file_50;
fstream file_100;
fstream file_500;
fstream file_1000;
fstream file_5000;
fstream file_10000;
fstream file_50000;
fstream file_100000;
fstream file_500000;
fstream file_1000000;
fstream results;
fstream results_10;
fstream results_50;
fstream results_100;
fstream results_500;
fstream results_1000;
fstream results_5000;
fstream results_10000;
fstream results_50000;
fstream results_100000;
fstream results_500000;
fstream results_1000000;
//end file declarations
vector <vector<int>> array_10;
vector <vector<int>> array_50;
vector <vector<int>> array_100;
vector <vector<int>> array_500;
vector <vector<int>> array_1000;
vector <vector<int>> array_5000;
vector <vector<int>> array_10000;
vector <vector<int>> array_50000;
vector <vector<int>> array_100000;
vector <vector<int>> array_500000;
vector <vector<int>> array_1000000;
vector<int> arr;
vector<string> FILENAMES;
vector<long> mergeresults;
vector<long> bubbleresults;
vector<long> shellresults;
vector<long> quickresults;
//helper functions for counting time taken
//receieved help with code from the following sources
// https://stackoverflow.com/questions/158585/how-do-you-add-a-timed-delay-to-a-c-program
// https://stackoverflow.com/questions/17032970/clear-data-inside-text-file-in-c
// http://mathbits.com/MathBits/CompSci/Arrays/Bubble.htm
// http://www.cplusplus.com/forum/general/127295/
// http://www.geeksforgeeks.org/bubble-sort/
// http://www.geeksforgeeks.org/shellsort/
auto time_now() {
	// Get current time with native precision
	auto now = system_clock::now();
	// Convert time_point to signed integral type
	auto integral_duration = now.time_since_epoch().count();
	// Convert signed integral type to time_point
	system_clock::time_point dt{ system_clock::duration{ integral_duration } };
	// test

	return dt;

}
void generate_10() {
	// 10 ints
	srand(time(NULL)); //make sure we seed our random number generator
	file_10.open("data_10.txt", fstream::out | std::ofstream::trunc);
	for (int y = 0; y < 5; y++) {
		array_10.push_back(std::vector<int>());
		for (int x = 0; x < 10; x++) {
			int myrand = rand() % 1000 + 1;
			file_10 << myrand << ",";
			array_10[y].push_back(myrand);	
		}
		file_10 << endl;
	}
	fstream test("file_10.txt", ios::in);
	FILENAMES.assign(1,"results_10.txt");
	file_10.close();
}
void generate_50() {
	// 50 ints
	srand(time(NULL)); //make sure we seed our random number generator
	file_50.open("data_50.txt", fstream::out | std::ofstream::trunc);
	for (int y = 0; y < 5; y++) {
		array_50.push_back(std::vector<int>());
		for (int x = 0; x < 50; x++) {
			int myrand = rand() % 1000 + 1;
			file_50 << myrand << ",";
			array_50[y].push_back(myrand);
		}
		file_50 << endl;
	}
	FILENAMES.assign(1, "results_50.txt");
	file_50.close();
}
void generate_100() {
	// 100 ints
	srand(time(NULL)); //make sure we seed our random number generator
	file_100.open("data_100.txt", fstream::out | std::ofstream::trunc);
	for (int y = 0; y < 5; y++) {
		array_100.push_back(std::vector<int>());
		for (int x = 0; x < 100; x++) {
			int myrand = rand() % 1000 + 1;
			file_100 << myrand << ",";
			array_100[y].push_back(myrand);
		}
		file_100 << endl;
	}
	FILENAMES.assign(1, "results_100.txt");
	file_100.close();
}
void generate_500() {
	// 500 ints
	srand(time(NULL)); //make sure we seed our random number generator
	file_500.open("data_500.txt", fstream::out | std::ofstream::trunc);
	for (int y = 0; y < 5; y++) {
		array_500.push_back(std::vector<int>());
		for (int x = 0; x < 500; x++) {
			int myrand = rand() % 1000 + 1;
			file_500 << myrand << ",";
			array_500[y].push_back(myrand);
		}
		file_500 << endl;
	}
	FILENAMES.assign(1, "results_500.txt");
	file_500.close();
}
void generate_1000() {
	// 1000 ints
	srand(time(NULL)); //make sure we seed our random number generator
	file_1000.open("data_1000.txt", fstream::out | std::ofstream::trunc);
	for (int y = 0; y < 5; y++) {
		array_1000.push_back(std::vector<int>());
		for (int x = 0; x < 1000; x++) {
			int myrand = rand() % 1000 + 1;
			file_1000 << myrand << ",";
			array_1000[y].push_back(myrand);
		}
		file_1000 << endl;
	}
	FILENAMES.assign(1, "results_1000.txt");
	file_1000.close();
}
void generate_5000() {
	// 5000 ints
	srand(time(NULL)); //make sure we seed our random number generator
	file_5000.open("data_5000.txt", fstream::out | std::ofstream::trunc);
	for (int y = 0; y < 5; y++) {
		array_5000.push_back(std::vector<int>());
		for (int x = 0; x < 5000; x++) {
			int myrand = rand() % 1000 + 1;
			file_5000 << myrand << ",";
			array_5000[y].push_back(myrand);
		}
		file_5000 << endl;
	}
	FILENAMES.assign(1, "results_5000.txt");
	file_5000.close();
}
void generate_10000() {
	// 10000 ints
	srand(time(NULL)); //make sure we seed our random number generator;
	file_10000.open("data_10000.txt", fstream::out | std::ofstream::trunc);
	for (int y = 0; y < 5; y++) {
		array_10000.push_back(std::vector<int>());
		for (int x = 0; x < 10000; x++) {
			int myrand = rand() % 1000 + 1;
			file_10000 << myrand << ",";
			array_10000[y].push_back(myrand);
		}
		file_10000 << endl;
	}
	FILENAMES.assign(1, "results_10000.txt");
	file_10000.close();
}
void generate_50000() {
	// 50000 ints
	srand(time(NULL)); //make sure we seed our random number generator
	file_50000.open("data_50000.txt", fstream::out | std::ofstream::trunc);
	for (int y = 0; y < 5; y++) {
		array_50000.push_back(std::vector<int>());
		for (int x = 0; x < 50000; x++) {
			int myrand = rand() % 1000 + 1;
			file_50000 << myrand << ",";
			array_50000[y].push_back(myrand);
		}
		file_50000 << endl;
	}
	FILENAMES.assign(1, "results_50000.txt");
	file_50000.close();
}
void generate_100000() {
	// 100000 ints
	srand(time(NULL)); //make sure we seed our random number generator
	file_100000.open("data_100000.txt", fstream::out | std::ofstream::trunc);
	for (int y = 0; y < 5; y++) {
		array_100000.push_back(std::vector<int>());
		for (int x = 0; x < 100000; x++) {
			int myrand = rand() % 1000 + 1;
			file_100000 << myrand << ",";
			array_100000[y].push_back(myrand);
		}
		file_100000 << endl;
	}
	FILENAMES.assign(1, "results_100000.txt");
	file_100000.close();
}
void generate_500000() {
	// 500000 ints
	srand(time(NULL)); //make sure we seed our random number generator
	file_500000.open("data_500000.txt", fstream::out | std::ofstream::trunc);
	for (int y = 0; y < 5; y++) {
		array_500000.push_back(std::vector<int>());
		for (int x = 0; x < 500000; x++) {
			int myrand = rand() % 1000 + 1;
			file_500000 << myrand << ",";
			array_500000[y].push_back(myrand);
		}
		file_500000 << endl;
	}
	FILENAMES.assign(1, "results_500000.txt");
	file_500000.close();
}
void generate_1000000() {
	// 1000000 ints
	srand(time(NULL)); //make sure we seed our random number generator
	file_1000000.open("data_1000000.txt", fstream::out | std::ofstream::trunc);
	for (int y = 0; y < 5; y++) {
		array_1000000.push_back(std::vector<int>());
		for (int x = 0; x < 1000000; x++) {
			int myrand = rand() % 1000 + 1;
			file_1000000 << myrand << ",";
			array_1000000[y].push_back(myrand);
		}
		file_1000000 << endl;
	}
	FILENAMES.assign(1, "results_1000000.txt");
	file_1000000.close(); //Close fstream file connection
}
void writeResults(vector<long> val) {
	system("CLS");
	cout << "writing results..." << endl;
	results.open(FILENAMES[0], ios::out | std::ios::trunc);
	results.close();
	results.open(FILENAMES[0], std::ios::app);
	results << typeOfTest.c_str() << endl;
	for (std::vector<long>::const_iterator i = val.begin(); i != val.end(); ++i) {
		results << *i << endl;
	}
	results.close();
}

//Using Insertion Sorting Algorythm sort Vector<int> specified in main()
void insertion_sort(vector<vector<int>> arr) {
	system("CLS");
	vector<long> result;
	//Main Sorting Alg
	for (int i = 0; i < 5; i++) { //loop through 5 sets of data
		auto start = time_now();// Get current system time
		int test = 0;
		for (size_t x = 0; x < arr[i].size(); x++) { // loop through each value in set
			int j = x;
			int temp;
			while (j > 0 && arr[i].at(j) < arr[i].at(j - 1)) {
				temp = arr[i].at(j);
				arr[i].at(j) = arr[i].at(j - 1);
				arr[i].at(j - 1) = temp;
				j--;
			}
		}
		auto done = time_now();
		result.push_back(std::chrono::duration_cast<std::chrono::nanoseconds>(done - start).count());
	}
	writeResults(result);
	cout << endl;
}

void view_results() {
	system("CLS");
	cout << "reading results..." << endl;
	results.open(FILENAMES[0]);
	string a;
	string b;
	long average = 0;
	
	while ( getline (results, a) ) {
		cout << a << " NS" << endl;
		stringstream intstr(a);
		long x = 0;
		intstr >> x;
		average = average + x;

	}
	average = average / 5;
	cout << "Average is " << average;
	results.close();
	system("pause");
}

void merge(int list[], int lowerBound, int upperBound, int mid);
void mergeSort(int list[], int lowerBound, int upperBound)
{
	int mid;

	if (upperBound > lowerBound)
	{
		mid = (lowerBound + upperBound) / 2;
		mergeSort(list, lowerBound, mid);
		mergeSort(list, mid + 1, upperBound);
		merge(list, lowerBound, upperBound, mid);
	}
}
void merge(int list[], int lowerBound, int upperBound, int mid)
{
	int* leftArray = NULL;
	int* rightArray = NULL;
	int i, j, k;
	int n1 = mid - lowerBound + 1;
	int n2 = upperBound - mid;
	leftArray = new int[n1];
	rightArray = new int[n2];
	for (i = 0; i < n1; i++)
		leftArray[i] = list[lowerBound + i];
	for (j = 0; j < n2; j++)
		rightArray[j] = list[mid + 1 + j];
	i = 0;
	j = 0;
	k = lowerBound;
	while (i < n1 && j < n2)
	{
		if (leftArray[i] <= rightArray[j])
		{
			list[k] = leftArray[i];
			i++;
		}
		else
		{
			list[k] = rightArray[j];
			j++;
		}

		k++;
	}
	while (i < n1)
	{
		list[k] = leftArray[i];
		i++;
		k++;
	}
	while (j < n2)
	{
		list[k] = rightArray[j];
		j++;
		k++;
	}
	delete[] leftArray;
	delete[] rightArray;
}

void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}


void bubbleSort(int arr[], int n)
{
	int i, j;
	for (i = 0; i < n - 1; i++)

		for (j = 0; j < n - i - 1; j++)
			if (arr[j] > arr[j + 1])
				swap(&arr[j], &arr[j + 1]);
}

void printArray(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("n");
}


int shellSort(int arr[], int n)
{

	for (int gap = n / 2; gap > 0; gap /= 2)
	{

		for (int i = gap; i < n; i += 1)
		{

			int temp = arr[i];

			int j;
			for (j = i; j >= gap && arr[j - gap] > temp; j -= gap)
				arr[j] = arr[j - gap];

			arr[j] = temp;
		}
	}
	return 0;
}


int partition(int arr[], int low, int high)
{
	int pivot = arr[high];
	int i = (low - 1);

	for (int j = low; j <= high - 1; j++)
	{

		if (arr[j] <= pivot)
		{
			i++;
			swap(&arr[i], &arr[j]);
		}
	}
	swap(&arr[i + 1], &arr[high]);
	return (i + 1);
}


void quickSort(int arr[], int low, int high)
{
	if (low < high)
	{
		
		int pi = partition(arr, low, high);
		quickSort(arr, low, pi - 1);
		quickSort(arr, pi + 1, high);
	}
}
int main()
{
	system("CLS");
	

	//menu system
	do
	{
		system("CLS");
		cout << "Choose from the following options: \n" << endl; 
		
		cout << "Please generate data files first (option 7) if a test is selected without picking test data the program WILL crash \n";
		cout << "Data files and Test results (time in nanoseconds) are saved to root directory of program \n";
		cout << "WARNING: Using the larger data sets may result in long test times depending on your system \n";
		cout << "Warning: Results will wipe based on data sets used, save your data after changing test data every time \n\n";
		cout << "0. Quick Sort" << endl;
		cout << "1. Insertion Sort" << endl;
		cout << "2. Merge Sort" << endl;
		cout << "3. Bubble Sort" << endl;
		cout << "4. Shell Sort" << endl;
		cout << "5. Exit" << endl;
		cout << "6. View Results" << endl;
		cout << "7. Select Test Data" << endl;
		cin >> ans;
		switch (ans) {
		case ('0'): {
		system("CLS");
			cout << "5- Quick Sort" << endl;
			typeOfTest = "Quicksort";

			for (int x = 0; x < 5; x++) {
				vector<int>v = fileInUse[x];
				int *arr = v.data();
				auto start = time_now();
				quickSort(arr, 0, v.size() - 1);
				auto done = time_now();
				quickresults.push_back(std::chrono::duration_cast<std::chrono::nanoseconds>(done - start).count());
			}

			writeResults(quickresults);
			view_results();
			break;
		}
			


		case ('1'):
			cout << "1- Insertion Sort" << endl;
			typeOfTest = "insertion";
			insertion_sort(fileInUse);
			view_results();
			break;
		case ('2'):
			
			cout << "2- Merge Sort" << endl;
			typeOfTest = "merge";
				ios::sync_with_stdio(false);
				for (int x = 0; x < 5; x++) {

					vector<int>v = fileInUse[x];
					int *arr = v.data();
					auto start = time_now();
					mergeSort(arr, 0, 9);
					auto done = time_now();
					mergeresults.push_back(std::chrono::duration_cast<std::chrono::nanoseconds>(done - start).count());
					
				}
			writeResults(mergeresults);
			view_results();
			
			break;
		case ('3'):{
			typeOfTest = "bubble";
			ios::sync_with_stdio(false);
			
			for (int x = 0; x < 5; x++) {
				vector<int>v = fileInUse[x];
				int *arr = v.data();
				auto start = time_now();

				bubbleSort(arr, v.size());
				auto done = time_now();
				bubbleresults.push_back(std::chrono::duration_cast<std::chrono::nanoseconds>(done - start).count());
				
			}
			writeResults(bubbleresults);
			view_results();
			
			break; }
			
			
		case ('4'): {
			cout << "4- Shellsort Algorithm" << endl;
			typeOfTest = "Shellsort";
			ios::sync_with_stdio(false);
			


			for (int x = 0; x < 5; x++) {
				vector<int>v = fileInUse[x];
				int *arr = v.data();
				auto start = time_now();
				shellSort(arr, v.size());
				auto done = time_now();
				shellresults.push_back(std::chrono::duration_cast<std::chrono::nanoseconds>(done - start).count());

			}
			writeResults(shellresults);
			view_results();
			break;
		}

			
		case ('5'): {
			
			cout << "5- Exit" << endl;
			return(0);
			break;
		}
			
		case ('6'): {
			cout << "6 View Results WIP" << endl;
			view_results();
			break;

		}
		

		case('7'): {
			system("CLS");
			cout << "choose test data sets from the following \n";
			cout << "0- Test Data with 10 values" << endl;
			cout << "1- Test Data with 50 values" << endl;
			cout << "2- Test Data with 100 values" << endl;
			cout << "3- Test Data with 500 values" << endl;
			cout << "4- Test Data with 1000 values" << endl;
			cout << "5- Test Data with 5000 values" << endl;
			cout << "6- Test Data with 10000 values" << endl;
			cout << "7- Test Data with 50000 values" << endl;
			cout << "8- Test Data with 100000 values" << endl;
			cout << "9- Test Data with 500000 values" << endl;
			cout << "'-'- Test Data with 1000000 values" << endl;
			cout << "11- Test Data with ALL values" << endl; //TODO TEST ALL
			cin >> answer;
			switch (answer) {
			case ('0'):
				generate_10();
				fileInUse = array_10;
				break;
			case ('1'):
				generate_50();
				fileInUse = array_50;
				break;
			case ('2'):
				generate_100();
				fileInUse = array_100;
				break;
			case ('3'):
				generate_500();
				fileInUse = array_500;
				break;
			case ('4'):
				generate_1000();
				fileInUse = array_1000;
				break;
			case ('5'):
				generate_5000();
				fileInUse = array_5000;
				break;
			case ('6'):
				generate_10000();
				fileInUse = array_10000;
				break;
			case ('7'):
				generate_50000();
				fileInUse = array_50000;
				break;
			case ('8'):
				generate_100000();
				fileInUse = array_100000;
				break;
			case ('9'):
				generate_500000();
				fileInUse = array_500000;
				break;
			case ('-'):
				generate_1000000();
				fileInUse = array_1000000;
				break;
			}
			break;
		}

		}
	
	}
	 while ((ans != '5'));
	//end menu system
	
	
}





void merge_sort() {

}

void bubble_sort() {

}

void shell_sort() {

}

void quick_sort() {

}

