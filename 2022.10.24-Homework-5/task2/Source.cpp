#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int ma = -1000;
	int index = 0;
	int L = 0;
	int R = 0;

	scanf_s("%d", &n);

	int* a = new int[n] {0};

	for (int i = 0; i < n; ++i)
	{
		scanf_s("%d", &a[i]);
	}

	scanf_s("%d", &L);
	scanf_s("%d", &R);

	for (int i = L - 1; i < R; ++i)
	{
		if (a[i] > ma)
		{
			ma = a[i];
			index = ++i;
		}
	}

	std::cout << ma << " " << index;

	free(a);

	return EXIT_SUCCESS;
}