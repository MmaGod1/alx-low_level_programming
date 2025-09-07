#!/usr/bin/python3
"""Defines an island perimeter measuring function."""


def island_perimeter(grid):
    """Return the perimiter of an island.

    The grid represents water by 0 and land by 1.

    Args:
        grid (list): A list of list of integers representing an island.
    Returns:
        The perimeter of the island defined in grid.
    """
    perimeter = 0
    rows = len(grid)
    cols = len(grid[0])

    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                # For each land cell, check all 4 neighbors
                if i == 0 or grid[i-1][j] == 0:  # top
                    perimeter += 1
                if i == rows - 1 or grid[i+1][j] == 0:  # bottom
                    perimeter += 1
                if j == 0 or grid[i][j-1] == 0:  # left
                    perimeter += 1
                if j == cols - 1 or grid[i][j+1] == 0:  # right
                    perimeter += 1

    return perimeter
