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
Generate the solution(s) recursevily, piece by piece, smart use of pruning to cut dead ends.  
8 queens problem: use backtracking to put queen following the constrains and finally check the solution.  
Use of bitmask technique is crucial to improve performance.  

### Tips
Biggest problem with Complete Search is TLE verdict, if time constrains almost satisfied, try to speed up your critical code (the slowest part)  
- **Filtering vs Generating** (usually iterative) examine lots (or all) sols and choose correct ones (or remove incorrect) vs (usually recursive) gradually build solutions (pruning invalid partials)
- **Prune Search Space Early**
- **Utilize Symmetries** use symmetries to reduce the search space smartly (be careful often is complicated to implement and not worthy)
- **Pre-Computation** Trick usually not usable anymore, precompute solutions even in higher time and generate table for lookup
- **Solving Problem Backwards** change point of view, rat attack example: bombing each cells O(d^2*x^2) vs for each rat find cell where is killed =(d^2*n+x^2) [x^2: 2D grid, n: rats, d: bomb]
- **Optimizing Source Code** c++>java, scanf/printf>cin/cout, qsort>heapsort, row major fashion for arr, bit on int>arr of bool, use lower level data types, declare large ds in global scope, iterative>recursive when possible, consider local var for frequent array access, appropriate use of macros, c-style string>std::string
- **Use better data structures and algo** if still TLE after previos opt, abandon Complete Search approach

Use iterative search when different states can be derived easily with formulas correlated to some counter and (almost) all the states must be checked  
Use recursive backtracking when it's hard to derive different states or want to prune heavily the search space
