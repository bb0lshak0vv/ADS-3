// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
   int l = 0;
   int r = size - 1;

   while (l <= r) {
       int mid = l + (r - l) / 2;

       if (arr[mid] == value) {
           return mid;
       }

       if (arr[mid] < value) {
           l = mid + 1;
       } else {
           r = mid - 1;
       }
   }

   return 1;
}
