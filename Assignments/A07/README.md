## A07 - Priority Queezy
### Stephanie Nagel

## LeetCode 215: Kth Largest Element in an Array

My approach to this problem was similar to how I solved the last problem. The description suggests not sorting the given array so I decided to use a map again (in map<int, int> form) to calculate the frequency of the integers. After determining the frequency, I subtracted 1 from the frequency of the largest value in the map k times, decrementing the largest int pointer as needed until k was 0. The largest value when k reached 0 was determined to be the Kth largest element, so it was returned.

|  #  | Folder Link | Assignment Description |
| :-: | ----------- | ---------------------- |
| 1  |  [Assignment](https://github.com/rugbyprof/4883-Programming_Techniques/tree/master/Assignments/A07)     |   Choose from the given problems.    |
| 2 | [LC-215](https://leetcode.com/problems/kth-largest-element-in-an-array/description/)  | Kth Largest Element in an Array  |
| 3 | [main.cpp](https://github.com/aelious/4883-Prog-Tech/blob/main/Assignments/A07/main.cpp)  | My solution.  | 
