// Tristan Werden
// Pointer Homework pt 2
// Source used: https://www.geeksforgeeks.org/pointer-array-array-pointer/

#include <iostream>

using namespace std;

const int MAX = 5;

int loadArray(int limit, double *ptr);				// load up the array with #'s starting w/ an entered #.
void dispArray(double *ptr, int n);					// show but don't change
void reValue(double r, double *ptr, int n);			// multiply each n elements by r and update


int main(int argc, char *argv[]) {
	
	double properties[MAX];
	double *ptr = properties; //ptr = &arr[0], so (ptr + 1) = &arr[1]
	int end = loadArray(MAX, ptr); // changed size to end
	dispArray(ptr, end);

	cout << "Enter the revaluation factor: ";
	double factor;
	cin >> factor;

	reValue(factor, ptr, end);
	dispArray(ptr, end);
	
	cout <<  "Done!" << endl;
	
	return 0;
 	
}

int loadArray(int limit, double *ptr){

	
	for(int i = 0;i < limit; i++){
		cout << "enter an int number: ";
		cin >> *(ptr + i); //first loop is ptr + 0, 2nd loop is ptr + 1, etc thru limit
		cout << endl;
	}
	return limit;
}

void dispArray(double *ptr, int n) {
	cout << endl << endl;
	for(int i = 0;i < n; i++){
		cout << *(ptr + i) << ", ";
	}
}

void reValue(double r, double *ptr, int n){
	for(int i = 0;i < n; i++){
		*(ptr + i) = *(ptr + i) * r;
	}
}

