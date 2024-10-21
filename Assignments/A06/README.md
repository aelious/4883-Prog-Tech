## A06 - Hardwood Sneezy
### Stephanie Nagel

## LeetCode 692: Top K Frequent Words

This problem focuses on vector manipulation and sorting. Given a vector of strings and an integer k, you must pull out the top k commonly occurring words.

To solve this, I first created a map and traversed the vector, adding 1 to the key-value pair when a copy of the word was found. Then, I looped through the map k times and picked out the most commonly occurring word from the map, deleting it and adding it to our resultant vector. Finally, the function returned the new vector.


|  #  | Folder Link | Assignment Description |
| :-: | ----------- | ---------------------- |
| 1  |  [Assignment](https://github.com/rugbyprof/4883-Programming_Techniques/tree/master/Assignments/06-A06)     |   Choose from the given problems.    |
| 2 | [LC-692](https://leetcode.com/problems/top-k-frequent-words/)  | Top K Frequent Words Problem  |
| 3 | [main.cpp](https://github.com/aelious/4883-Prog-Tech/blob/main/Assignments/A06/main.cpp)  | My solution.  |