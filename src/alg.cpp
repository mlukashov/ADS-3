// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
    int lev = 0;
    int prav = size - 1;
    int kol = 0;
    while (lev <= prav) {
        int mid = (lev + prav) / 2;
        if (value < arr[mid]) {
            prav = mid - 1;
        } else if (value > arr[mid]) {
            lev = mid + 1;
        } else {
            for (int i = 1; arr[mid] == arr[mid - i]; i++)
                kol++;
            for (int i = 0; arr[mid] == arr[mid + i]; i++)
                kol++;
            return kol;
        }
    }
  return 0; // если ничего не найдено
}
