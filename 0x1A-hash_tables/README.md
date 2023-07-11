In computing, a hash table, also known as hash map, is a data structure that implements an associative array or dictionary. It is an abstract data type that maps keys to values.[2] A hash table uses a hash function to compute an index, also called a hash code, into an array of buckets or slots, from which the desired value can be found. During lookup, the key is hashed and the resulting hash indicates where the corresponding value is stored.

Ideally, the hash function will assign each key to a unique bucket, but most hash table designs employ an imperfect hash function, which might cause hash collisions where the hash function generates the same index for more than one key. Such collisions are typically accommodated in some way.

In a well-dimensioned hash table, the average time complexity for each lookup is independent of the number of elements stored in the table. Many hash table designs also allow arbitrary insertions and deletions of key–value pairs, at amortized constant average cost per operation.[3][4][5]

Hashing is an example of a space-time tradeoff. If memory is infinite, the entire key can be used directly as an index to locate its value with a single memory access. On the other hand, if infinite time is available, values can be stored without regard for their keys, and a binary search or linear search can be used to retrieve the element.[6]: 458 

In many situations, hash tables turn out to be on average more efficient than search trees or any other table lookup structure. For this reason, they are widely used in many kinds of computer software, particularly for associative arrays, database indexing, caches, and sets.

History
The idea of hashing arose independently in different places. In January 1953, Hans Peter Luhn wrote an internal IBM memorandum that used hashing with chaining. Open addressing was later proposed by A. D. Linh building on Luhn's paper.[7]: 15  Around the same time, Gene Amdahl, Elaine M. McGraw, Nathaniel Rochester, and Arthur Samuel of IBM Research implemented hashing for the IBM 701 assembler.[8]: 124  Open addressing with linear probing is credited to Amdahl, although Ershov independently had the same idea.[8]: 124–125  The term "open addressing" was coined by W. Wesley Peterson on his article which discusses the problem of search in large files.[7]: 15 

The first published work on hashing with chaining is credited to Arnold Dumey, who discussed the idea of using remainder module a prime as a hash function.[7]: 15  The word "hashing" was first published in an article by Robert Morris.[8]: 126  A theoretical analysis of linear probing was submitted originally by Konheim and Weiss