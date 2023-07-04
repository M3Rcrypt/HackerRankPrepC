# HackerRankPrepC

This repository contains the medium and hard problems of Prepare C from HackerRank.

## Small Triangles, Large Triangles

**Problem Definition:** Given **n** triangles, represented by **a<sub>i</sub>**, **b<sub>i</sub>**, and **c<sub>i</sub>**, print them in ascending order of their areas. All the areas are guaranteed to be different. The area of a triangle with sides **a**, **b**, and **c** can be calculated using Heron's formula:

$$ S = \sqrt{p \cdot (p - a) \cdot (p - b) \cdot (p - c)} $$

where $$ p = \frac{a + b + c}{2} $$ .


**Input Format:**  
The first line of the input contains a single integer **n**. Each of the next **n** lines contains three space-separated integers, **a<sub>i</sub>**, **b<sub>i</sub>**, and **c<sub>i</sub>**, representing the sides of a triangle.

**Constraints:**  
- 1 ≤ n ≤ 100
- 1 ≤ a<sub>i</sub>, b<sub>i</sub>, c<sub>i</sub> ≤ 70
- a<sub>i</sub> + b<sub>i</sub> > c<sub>i</sub>, a<sub>i</sub> + c<sub>i</sub> > b<sub>i</sub>, and b<sub>i</sub> + c<sub>i</sub> > a<sub>i</sub>

**Output Format:**  
Print exactly **n** lines. Each line should contain three space-separated integers, representing the **a<sub>i</sub>**, **b<sub>i</sub>**, and **c<sub>i</sub>** of the corresponding triangle.

**Sample Input:**

```
3
7 24 25
5 12 13
3 4 5
```

**Sample Output:**

```
3 4 5
5 12 13
7 24 25
```

**Explanation:**  
The area of the first triangle is **84**. The area of the second triangle is **30**. The area of the third triangle is **6**. So, the triangles are sorted in ascending order based on their areas.
