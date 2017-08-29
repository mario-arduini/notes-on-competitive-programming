# Problem solving paradigms

discussion of 4 common problem solving paradigms essential to competitive programming:
- Complete Search
- Divide and Conquer
- Greedy
- Dynamic Programming

## Complete Search

Also known as brute force or recursive backtracking, consist of **traversing the entire (or part of the) searching space**   
Use of **pruning**  
Should be used when no other algorithms are available or exists, but are overkill (small input size)  
First solution, usually not WA, but often TLE

### Iterative Complete Search
Examples from the book:  
- **UVa 00775** find all 5-digit numbers using all digits 0-9 that divided give some N (2<=N<=79) - **2 nested loops**
- **UVa 00441** given 6<k<13 int, output all subset of size 6 in order - **6 nested loops**
- **UVa 11565** given 1<=A,B,C<=10000 find distinct x,y,z respecting constraints - **choose wisely boundaries and prune a lot**
- **UVa 11742** given 0<n<=8 movie goers and 0<=m<=20 constrains find acceptable disposition - **try all permutations (next_permutation C++ STL)**
- **UVa 12455** given 0<n<=20 int, subset that sum to X - **bit manipulation technique for 2^n subset**   

### Recursive Complete Search
