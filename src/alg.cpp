// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
   int left = 0;
    int right = size - 1;
    int count = 0;

    while (left <= right) {
        int mid = (left + right) / 2;

        if (arr[mid] == x) {
            count++;

            int i = mid - 1;
            while (i >= left && arr[i] == x) {
                count++;
                i--;
            }

            i = mid + 1;
            while (i <= right && arr[i] == x) {
                count++;
                i++;
            }

            return count;
        }
        else if (arr[mid] < x) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }

    return count;
}
