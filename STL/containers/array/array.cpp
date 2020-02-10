#include<iostream>
#include<array>
using namespace std;

template<typename T>
void dutch_flag_sort(T arr[], int size, T midVal) {
  int i = 0, j = 0;
  int n = size - 1;

  while (j <= n) {
    if (arr[j] < midVal) {
      T temp = arr[j];
      arr[j] = arr[i];
      arr[i] = temp;
      i++;
      j++;
    }
    else if (arr[j] > midVal) {
      T temp = arr[j];
      arr[j] = arr[n];
      arr[n] = temp;
      n--;
    }
    else {
      j++;
    }
  }
}

int main(int argc, char** argv) {
	
	int numbers[20] = {0, 1, 2, 0, 0, 2, 2, 1, 1, 0, 1, 2, 2, 1, 0, 0, 0,0, 1, 1};
	array<int, 20> numbers2 = {0, 1, 2, 0, 0, 2, 2, 1, 1, 0, 1, 2, 2, 1, 0, 0, 0,0, 1, 1};
	
	dutch_flag_sort(numbers, 20, 1);
	dutch_flag_sort(numbers2.data(), numbers2.size(), 1);
	dutch_flag_sort(&numbers2[0], numbers2.size(), 2);
	
	cout << "numbers: ";
	for (int i : numbers) {
		cout << i << " ";
	}

	cout << endl;
	cout << "numbers2: ";
	for (int i : numbers2) {
		cout << i << " ";
	}

	cout << endl;

	return 0;
}
