# 1 : Introduction

## Given well-known CS problems, solve them as quickly as possible.

## 7 tips

### (1) type faster

Test and improve [here](typingtest.com)

### (2) Quickly identify problem types

| No | Category | Freq |
|:---:|:----------:|:------:|
| 1  | Ad Hoc   |  1-2 |
| 2  | Complete Search|  1-2 |
| 3  | Divide and Conquer |  0-1 |
| 4  | Greedy|  0-1 |
| 5  | Dynamic Programming|  1-3 |
| 6  | Graph|  1-2 |
| 7  | Mathematics  |  1-2 |
| 8  | String Processing   |   1  |
| 9  | Computational Geometry   |   1  |
| 10 |Rare Problems|  1-2 |

Also classify as
- Solved before
- Seen before
- Not seen

### (3) Do Algorithm Analysis

In competition try to find the **simplest** solution that works **in the time limit**

modern processor about 100M operations in few seconds (use this to estimate if your solution is enough)

Some sparse tips
- k-nested loops of n iter **O(n^k)**
- b recursive calls for L levels **O(b^L)**
- dynamic programming with n\*n matrix, k per cell **O(k\*n^2)**

### (4) Master Programming Languages

C++ with STL is preferred  
Java knowledge is also required (Powerful lib: BigInt,BigDec,Regex and easier debug)

### (5) Master the art of Testing Code

Design your own tricky test cases, since the provided one are usually trivial  
Include:  
- sample test cases
- double include for initializations concern
- consider tricky corner cases
- largest cases

### (6) Practice and more Practice

resources:
- UVa online judge ([here](https://uva.onlinejudge.org/))
- ACM ICPC Live Archive ([here](https://icpcarchive.ecs.baylor.edu/))
- USACO training website ([here](http://train.usaco.org/))
- Sphere online judge ([here](http://www.spoj.com/))
- Topcoder ([here](https://www.topcoder.com))

### (7) Team Work

Learn to work on paper for when you cannot use the computer.  
Prepare hard corner case for your teammate

## Getting Started

### Anatomy of a problem

**Background story and Problem description** : easy one try to deceive, hard usually succint text

**Input and Output description**

**Sample Input and Sample Output** : just trivial cases, not enough

**Hints or Footnotes**

### Typical In/Out routines

for input possible formats are:
- \# of case given as first line
- continue until special values
- continue until EOF

Pay attention to the output format as well (\n after each result vs between results)