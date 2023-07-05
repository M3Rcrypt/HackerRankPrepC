# HackerRankPrepC

This repository contains the medium and hard problems of Prepare C from HackerRank.

## 1. Small Triangles, Large Triangles (Medium) [Link to Relative Solution](smallLargeTriangles.c)

**Problem Definition:** Given **n** triangles, represented by **a<sub>i</sub>**, **b<sub>i</sub>**, and **c<sub>i</sub>**, print them in ascending order of their areas. All the areas are guaranteed to be different. The area of a triangle with sides **a**, **b**, and **c** can be calculated using Heron's formula:

$$ S = \sqrt{p \cdot (p - a) \cdot (p - b) \cdot (p - c)} $$

where 

$$ p = \frac{a + b + c}{2} $$ 


**Input Format:**  
The first line of the input contains a single integer **n**. Each of the next **n** lines contains three space-separated integers, **a<sub>i</sub>**, **b<sub>i</sub>**, and **c<sub>i</sub>**, representing the sides of a triangle.

**Constraints:**  
- 1 ≤ n ≤ 100
- 1 ≤ a<sub>i</sub>, b<sub>i</sub>, c<sub>i</sub> ≤ 70
- a<sub>i</sub> + b<sub>i</sub> > c<sub>i</sub>, a<sub>i</sub> + c<sub>i</sub> > b<sub>i</sub>, and b<sub>i</sub> + c<sub>i</sub> > a<sub>i</sub>

**Output Format:**  
Print exactly **n** lines. Each line should contain three space-separated integers, representing the **a<sub>i</sub>**, **b<sub>i</sub>**, and **c<sub>i</sub>** of the corresponding triangle.

**Sample Input 0**

```
3
7 24 25
5 12 13
3 4 5
```

**Sample Output 0**

```
3 4 5
5 12 13
7 24 25
```

**Explanation 0**  
The area of the first triangle is **84**. The area of the second triangle is **30**. The area of the third triangle is **6**.  So, the sorted order is the reverse one.


## 2. Variadic Functions in C (Medium) [Link to Relative Solution](variadicFunctions.c)

**Problem Definition:** Variadic functions are functions which take a variable number of arguments. In C programming, a variadic function will contribute to the flexibility of the program that you are developing.

The declaration of a variadic function starts with the declaration of at least one named variable, and uses an ellipsis as the last parameter, e.g. 

```
int printf(const char* format, ...);
```

In this problem, you will implement three variadic functions named , and to calculate sums, minima, maxima of a variable number of arguments. The first argument passed to the variadic function is the count of the number of arguments, which is followed by the arguments themselves. 


**Input Format:**  
- The first line of the input consists of an integer **number_of_test_cases**.
- Each test case tests the logic of your code by sending a test implementation of 3, 5 and 10 elements respectively. 
- Each test case tests the logic of your code by sending a test implementation of 3, 5 and 10 elements respectively. 
- The error log prints the parameters which are passed to the test implementation. It also prints the sum, minimum element and maximum element corresponding to your code. 

**Constraints:**  
- 1 ≤ number_of_test_cases ≤ 50
- 1 element ≤ 1000000

**Output Format:**  
"Correct Answer" is printed corresponding to each correct execution of a test implementation."Wrong Answer" is printed otherwise. 

**Sample Input 0**

```
1
```

**Sample Output 0**

```
Correct Answer
Correct Answer
Correct Answer
```

## 3. Printing Patterns Using Loops (Medium) [Link to Relative Solution](printingPatterns.c)

**Problem Definition:** Print a pattern of numbers from **1** to **n** as shown below. Each of the numbers is separated by a single space. 

```
                            4 4 4 4 4 4 4  
                            4 3 3 3 3 3 4   
                            4 3 2 2 2 3 4   
                            4 3 2 1 2 3 4   
                            4 3 2 2 2 3 4   
                            4 3 3 3 3 3 4   
                            4 4 4 4 4 4 4             
```

**Input Format:**  
The input will contain a single integer **n**. 

**Constraints:**  
1 ≤ n ≤ 1000

**Sample Input 0**

```
2
```

**Sample Output 0**

```
2 2 2
2 1 2
2 2 2
```

**Sample Input 1**

```
5
```

**Sample Output 1**

```
5 5 5 5 5 5 5 5 5 
5 4 4 4 4 4 4 4 5 
5 4 3 3 3 3 3 4 5 
5 4 3 2 2 2 3 4 5 
5 4 3 2 1 2 3 4 5 
5 4 3 2 2 2 3 4 5 
5 4 3 3 3 3 3 4 5 
5 4 4 4 4 4 4 4 5 
5 5 5 5 5 5 5 5 5
```

**Sample Input 2**

```
7
```

**Sample Output 2**

```
7 7 7 7 7 7 7 7 7 7 7 7 7 
7 6 6 6 6 6 6 6 6 6 6 6 7 
7 6 5 5 5 5 5 5 5 5 5 6 7 
7 6 5 4 4 4 4 4 4 4 5 6 7 
7 6 5 4 3 3 3 3 3 4 5 6 7 
7 6 5 4 3 2 2 2 3 4 5 6 7 
7 6 5 4 3 2 1 2 3 4 5 6 7 
7 6 5 4 3 2 2 2 3 4 5 6 7 
7 6 5 4 3 3 3 3 3 4 5 6 7 
7 6 5 4 4 4 4 4 4 4 5 6 7 
7 6 5 5 5 5 5 5 5 5 5 6 7 
7 6 6 6 6 6 6 6 6 6 6 6 7 
7 7 7 7 7 7 7 7 7 7 7 7 7 
```
