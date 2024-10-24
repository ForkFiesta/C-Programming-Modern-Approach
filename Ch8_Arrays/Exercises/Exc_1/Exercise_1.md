1. Why is `sizeof(a) / sizeof(t)`, where t is the type. inferior compared to `sizeof(a) / sizeof(a[0])`?

- Probably because the size of the type can vary between compilers and CPUs, and may impact expected performance and portability
