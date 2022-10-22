# Recursive Python function to solve tower of hanoi
def TowerOfHanoi(n, src, helper, dest):
    if n == 0:
        return
    #TowerOfHanoi(n-1, source, inter, destination)
    TowerOfHanoi(n-1, src, dest, helper)
    print("Move disk", n, "from rod", src, "to rod", dest)
    #TowerOfHanoi(n-1, inter, destination, source)
    TowerOfHanoi(n-1, helper,src , dest)
 
 
# Driver code
N = 3
 
# A, C, B are the name of rods
TowerOfHanoi(N, 'A', 'B', 'C')
