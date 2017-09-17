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
- **Solving Problem Backwards** change point of view, rat attack example: bombing each cells O(d^2\*x^2) vs for each rat find cell where is killed (d^2\*n+x^2) [x^2: 2D grid, n: rats, d: bomb]
- **Optimizing Source Code** c++>java, scanf/printf>cin/cout, qsort>heapsort, row major fashion for arr, bit on int>arr of bool, use lower level data types, declare large ds in global scope, iterative>recursive when possible, consider local var for frequent array access, appropriate use of macros, c-style string>std::string
- **Use better data structures and algo** if still TLE after previos opt, abandon Complete Search approach

Use iterative search when different states can be derived easily with formulas correlated to some counter and (almost) all the states must be checked  
Use recursive backtracking when it's hard to derive different states or want to prune heavily the search space

## Divide and Conquer

In DC a problem is simplified by dividing it in easier subproblems and then conquering each part.

- Divide original problem in smaller subproblems (usually by half)
- Find solution for the easier subproblem
- if necessary combine the sub-solutions to complete the problem

Many common algorithms (quicksort,mergesort,heapsort,binary search) and Data Structures (binary search tree, heap, segment tree, fenwick tree)

### Binary Search

**ordinary usage** : search for item in static sorted array by checking the middle and then decide to look only in the left or the right half, iterating this process **O(log(n))**

**uncommon DS** : binary search on tree with the min heap property (children of a node always higher value than parent)

**bisection method** : same principle as binary search to find root of a complex function, just find good boundaries and choose adequate epsilon to accept solution (or iterate a fixed number of times like 40 or 60)

**binary search answer** : bisection method applied to problems which can be simulated, choose range and simulate using binary search to find correct parameters

## Greedy

Algorithm is greedy if it makes locally optimal choices at each step for reaching globally optimal solution.  
If works usually short and runs efficiently, but for working the problem requires 2 property:

- It has optimal sub-structures (optimal solution contains optimal sub-solutions)
- greedy property (best choice in a given moment is best choice absolutelly, never riconsider choices)

Interval covering problem plus easy common problems (dragon loot and special coin exchange)  
**Consider always sorting** before looking for a nice, easy greedy solution  
Quite uncommon in programming contests

## Dynamic Programming

DP most challenging and most used technique  
Master the ability to determine **problem states** and **transitions** between problem and sub-problems  
Two approach : **Top-Down** (some sort of intelligent backtracking) and **Bottom-Up**  
Mainly used to solve **optimization** and **counting** problems (min/max this or count the ways to do that)

Requires 2 property:

- Optimal sub-structures
- Overlapping Subproblems (complete search would evaluate them every time, DP is smarter and evaluate just once)

Given M distinct states that requires O(k) steps to be evaluated, the time complexity of DP solution is O(kM) , while the space complexity is O(M)

### Top-Down

- Start from the recursive backtracking solution
- Find all possible states for the problem and init a DP memo table (big as the number of states) with dummy vals not used in the problem
- In the recursive function before eval check if the states has been computed before in the table and return it in case, otherwise in evaluting it assign also the val in the table

### Bottom-Up

True original form of DP
- Determine params that uniquely describe the problem (similar to finding states)
- For N params create N-dim table, init just some cells with known values (**base cases**)
- Determine states/cells that can be filled next(transitions) Repeat untill table is filled, usually we use iteration with loops (instead of recursion)

### Comparison and Displaying Optimal solution

In Top-Down we fill the table through recursion as needed, in Bottom-Up complete and correct DP table filling order (topological order of the implicit DAG)

TD  
- advs : natural transformation of complete search recursion and computes states onlly when neccessary
- cons : possible function call overhead, possible MLE verdict if too many states

BU
- advs : no function overhead, save memory (possible reduce dimension by 1)
- cons : fills the value of all M states.

More difficult than counting two ways to do it.  
In TD add another function that use recursion and memo tab to reconstruct solution  
In BU store predecessor info in the table then do backtracking to reconstruct solution

### 6 Classical Examples

