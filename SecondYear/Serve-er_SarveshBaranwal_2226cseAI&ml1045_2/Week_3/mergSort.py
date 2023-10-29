def merge(arr, l, mid , r):

    n1 = mid - l + 1

    n2 = r - mid

 

    left = [0] * n1

    right = [0] * n2

 

    for i in range(n1):

        left[i] = arr[l + i]

 

    for j in range(n2):

        right[j] = arr[mid + 1 + j]

 

    i, j, k = 0, 0, l

 

    while i < n1 and j < n2:

        if left[i] <= right[j]:

            arr[k] = left[i]

            i += 1

        else:

            arr[k] = right[j]

            j += 1

        k += 1

 

    while i < n1:

        arr[k] = left[i]

        i += 1

        k += 1

 

    while j < n2:

        arr[k] = right[j]

        j += 1

        k += 1

 

def mergeSort(arr: [int], l: int, r: int):

 

    if (l<r):

        mid=(l+r)//2

        mergeSort(arr, l, mid)

        mergeSort(arr, mid+1, r)

        merge(arr, l, mid, r)

    # Write Your Code Here
