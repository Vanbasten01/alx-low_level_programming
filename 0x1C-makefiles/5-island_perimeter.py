#!/usr/bin/python3

""" Module containing the function island_perimeter """


def island_perimeter(grid):

    """
    a function that returns the perimiter of an island.
    Args:
        grid (list): A list of lists of integers.
    Returns:
        The perimeter of the island.
    """
    height = len(grid)
    width = len(grid[0])
    size = 0
    """edges = 0"""

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                size += 4
                if (j > 0 and grid[i][j - 1] == 1):
                    size -= 2
                if (i > 0 and grid[i - 1][j] == 1):
                    size -= 2
    return size
