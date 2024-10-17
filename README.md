# Experiment-20
Sure! Here’s the aim, theory, and conclusion tailored specifically for the C++ sorting algorithm implementations provided earlier:

### Aim
The aim of this study is to implement and analyze three fundamental sorting algorithms—Selection Sort, Insertion Sort, and Bubble Sort—using C++. By exploring their mechanisms and performance characteristics, we seek to understand their efficiencies and appropriate use cases.

### Theory

1. **Selection Sort**:
   - This algorithm sorts an array by repeatedly finding the minimum element from the unsorted portion and moving it to the beginning. It has a time complexity of \(O(n^2)\), making it inefficient for large lists. Its primary advantage is its simplicity.

2. **Insertion Sort**:
   - Insertion Sort builds a sorted array one element at a time by inserting each new element into its proper position within the already sorted portion. This algorithm is more efficient than Selection Sort and Bubble Sort for small or nearly sorted datasets, with a time complexity of \(O(n^2)\) in the worst case, but \(O(n)\) in the best case when the array is already sorted.

3. **Bubble Sort**:
   - Bubble Sort repeatedly compares adjacent elements and swaps them if they are in the wrong order. This process continues until no swaps are needed, indicating the array is sorted. It also has a time complexity of \(O(n^2)\) and is generally the least efficient of the three algorithms for larger datasets.


### Selection Sort Algorithm

1. **Start** with the first element of the array as the current position (`i`).
2. **Repeat** the following steps for each position `i` from `0` to `n-2`:
   - Assume the minimum element is at index `i` (set `minIndex = i`).
   - **For** each element from `i+1` to `n-1`, do the following:
     - If the current element is less than the element at `minIndex`, update `minIndex` to the current index.
   - After finding the minimum element, **swap** the element at `i` with the element at `minIndex` (if `minIndex` is not equal to `i`).
3. **End Repeat**.
4. **Output** the sorted array.
5. **End**.



### Insertion Sort Algorithm

1. **Start** with the second element of the array (index `1`).
2. **Repeat** the following steps for each element `i` from `1` to `n-1`:
   - Set `key` as the element at index `i`.
   - Initialize `j` as `i - 1`.
   - **While** `j` is greater than or equal to `0` and the element at `j` is greater than `key`, do the following:
     - Shift the element at `j` to the right (set `arr[j + 1] = arr[j]`).
     - Decrement `j` (set `j = j - 1`).
   - Place the `key` in its correct position (set `arr[j + 1] = key`).
3. **End Repeat**.
4. **Output** the sorted array.
5. **End**.



### Bubble Sort Algorithm

1. **Start** with the array of `n` elements.
2. **Repeat** the following steps for `i` from `0` to `n-2`:
   - **For** each `j` from `0` to `n-2-i`:
     - If the element at index `j` is greater than the element at index `j+1`, then:
       - **Swap** the elements at indices `j` and `j+1`.
3. **End Repeat**.
4. **Output** the sorted array.
5. **End**.


### Conclusion
Selection Sort, Insertion Sort, and Bubble Sort are essential algorithms that offer foundational knowledge in sorting techniques. Although they all exhibit quadratic time complexity, their performance varies based on the dataset. Insertion Sort is often more efficient for smaller or partially sorted datasets, while Selection Sort and Bubble Sort tend to perform poorly on larger lists. Understanding these algorithms is vital for developing more complex sorting methods and for algorithmic problem-solving in general.
