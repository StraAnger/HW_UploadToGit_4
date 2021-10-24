#include <iostream>
using namespace std;

//II.����������� ��������� ������� :

//1. �������, ������� ��������� ����� a � ������� n
long long degreeFunction(int inputNumber, int degreeNumber) {
	long long result = 1;
	for (int i = 1; i <= degreeNumber; ++i) {
		result *= inputNumber;
	}

	return result;
}

//2. �������, ������� ��������� ��������� ����� n

long long factorialFunction(int inputNumber) {
	long long counter = 1;
	for (int factorial = 1; factorial <= inputNumber; ++factorial) {
		counter *= factorial;
	}

	return counter;
}

//3. �������, ������� ��������� ����� ���� ������������� ������ ����� n

int summOfDigits(int inputNumber) {
	int countDigits = 0;
	while (inputNumber / 10 != 0) {
		inputNumber = inputNumber / 10;
		++countDigits;
	}
	return countDigits + 1;
}
//4. �������, ������� ��������� �������� �� �������� ����� n �����������
int isPolyndrome(int inputNumber) {
	bool result = true;
	int countDigits = 0;
	int lastDigit;
	int firstDigit;
	while (inputNumber / 10 != 0) {
		inputNumber = inputNumber / 10;
		++countDigits;
	}
	++countDigits;

	for (int i = pow(10, countDigits); i >= 1; i /= 10) {
		lastDigit = (inputNumber % (10 * i)) / i;
		firstDigit = (inputNumber % (10 * i)) / i; //��� � �� ����� ���������� � ���������� � ������ ����� ����� � ������ ������ �����.
		if (lastDigit != firstDigit) {
			result = false;
			break;
		}
	}

	return result;
}
//5. �������, ������������ ��� ����� �����
int summFunction(int inputNumber1, int inputNumber2) {
	return inputNumber1 + inputNumber2;
}
//6. �������, ������������ �������� �� ����� �������, �� ���� ������������ true, ���� ����� �������, ����� - false
int isSimple(int inputNumber) {
	bool result = true;

	for (int i = 2; i < inputNumber; ++i) {
		if (inputNumber % i == 0) {
			result = false;
			break;
		}
	}

	return result;
}
//7. �������, ������������ �������� �� ����� ������, �� ���� ������������ true, ���� ����� ������, ����� - false
int isEven(int inputNumber) {
	bool result = false;

	if (inputNumber % 2 == 0) {
		result = true;
	}

	return result;
}

int main() {
	int a, b, n;
	cout << "Enter a and n:";
	cin >> a >> n;
	cout << a << " in " << n << " degree is: " << degreeFunction(a, n) << endl;
	cout << "Enter n for fatorial: ";
	cin >> n;
	cout << "Factorial of " << n << " is: " << factorialFunction(n) << endl;
	cout << "Enter a and b for sum: ";
	cin >> a >> b;
	cout << "Summ of " << a << " and " << b << " = " << summFunction(a, b) << endl;

	cout << "Enter a for digits number: ";
	cin >> a;
	cout << "Number of digits: " << summOfDigits(a) << endl;

	cout << "Enter a for polyndrome: ";
	cin >> a;
	cout << "Is it polindrome? " << isPolyndrome(a) << endl;


	cout << "Input number to test for simplness:";
	cin >> n;
	cout << "Is " << n << " simple?" << " " << isSimple(n) << endl;

	cout << "Input number to test for evenness:" << endl;
	cin >> n;
	cout << "Is " << n << " even?" << " " << isEven(n) << endl;





	return 0;
}