#include <iostream>
#include <cmath>

bool narcissistic(int num);

int main() {
	int result = narcissistic(371);

	std::cout << "Result: " << result << std::endl;
}

double Counter(int num) {
	double counter = 0;
	while (num > 0) {
		num = num / 10;
		counter++;
	}

	return counter;
}

bool narcissistic(int num) {
	int result = 0;
	int sum = 0;
	int power = 0;

	int counter = Counter(num);

	int iterator = num;
	while (iterator > 0) {
		result = iterator % 10;
		iterator = iterator / 10;
		sum = sum + pow(result, counter);
	}

	if (num == sum) {
		return true;
	}
	else {
		return false;
	}
}

