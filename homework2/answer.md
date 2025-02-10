Explain why the parallel merge algorithm uses O(n) work?
    at each round, the computational complexity scales like the following
    $Work = C + \log(nb) + Work(left) + Work(right)$

    Therefore
    $$
    Work(n,n) < C + log(n) + 2 Work(cn,cn)
    $$
    for some c smaller than 1. 

    This is indeed O(n) work. 


Problem 2: bounding the span. simply use a greedy approach: the middle index is selected from the longer list. then every thing is done. 
