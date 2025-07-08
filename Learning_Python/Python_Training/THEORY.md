Time complexity-

Q] why only conside the factor n?
Ans] beacause we only do the asymtotic aalysis, to study the effect of values of n on the increate in parameters, if we look at the equations-
worst case (O) => f(n) <= c * g(n) where n > n0
best case (theta) => f(n) >= c * g(n) where n > n0
average case (omega) => c1 * g(n) <= f(n) <= c2 * g(n) where n > n0

// Memoization
-> Readign from the record instead of computing the same thing again and again.
-> Store the lower order calls in the memory.
-> this is also knows as tabulation approach, this is called dynamic programming
