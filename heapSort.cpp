<<<<<<< HEAD
#include <iostream>
using namespace std;

int n, heap[10001];

void heapify(int i) {
	int cur = 2 * i;
	if (cur < n && heap[cur] < heap[cur + 1])cur++;
	if (heap[i] < heap[cur]) {
		swap(heap[i], heap[cur]);
		if (cur <= n / 2)heapify(cur);
	}
}

void heapSort(int i) {
	swap(heap[1], heap[i]);

	int root = 1;
	int cur = 2;

	while (cur / 2 < i) {
		cur = 2 * root;
		if (cur < i - 1 && heap[cur] < heap[cur + 1])cur++;
		if (cur < i && heap[root] < heap[cur])swap(heap[root], heap[cur]);
		root = cur;
	}
}

int main()
{
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++)
		scanf_s("%d", &heap[i]);

	for (int i = n / 2; i > 0; i--) // 최초 heap 생성
		heapify(i);

	for (int i = n; i > 0; i--) // heap 정렬
		heapSort(i);

	for (int i = 0; i <= 10000; i++) { // 출력
		printf("%d ", heap[i]);
	}
=======
#include <iostream>
using namespace std;

int n, heap[10001];

void heapify(int i) {
	int cur = 2 * i;
	if (cur < n && heap[cur] < heap[cur + 1])cur++;
	if (heap[i] < heap[cur]) {
		swap(heap[i], heap[cur]);
		if (cur <= n / 2)heapify(cur);
	}
}

void heapSort(int i) {
	swap(heap[1], heap[i]);

	int root = 1;
	int cur = 2;

	while (cur / 2 < i) {
		cur = 2 * root;
		if (cur < i - 1 && heap[cur] < heap[cur + 1])cur++;
		if (cur < i && heap[root] < heap[cur])swap(heap[root], heap[cur]);
		root = cur;
	}
}

int main()
{
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++)
		scanf_s("%d", &heap[i]);

	for (int i = n / 2; i > 0; i--) // 최초 heap 생성
		heapify(i);

	for (int i = n; i > 0; i--) // heap 정렬
		heapSort(i);

	for (int i = 0; i <= 10000; i++) { // 출력
		printf("%d ", heap[i]);
	}
>>>>>>> c163b3a9c7fbfa6c637a042e8c9a9274dc6f4f4f
}