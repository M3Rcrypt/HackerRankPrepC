# HackerRankPrepC
This repository includes the medium and hard problems of Prepare C of HackerRank. 

## Small Triangles, Large Triangles
Problem Definition: You are given **n** triangles, specifically **a<sub>i</sub>**, **b<sub>i</sub>**, and **c<sub>i</sub>**. Print them in the same style but sorted by their areas from the smallest one to the largest one. It is guaranteed that all the areas are different. The best way to calculate area of a triangle with sides, **a**, **b**, and **c** is Heron' s formula:
<br>
S = \sqrt{p * (p-a) * (p-b) * (p-c)} where p = \frac{a + b+ c}{2}.
<br>
<br>
**Input Format**
<br>
The first line of each test line contains a single integer **n**. **n** lines follow with three space-seperated integers, **a<sub>i</sub>**, **b<sub>i</sub>**, and **c<sub>i</sub>**.
<br>
<br>
**Constraints**
<br>
- 1 \leq n \leq 100
- 1 \leq  a<sub>i</sub>, b<sub>i</sub>, c<sub>i</sub> \leq 70
- a<sub>i</sub> + b<sub>i</sub> > c<sub>i</sub>, a<sub>i</sub> + c<sub>i</sub> > b<sub>i</sub> and b<sub>i</sub> + c<sub>i</sub> > a<sub>i</sub>
<br>
<br>
**Output Format**
<br>
Print exaclt n lines. On each line print **3** space-seperated integers, the **a<sub>i</sub>**, **b<sub>i</sub>**, and **c<sub>i</sub>** of the corresponding triangle.
<br>
<br>
**Sample Input 0**
<br>

3
<br>
7 24 25
<br>
5 12 13
<br>
3 4 5
<br>

<br>
**Sample Input 0**
<br>
3 4 5
<br>
5 12 13
<br>
7 24 25
<br>
<br>
**Explanation 0**
<br>
The area of the first triangle is **84**. The area of the second triangle is **30**. The area of the third triangle is **6**. So the sorted order is the reverse one.
