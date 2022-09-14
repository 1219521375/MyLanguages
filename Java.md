# JAVA语言笔记
## 基本语法
### 数组
**数组长度**
```
int[] arr = arr[10];
arrlen = arr.length;
```

#### 数组常用类Arrays
**数组切片**
与python中一样按下表遵循左闭右开。
```
int[] test_int = new int[] { 1, 2, 3, 4, 5};
test_int = Arrays.copyOfRange(test_int, 1, 4);
System.out.println(Arrays.toString(test_int)); // [2,3,4]
```
**数组排序**
使用`Arrays.sort()`方法可以对数组进行升序排列，对基本数据类型（byte,short,int,long,float,double,boolean,char）使用双枢轴快速算法（快排改进版本），对引用对象数组使用TimSort（一个对归并排序做了大量优化的版本）。
```
int[] arr = new int[] {1,5,2,4,3};
Arrays.sort(arr); 
// arr:[1,2,3,4,5]
```
### for each

## 常用类
