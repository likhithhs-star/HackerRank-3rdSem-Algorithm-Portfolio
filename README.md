# HackerRank Algorithms & GitHub Coding Portfolio

## Student Information

- **Name:** Likhith HS
- **SRN:** R25EF123
- **Semester:** 3
- **GitHub:** https://github.com/likhithhs-star
- **HackerRank:** https://www.hackerrank.com/profile/likhithhs229962

## About

This portfolio contains five mandatory algorithmic problems completed as part of the 3rd-semester programming activity.

The solutions are implemented in C++ and documented with algorithmic approaches, complexity analysis, edge cases, and submission status.

## Problems

| # | Problem | Topic | Time | Auxiliary Space |
|---|---|---|---|---|
| 1 | Mini-Max Sum | Arrays | O(N) | O(1) |
| 2 | Birthday Cake Candles | Arrays / Counting | O(N) | O(1) |
| 3 | Insertion Sort - Part 1 | Sorting | O(N) | O(1) |
| 4 | Binary Search | Searching | O(log N) | O(1) |
| 5 | Mark and Toys | Greedy / Sorting | O(N log N) | O(log N)* |

## Problem Links

1. https://www.hackerrank.com/challenges/mini-max-sum/problem
2. https://www.hackerrank.com/challenges/birthday-cake-candles/problem
3. https://www.hackerrank.com/challenges/insertionsort1/problem
4. Binary Search — implemented locally as permitted by the activity instructions.
5. https://www.hackerrank.com/challenges/mark-and-toys/problem

## Repository Structure

- `01-Mini-Max-Sum/`
- `02-Birthday-Cake-Candles/`
- `03-Insertion-Sort-Part-1/`
- `04-Binary-Search/`
- `05-Mark-and-Toys/`

## Evidence

Accepted-submission evidence has been captured for Mini-Max Sum, Birthday Cake Candles, Insertion Sort - Part 1, and Mark and Toys. Binary Search was implemented and tested locally as permitted by the activity instructions.

## Badge

No additional HackerRank badge evidence is claimed at this stage.

## Reflection

This activity strengthened my understanding of fundamental algorithmic techniques and their efficiency. Mini-Max Sum demonstrated how a single traversal can replace unnecessary sorting when only minimum and maximum values are required. Birthday Cake Candles reinforced the use of counting during traversal rather than storing additional frequency information. Insertion Sort - Part 1 helped me understand shifting elements and maintaining a sorted portion of an array. Binary Search demonstrated divide-and-conquer thinking by repeatedly reducing the search space by half. Mark and Toys introduced a greedy strategy where sorting the prices and selecting the cheapest available items maximizes the number of purchases within a fixed budget. Across the problems, I practiced analysing time and auxiliary space complexity using Big-O notation. I also learned that an efficient solution is not only about producing the correct output, but also about choosing an algorithm appropriate for the constraints. Organizing the solutions in GitHub with separate folders and documentation helped me connect algorithmic problem solving with professional software-development practices.


\* Mark and Toys uses `std::sort`; its auxiliary space depends on the sorting implementation and is typically O(log N) for the recursion stack.
