#!/usr/bin/python3
"""A module for finding Island perimeter."""

def island_perimeter(grid):
	"""A function for finding Island perimeter"""
	visit = set()

	def depth_first_search(i, j):
		"""A function for performing dfs on the grid"""
		if i >= len(grid) or j >= len(grid[0]) or i < 0 or j < 0 or grid[i][j] == 0:
			return 1
		if (i, j) in visit:
			return 0
		visit.add((i, j))
		perimeter = depth_first_search(i, j)
		perimeter += depth_first_search(i, j+1)
		perimeter += depth_first_search(i, j-1)
		perimeter += depth_first_search(i+1, j)
		perimeter += depth_first_search(i-1, j)
		return perimeter
	for i in range(len(grid)):
		for j in range(len(grid[0])):
			if grid[i][j] == 1:
				if depth_first_search(i, i) != None:
					return depth_first_search(i, j)
	return 0