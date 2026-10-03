# Mark and Toys

**HackerRank:** https://www.hackerrank.com/challenges/mark-and-toys/problem

## Approach
Sort the toy prices in ascending order, then purchase the cheapest toys while the remaining budget allows.

This greedy strategy maximizes the number of toys because every purchased toy consumes the minimum possible amount of the budget at each step.

## Complexity
- Time: O(N log N)
- Auxiliary Space: O(1) excluding sorting implementation memory

## Edge Cases
- Budget is too small to buy any toy
- Budget is sufficient for every toy
- Several toys have the same price

## Status
Accepted — evidence screenshot to be added.
