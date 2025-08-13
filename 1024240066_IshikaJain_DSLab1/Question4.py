
arr = list(map(int, input("Enter elements: ").split()))
print("Reversed array:", arr[::-1])


A = [[1, 2], [3, 4]]
B = [[5, 6], [7, 8]]
result = [[0, 0], [0, 0]]
for i in range(len(A)):
    for j in range(len(B[0])):
        for k in range(len(B)):
            result[i][j] += A[i][k] * B[k][j]
print("Matrix Multiplication Result:")
for row in result:
    print(row)


matrix = [[1, 2, 3], [4, 5, 6]]
transpose = [[matrix[j][i] for j in range(len(matrix))] for i in range(len(matrix[0]))]
print("Transpose:")
for row in transpose:
    print(row)
