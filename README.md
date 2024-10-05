# fat.c
File Allocation Table in c (any size, you can change by chaging value on #define MAX number) with include read and write, no memory allocated

# DO NOT:
edit write or read functions as it can mess up (unless you know what your doning but then on your own)
also maded for learning popurces how fat (File Allocation Table) works and how implement (this case with standard library, if you don't have this case you need make your own, sry)

# How to use it:

1. write memory using write(your fat cluster, index, string, next index)
2. read memory using read (fat cluster, intial index)

# how it work?
1. **reading:**

it works by starting an index, print data content index, then goning on next, you can see on this table:
| Cluster Index | FAT Value | Data Content    |
|---------------|-----------|-----------------|
|       0       |     1     | "Hello, "       |
|       1       |     2     | "FAT "          |
|       2       |    -1     | "filesystem!"   |
|       3       |    -1     | ""              |
|       4       |    -1     | ""              |
|       5       |    -1     | ""              |

with prints:
"Hello, FAT filesystem!"

2. **writing:**

works by  goning to desired index, replace with the string, and put next index, you can see like this:

**before:**
| Cluster Index | FAT Value | Data Content |
|---------------|-----------|--------------|
|       0       |    -1     |      ""      |
|       1       |    -1     |      ""      |

            
**after:** 
| Cluster Index | FAT Value | Data Content |
|---------------|-----------|--------------|
|       0       |     1     |   "Hello"    |
|       1       |    -1     |      ""      |



i hope you liked it
