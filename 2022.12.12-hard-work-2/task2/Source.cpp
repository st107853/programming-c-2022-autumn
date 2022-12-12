#include<iostream>

int* f(int a, int b, int* arr)
{
	if (a*2 >= b)
	{
		return arr;
	}

	else
	{
		int c = arr[a];
		arr[a] = arr[b - a];
		arr[b - a] = c;

		return f(++a, b, arr);
	}
}
int main(int argc, char* argv[])
{
	int n = 0;

	scanf_s("%d", &n);

	int* a = new int[n] {0};

	for (int i = 0; i < n; ++i)
	{
		scanf_s("%d", &a[i]);
	}

	a = f(0, n-1, a);

	for (int i = 0; i < n; ++i)
	{
		std::cout << a[i] << " ";
	}

	delete[] a;

	return EXIT_SUCCESS;
}