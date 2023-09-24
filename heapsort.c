#include <stdio.h>
int i;
void heapify(int a[], int n, int i)
{
int temp, left, right;
int larg = i;
left = (2 * i) + 1;
right = (2 * i) + 2;
if (left < n && a[left] > a[larg])
{
larg = left;
}
if (right < n && a[right] > a[larg])
{
larg = right;
}
if (larg != i)
{



temp = a[i];
a[i] = a[larg];
a[larg] = temp;
heapify(a, n, larg);
}
}
void heapsort(int a[], int n)
{
int temp;
for (i = n / 2 - 1; i >= 0; i--)
{
heapify(a, n, i);
}
for (i = n - 1; i >= 0; i--)
{
temp = a[0];
a[0] = a[i];
a[i] = temp;
heapify(a, i, 0);
}
}
void main()
{
int size;
printf("Enter the size of the array:");
scanf("%d", &size);
int a[size];
printf("Enter the elements:\n");
for (i = 0; i < size; i++)
{
scanf("%d", &a[i]);
}
heapsort(a, size);
printf("The Sorted Array is : ");
for (i = 0; i < size; i++)
{
printf(" %d ", a[i]);
}
}
