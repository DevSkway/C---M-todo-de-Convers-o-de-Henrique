# Henrique's Method

**Henrique's Method is a simplified form of Horner's Algorithm.**
Imagine a decimal number where, for each binary digit, a multiplication by two is performed. If the digit is 1, the result of the multiplication is added to 1. **Referred to as Henrique's Method**, this is an **extremely simple binary-to-decimal conversion method that is valid for all cases.**

## Simplified Representation:

$X = Current\ number$

0 — $X × 2$
1 — $X × 2 + 1$

## Example with "1011011":

1 — $2 × 0 + 1 = 1$
0 — $2 × 1 = 2$
1 — $2 × 2 + 1 = 5$
1 — $2 × 5 + 1 = 11$
0 — $2 × 11 = 22$
1 — $2 × 22 + 1 = 45$
1 — $2 × 45 + 1 = 91$

Therefore, **1011011 is equal to 91**.
