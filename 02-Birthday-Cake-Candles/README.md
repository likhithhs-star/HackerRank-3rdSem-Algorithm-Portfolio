# Birthday Cake Candles

**HackerRank:** https://www.hackerrank.com/challenges/birthday-cake-candles/problem

## Approach
Traverse the candle heights once while maintaining:
- the tallest candle seen so far
- the number of candles having that height

Whenever a new maximum is found, reset the count to 1.

## Complexity
- Time: O(N)
- Auxiliary Space: O(1)

## Edge Case
If every candle has the same height, all candles are counted.

## Status
Accepted — evidence screenshot to be added.
