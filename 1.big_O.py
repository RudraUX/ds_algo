# calculating time compelxity
# (n*n)+n => n^2+n => n^2
# Time complexity O(n^2)

# def get_num(n):
#     for i in range(n):
#         for j in range(n):
#             print(i, j)

#     for k in range(7):
#         print(k)


def print_num(n):
    # O(1)
    print(n[0])


def print_str(n):
    # O(n)
    for i in range(len(n)):
        print(n[i])


def print_str_num(n, m):

    # over all
    # n+m+n^2+m = n^2+m
    # This function has the time complexity of O(n^2+m)

    # O(n+m)
    for i in range(len(n)):
        print(n[i])
    for i in range(len(m)):
        print(m[i])
    # O(n^2.m)
    for i in range(len(n)):
        for j in range(len(n)):
            for i in range(len(m)):
                print(n[i], n[j], m[i])


# print_num([10])
# print_str('Pollab')
print_str_num("nola", [1, 2, 3, 'u'])
