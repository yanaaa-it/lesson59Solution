#include "util.h"
#include "logic.h"


int main() {
	int size;

	cout << "Input size of array: ";
	cin >> size;

	int* array = creat(size);

	if (array == NULL) {
		return -1;
	}

	init_random(array, size, -20, 50);

	print("array " + convert(array, size) + "\n");

	int count = count_local_minimums(array, size);
	int* minimums = get_all_lacal_minimums(array, size);
	print("All local minimums: " + convert(minimums, count) + "\n");
	print("Sum of local minimums is: "
		+ to_string(sum_local_minimums(minimums, count)) + "\n");

	remove(array);
	remove(minimums);


	return 0;
}