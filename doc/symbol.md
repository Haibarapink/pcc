# 符号表实现

符号表是编译器用来管理变量，常量，标号等符号的数据结构。

```c++
int x,y;
void f(int x, int y) {
    int a;
    {
        int a = 2;
        x += 2;
    }
    a = x;
    x += a;
}
```

