/*

This program for fining the missing element of
the given array

example for :
    input : [1,2,4,5,6]
    output : 3

*/

#include <stdio.h>

int getMissingNo(int a[], int n)
{
	int i, total;
	total = (n + 1) * (n + 2) / 2;
	for (i = 0; i < n; i++)
		total -= a[i];
	return total;
}

int main()
{
	int a[] = {1,2,4,5,6,7};
	int miss = getMissingNo(a, 6);
	printf("%d", miss);
}
