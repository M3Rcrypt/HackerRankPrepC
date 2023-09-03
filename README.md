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

## 4. Dynamic Array in C (Medium) [Link to Relative Solution](dynamicArrayInC.c)

**Problem Definition:** Snow Howler is the librarian at the central library of the city of HuskyLand. He must handle requests which come in the following forms:

1 x y : Insert a book with **y** pages at the end of the $\x^th$ shelf.

2 x y : Print the number of pages in the $\y^th$ book on the $\x^th$ shelf.

3 x : Print the number of books on the $\x^th$ shelf.

Snow Howler has got an assistant, Oshie, provided by the Department of Education. Although inexperienced, Oshie can handle all of the queries of types 2 and 3. Help Snow Howler deal with all the queries of type 1.

Oshie has used two arrays: 
```
int* total_number_of_books;
/*
 * This stores the total number of books on each shelf.
 */

int** total_number_of_pages;
/*
 * This stores the total number of pages in each book of each shelf.
 * The rows represent the shelves and the columns represent the books.
 */
```


**Input Format:**  
The first line contains an integer **total_number_of_shelves**, the number of shelves in the library.
The second line contains an integer **total_number_of_queries**, the number of requests.
Each of the following **total_number_of_queries** lines contains a request in one of the three specified formats. 

**Constraints:**  
- 1 ≤ total_number_of_shelves ≤ $\10^5$
- 1 ≤ total_number_of_queries ≤ $\10^5$
- For each query of the second type, it is guaranteed that a book is present on the $\x^th$ shelf at $\y^th$ index.
- 0 ≤ x ≤ total_number_of_shelves
- Both the shelves and the books are numbered starting from 0.
- Maximum number of books per shelf ≤ 1100.

**Output Format:**  
Write the logic for the requests of type 1. The logic for requests of types 2 and 3 are provided. 

**Sample Input 0**

```
5
5
1 0 15
1 0 20
1 2 78
2 2 0
3 0
```

**Sample Output 0**

```
78
2
```

**Explanation 0**  
There are **5** shelves and **5** requests, or queries.
- 1 Place a **15** page book at the end of shelf **0**.
- 2 Place a **20** page book at the end of shelf **0**.
- 3 Place a **78** page book at the end of shelf **2**.
- 4 The number of pages in the $\0^th$ book on the $\2^nd$ shelf is 78.
- 5 The number of books on the $\0^th$ shelf is 2. 
