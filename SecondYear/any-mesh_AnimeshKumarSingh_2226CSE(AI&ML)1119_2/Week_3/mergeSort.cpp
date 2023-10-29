void merge(int arr[], int l, int mid, int r) {

    int n1 = mid - l + 1;

    int n2 = r - mid;

 

    int left[n1];

    int right[n2];

 

    for (int i = 0; i < n1; i++) {

        left[i] = arr[l + i];

    }

    for (int i = 0; i < n2; i++) {

        right[i] = arr[mid + 1 + i];

    }

 

    int i = 0, j = 0, k = l;

 

    while (i < n1 && j < n2) {

        if (left[i] <= right[j]) {

            arr[k] = left[i];

            i++;

        } else {

            arr[k] = right[j];

            j++;

        }

        k++;

    }

 

    while (i < n1) {

        arr[k] = left[i];

        i++;

        k++;

    }

 

    while (j < n2) {

        arr[k] = right[j];

        j++;

        k++;

    }

}

 

void mergeSort(int arr[], int l, int r) {

    if (l < r) {

        int mid = l + (r - l) / 2;

        mergeSort(arr, l, mid);

        mergeSort(arr, mid + 1, r);

        merge(arr, l, mid, r);

    }

}
