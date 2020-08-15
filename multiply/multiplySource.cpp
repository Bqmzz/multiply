#include<iostream>
using namespace std;
void multiply(int number)
{
	int sum = 0;
	for (int x = 0; x < number; x++) {
		if (x % 2 == 0) {
			sum = sum + x;
		}
		if (x % 3 == 0) {
			sum = sum + x;
		}
		if (x % 5 == 0) {
			sum = sum + x;
		}
		else if (x % 7 == 0) {
			sum = sum + x;
		}
	}
	cout << "Sum is " << sum;
}
int main() {
	int number = 10;
	multiply(number);
}