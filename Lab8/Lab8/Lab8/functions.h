#ifndef fucntions
#define functions
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
void Task();

struct Student {
    std::string name;
    std::string surname;
    int32_t course;
    std::string group;
    int32_t grades[5];
};

Student* InputStudents(int32_t&, int32_t);
double CalculateAverage(const Student&);
double* InputNumbers(int32_t&, int32_t);
int32_t Partition(double arr[], int32_t, int32_t, bool);
int32_t CountFractionalDigits(double);
int32_t Partition(Student arr[], int32_t, int32_t, bool);
void SwapDouble(double*, double*);
void QuickSort(double arr[], int32_t, int32_t, bool);
void InsertionSort(double arr[], int32_t, bool);
void BubbleSort(double arr[], int32_t, bool);
void QsortByFractionalDigits(double arr[], int32_t);
void SelectionSort(double arr[], int32_t, bool);
void Merge(double arr[], int32_t, int32_t, int32_t, bool);
void MergeSort(double arr[], int32_t, int32_t, bool);
void SwapStudent(Student*, Student*);
void QuickSort(Student arr[], int32_t, int32_t, bool);
void OutputNumbers(double arr[], int32_t, int32_t);
void OutputStudents(Student arr[], int32_t, int32_t);
void SortNumbers(double*, int32_t, int32_t, int32_t);
void SortStudents(Student*, int32_t, int32_t);
void ProcessNumbers();
void ProcessStudents();
void Task();


#endif