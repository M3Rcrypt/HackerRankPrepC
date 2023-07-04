#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;

float calculateArea(triangle tr){
    float p, area;
    p = (tr.a + tr.b + tr.c) / 2.0;
    area = pow((p * (p-tr.a) * (p-tr.b) * (p-tr.c)), 0.5);
    return area;
}

void swap(triangle* tr, triangle* fr)
{
    triangle temp;
    temp = *tr;
    *tr = *fr;
    *fr = temp;
}

void sort_by_area(triangle* tr, int n) {
	int i, j;
    int swapped;
    for (i = 0; i < n - 1; i++) {
        swapped = 0;
        for (j = 0; j < n - i - 1; j++) {
            if (calculateArea(tr[j]) > calculateArea(tr[j + 1])) {
                swap(&tr[j], &tr[j + 1]);
                swapped = 1;
            }
        }
  
        if (swapped == 0)
            break;
    }
}

int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}