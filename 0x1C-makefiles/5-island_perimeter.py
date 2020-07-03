#!/usr/bin/python3

""" Module to calculate island perimeter """

def island_perimeter(grid):
    """ returns the perimeter of the island insert by grid list """
    sum = 0
    x = len(grid)
    y = len(grid[0])

    for i in range(x):
        for j in range(y):
            if grid[i][j] == 1:
                if j - 1 == -1 or grid[i][j - 1] == 0:
                    sum += 1
                if j + 1 == y or grid[i][j + 1] == 0:
                    sum += 1

                if i - 1 == -1 or grid[i - 1][j] == 0:
                    sum += 1

                if i + 1 == x or grid[i + 1][j] == 0:
                    sum += 1
    return sum
