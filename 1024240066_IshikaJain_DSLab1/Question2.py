arr = list(map(int, input("Enter elements separated by space: ").split()))
unique_arr = []
for x in arr:
    if x not in unique_arr:
        unique_arr.append(x)

print(f"Array after removing duplicates: {unique_arr}")
