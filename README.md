# TOWER OF HANOI SOLVER

Minor project to solve the classic puzzle [Tower of Hanoi](https://en.wikipedia.org/wiki/Tower_of_Hanoi), based on 3 different wooden pegs where the main goal is to move a stack of $n$ disks from an initial peg (peg A) to a target one (C), while using a spare peg (peg B). The rules to do so are the following:

1. Only one disk may be moved at a time.
2. Each move consists of taking the upper disk from one of the stacks and placing it on top of another stack or on an empty peg.
3. No disk may be placed on top of a disk that is smaller than it.

The minimal number of moves required to solve a Tower of Hanoi puzzle is $2^n − 1$.

For example, for $n=3$:
```console
Move number 0: A = {3, 2, 1}, B = {}, C = {}
Move number 1: A = {3, 2}, B = {}, C = {1}
Move number 2: A = {3}, B = {2}, C = {1}
Move number 3: A = {3}, B = {2, 1}, C = {}
Move number 4: A = {}, B = {2, 1}, C = {3}
Move number 5: A = {1}, B = {2}, C = {3}
Move number 6: A = {1}, B = {}, C = {3, 2}
Move number 7: A = {}, B = {}, C = {3, 2, 1}
```


![The Tower of Hanoi game](tower-hanoi.jpg)
