# Complex_Track
Different Cities  are connected by train routes. You have to tell the number of total ways to travel from city X  to city Y passing through City Z and consisting of exactly L no. of tracks between them.
You are given N number of cities , M number of tracks  and M pairs (P(i),Q(i)) denoting a track from P(i) to Q(i).

Input:

1.First line contains T (number of testcases).

2. The first line of testcase contain N and M.

3. M lines follow containing P(i) and Q(i).

4. The last line of testcase contains X , Z , Y and L

Example:

2
5 7	
1 2
1 5
2 5 
2 4
2 3 
3 5
4 5
1 2 5 3


7 9
4 6
5 6
1 2
1 5
2 7
2 4
1 7
2 3
3 6
2 3 6 2

output: 

2 
1

Explaination : TEST CASE 1

Since L= 3
We two possible ways 1->2->4->5 and 1->2->3->5
