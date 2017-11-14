from pynns import BFQuery

a = BFQuery([ [1,2], [2,3], [4,334.5], [234,234.3], [2.2342,5435.2] ])

l = [223.2,124.443]
print ("nearest_neighbor = ", a.nearest_neighbor(l))