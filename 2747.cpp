<<<<<<< HEAD
#include <iostream>
using namespace std;

int arr[45] = { 0, 1, };

int fibonacci(int n) {
	if (n == 0)return arr[0];
	else if (n == 1)return arr[1];
	else {
		for (int i = 2; i <= n; i++) {
			arr[i] = arr[i - 1] + arr[i - 2];
		}
		return arr[n];
	}
}

int main() {
	int x;
	cin >> x;
	fibonacci(x);
	printf("%d", arr[x]);
=======
#include <iostream>
using namespace std;

int arr[45] = { 0, 1, };

int fibonacci(int n) {
	if (n == 0)return arr[0];
	else if (n == 1)return arr[1];
	else {
		for (int i = 2; i <= n; i++) {
			arr[i] = arr[i - 1] + arr[i - 2];
		}
		return arr[n];
	}
}

int main() {
	int x;
	cin >> x;
	fibonacci(x);
	printf("%d", arr[x]);
>>>>>>> c163b3a9c7fbfa6c637a042e8c9a9274dc6f4f4f
}