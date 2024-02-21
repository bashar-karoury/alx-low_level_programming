#!/usr/bin/python3
""" Module that calculates perimeter of grid of 0 and 1
"""


def island_perimeter(grid):
    """ Function that calculates the perimeter of grid

        Args
            grid: list of lists of int
        Returns
            int: perimeter of island
    """

    trav_dir = [(0, -1), (-1, 0), (0, 1), (1, 0)]
    h_size = len(grid)
    w_size = len(grid[0])
    total_p = 0

    for i in range(h_size):
        for j in range(w_size):
            # check item
            if grid[i][j] == 1:
                # check neighbour cells if 0 using trav_dir
                for k in range(4):
                    # get next direction
                    next_i = i + trav_dir[k][0]
                    next_j = j + trav_dir[k][1]
                    if next_i < 0 or next_i >= h_size:
                        total_p += 1
                    elif next_j < 0 or next_j >= w_size:
                        total_p += 1
                    else:
                        if grid[next_i][next_j] == 0:
                            total_p += 1
    return total_p
