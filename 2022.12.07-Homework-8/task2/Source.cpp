#include<iostream>

int phi(int n)
{
	if (n == 1 || n == 0)
	{
		return 1;
	}

	else
	{
		return phi(n - 1) + phi(n - 2);
	}
}

int main(int argc, char* argv[])
{
	int n = 0;

	scanf_s("%d", &n);

	std::cout << phi(n);

	return EXIT_SUCCESS;
}