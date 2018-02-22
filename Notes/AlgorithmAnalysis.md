# Analysis of Algorithms

An algorithm is a finite set of precise instructions
for performing a computation or for solving a
problem.

### What is the goal of analysis of algorithms?
To compare algorithms mainly in terms of running
time but also in terms of other factors (e.g., memory
requirements, programmer's effort etc.)

### What do we mean by running time analysis?
To Determine how running time increases as the size
of the problem increases.

# Time Complexity
Every problem has a size as an integer value,
which is measured by the quantity of input data.
For example size of a graph can be number of
edges and size of sort can be number of
elements in the list to be sorted.

Time required for an algorithm is called the time
complexity of the algorithm and is represented
as a function of the size of a problem.

## Time space tradeoff
It is really quite important, even now, to have
efficiency in both space and time.

Of course, the type of compromise made
depends on the situation, but generally, for most
programmers, time is of the essence, while for
locations in which memory is scarce, of course,
space is the issue.


Maybe someday we'll be able to find algorithms
that are extremely efficient in both speed and
memory, bridges in the Space-Time
continuum.


## Input Size
Time and space complexity
- This is generally a function of the input size
E.g., sorting, multiplication
How we characterize input size depends:
- Sorting: number of input items
- Multiplication: total number of bits
- Graph algorithms: number of nodes & edges
- etc


## Empirical study to find out comparisons in time complexities between different algorithms
- Write a program implementing the algorithm
- Run program with inputs of varying size and
composition
- Use a function, like the built-in clock(),
System.currentTimeMillis() function, to get an
accurate measure of the actual running time in
NSec/Size
- Plot the results and find the complexity pattern
- Good for embedded/small devices or where the
product is to be manufactured in millions of units


## Difficulties in empirical study
Necessary to implement the algorithm, which
may be difficult

Results may not be indicative of the running time
on other inputs not included in the experiment.
Same HW and SW environments must be used
to compare

Even in same environments results vary based
on processor load, sharing of resources, no of
background processes, status of primary and
secondary memory at time of running program,
compiler, network architecture, programming
language and processor architecture




## Apriori and Posterior Analysis
Apriori is designing then making while Posterior
is making then waking up after the problem
crops up

Posterior Analysis is technique of coding a given
solution and then measuring its efficiency. it
provides actual time taken by the program. This
is useful in practice but Apriori is always better.

There is corresponding guarantee that any
algorithm that is better in performance in apriori
analysis will be always better in performance in
posterior analysis. Vice-Versa may not be true.




## Micro Analysis
To count each and every operation of the
program.

It is detailed, takes more time, complex

Average lines of codes are 3 to 5 million lines

Those operations which are not dependent upon
the size or number of the input will take constant
time and will not participate in the growth of the
time or space function, So they need not be part
of our analysis.

## Macro Analysis
Deals with selective instructions which are
dominant and costliest. Selection of right
instructions is very important

Comparisons and Swapping are basic
operations in sorting algorithms

Arithmetic operations are basic operations in
math algorithms

Comparisons are basic operations in searching
algorithms

Multiplication and Addition are basic operations
in matrix multiplication algorithms


## How do we compare algorithms?

We need to define a number of objective
measures.

- (1) Compare execution times?
Not good: times are specific to a particular
computer !!

- (2) Count the number of statements executed?
Not good: number of statements vary with
the programming language as well as the
style
of the
individual programmer.


## Ideal Solution
Express running time as a function of the
input size n (i.e., f(n)).

Compare different functions corresponding
to running times.

Such an analysis is independent of
machine time, programming style, etc.


# Types of Analysis
## Worst case
Provides an upper bound on running time. 
An absolute guarantee that the algorithm would not run longer,
no matter what the inputs are

## Best case
Provides a lower bound on running time. 
Input is the one for which the algorithm runs the fastest

## Average case
Provides a prediction about the running time. 
Assumes that the input is random


# Few tips for calculating complexity
Nested loops should be analyzed inside out. The
total running time for a statement inside
innermost loop is given by its running time
multiplied by the product of sizes of all for loops

The running time of an if/else statement is not
more than the running time of the test, plus the
larger of the running times of statements
contained inside if and else conditions

# Example
Associate a "cost" with each statement.

Find the "total cost“ by finding the total number of times
each statement is executed.


# Asymptotic Analysis
Asymptotic analysis means studying the behavior of the
function when n approaches to infinity or very large

Problems size will keep on increasing so asymptotic
analysis is very important. It has limiting behavior. We
are concerned with large input size.

To compare two algorithms with running times f(n) and
g(n), we need a rough measure that characterizes how
fast each function grows.

Hint: use rate of growth

Compare functions in the limit, that is, asymptotically! 
(i.e., for large values of n)


# Cases of different complexity functions

- Sub linear time : Those algorithms which
somehow don’t even require to see the whole
input once. Binary Search.

- Linear time: In which we make one pass through
the whole input, do some calculation for each
input and iterate. Linear Search. Finding Sum of
n numbers.

- nlogn time: Here we divide the input in two parts
and keeps on dividing until a particular subset
size and then solve that small subset. In the last
all subset solutions are combined or filtered to
get final solution. Merge Sort.

- Quadratic time : Where we need to do n iteration
over an internal loop which itself runs n times.
Searching in nXn matrix.

- Exponential time: It is generally a running time
for algorithms which must consider all subsets.

- Factorial time: These types will occur in
problems where we need to match n items
against n items or to arrange n items in some
particular order of given parameters


# Asymptotic Notation

O notation: asymptotic “less than” : f(n)=O(g(n)) implies: f(n) “≤” g(n)

Ω notation: asymptotic “greater than” : f(n)= Ω (g(n)) implies: f(n) “≥” g(n)


Θ notation: asymptotic “equality” : f(n)= Θ (g(n)) implies: f(n) “=” g(n)


# Asymptotic growth rate
- O(g(n)): class of functions f(n) that grow no faster than g(n)

- Θ (g(n)): class of functions f(n) that grow at same rate as g(n)

- Ω(g(n)): class of functions f(n) that grow at least as fast as g(n)


# Big-O Notation
We say fA(n)=30n+8 is order n, or O (n). 
It is, at most, roughly proportional to n.

fB(n)=n2+1 is order n2, or O(n2). It is, at most, roughly proportional to n2.

In general, any O(n2) function is faster-growing than any O(n) function.
