// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
   int left = 0;
    int right = size;

    while (left < right) {
        int mid = (left + right) / 2;

        if (arr[mid] < x) {
            left = mid + 1;
        } else {
            right = mid;
        }
    }

    if (left == size || arr[left] != x) {
        return -1;
    } else {
        return left;
    }
}
