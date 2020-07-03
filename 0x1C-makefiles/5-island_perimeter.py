#!/usr/bin/python3

""" Module to calculate island perimeter """


def island_perimeter(grid):
    """ returns the perimeter of the island insert by grid list """
    sum = 0
    x = len(grid)
    y = len(grid[0])


    for i in range(1, x-1):
        for j in range(1, y-1):
            if grid[i][j] == 1:
                if grid[i][j - 1] == 0:
                    sum += 1
                if grid[i][j + 1] == 0:
                    sum += 1
                if grid[i - 1][j] == 0:
                    sum += 1
                if grid[i + 1][j] == 0:
                    sum += 1
    return sum
