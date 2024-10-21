## A08 - Graphin' Sleezy
### Stephanie Nagel
### Description:

## LeetCode 841: Keys and Rooms

This was a challenging problem. You are given a list of rooms with the keys that they hold inside them. Given this list, you must determine whether or not each room can be entered based on the available keys. I decided to traverse the rooms in order of when the keys were found. I used 2 maps of <int, int> type to store 1. whether or not we had the key for the room and 2. whether or not the room had been searched already. It wastes time to research a room, so we skipped rooms we already searched through. New keys were added to the key map and then the new rooms were searched until every found key's room had been searched. At the end, I simply checked whether or not each room had a found key, and if it was missing any, it returned false otherwise it returned true. Was a fun problem!


|  #  | Folder Link | Assignment Description |
| :-: | ----------- | ---------------------- |
| 1  |  [Assignment](https://github.com/rugbyprof/4883-Programming_Techniques/tree/master/Assignments/A08)     |   Choose from the given problems.    |
| 2 | [LC-841](https://leetcode.com/problems/keys-and-rooms/description/) | Keys and Rooms |
| 3 | [main.cpp]() | My solution. | 
