'''a thing that does a thing, spat out by ChatGPT... not exactly sure what it's doing because it wasn't exactly what I wanted, but meh...'''
import itertools

x = set(range(16))
for elem in x:
    elem_sum = 0
    for i in range(1, len(x)):
        for subset in itertools.combinations(x, i):
            if elem in subset:
                elem_sum += sum(subset)
    print(elem_sum)
