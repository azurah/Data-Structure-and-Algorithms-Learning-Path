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


Input Size


Time and space complexity


This is generally a function of the input size


E.g., sorting, multiplication


How we characterize input size depends:


Sorting: number of input items


Multiplication: total number of bits


Graph algorithms: number of nodes & edges


Etc




Empirical Study


Write a program implementing the algorithm


Run program with inputs of varying size and
composition


Use a function, like the built-in clock(),
System.currentTimeMillis() function, to get an
accurate measure of the actual running time in
NSec/Size


Plot the results and find the complexity pattern


Good for embedded/small devices or where the
product is to be manufactured in millions of units




Difficulties in empirical study



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




Apriori and Posterior Analysis



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




Micro Analysis



To count each and every operation of the
program.


It is detailed, takes more time, complex


Average lines of codes are 3 to 5 million lines


Those operations which are not dependent upon
the size or number of the input will take constant
time and will not participate in the growth of the
time or space function, So they need not be part
of our analysis