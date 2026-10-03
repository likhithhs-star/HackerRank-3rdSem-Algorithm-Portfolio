# Binary Search

**Assignment Requirement:** Implement a suitable sorted-array binary search.

## Approach
Maintain left and right boundaries. Compare the target with the middle element and discard the half that cannot contain the target.

## Input
First line: N
Second line: N sorted integers
Third line: target

## Output
Index of target, or -1 if the target is absent.

## Complexity
- Time: O(log N)
- Auxiliary Space: O(1)

## Edge Cases
- Target at the first position
- Target at the last position
- Target absent
- Single-element array

## Status
Locally tested — evidence screenshot to be added.
