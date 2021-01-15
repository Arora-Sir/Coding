// Given an array of size n and a number k, find all elements that appear more than " n/k " times.

// App 1: O(n^2) -> brute force simmple approach check every element
// App 2: O(nlogn) + O(n) i.e O(nlogn) -> sort the array and traverse

//App 3: O(nk) -> creating temp ... maximum of temp(k-1) elements

// struct eleCount {                                            Step 1: Create a temporary array
//     int element;                                             Step 2: Process all elements of input array (Main step)
//     int count;                                               Step 3: Check actual counts of potential candidates in temp[k-1]
// };
// struct eleCount temp[];

//Array: 3 1 2 2 2 1 4 3 3   n=9 and k=4

        //at i = 6
        //  - - 2
        //  - 1 2
        //  3 1 2

        //at i = 7
        //  - - 2
        //  - 1 2


//App 4: Hashing - O(n) time on average, Extra space required hashing would be higher than O(k)