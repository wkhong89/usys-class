#include <iostream>

double fib(int n);

int main(int argc, char *argv[])
{
	int n;
	std::cout << "=== this is a simple fibonacci program ===" << std::endl;
	if (argc == 2) {
			sscanf(argv[1], "%d", &n);
	} else {
			std::cout << "input an index number to get a value in fibonacci series: " ;
			std::cin >> n;

	}
	std::cout << n << "'s fib value: " << fib(n) << std::endl;

	return 0;
}

double fib(int n) 
{
	int last = 0;
	int cur = 1;
	int tmp;

	if (n < 2) return n;
	else {
		for (int i = 2; i <= n; i++) {
			tmp = cur;
			cur = cur + last;
			last = tmp;
		}

		return cur;
	}
}
