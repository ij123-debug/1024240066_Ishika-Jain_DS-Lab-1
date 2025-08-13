matrix = [
    [1, 2, 3],
    [4, 5, 6],
    [7, 8, 9]
]

rows = len(matrix)
cols = len(matrix[0])

for i in range(rows):
    print(f"Sum of row {i}:", sum(matrix[i]))

for j in range(cols):
    col_sum = sum(matrix[i][j] for i in range(rows))
    print(f"Sum of column {j}:", col_sum)
