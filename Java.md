# JAVA语言笔记
## 基本语法
### Java输入输出
```
import java.util.Scanner;
Scanner scanner = new Scanner(System.in);
String s1 = scanner.next(); //单个字符串（单词）
String s2 = scanner.nextLine(); //一整行，自动过滤空格tab
int i = scanner.nextInt(); //其他类型相同

// 注意 hasNext 和 hasNextLine 的区别,同理用for或while接受数组输入
while (scanner.hasNextInt()&&!endFlag) { // 注意 while 处理多个 case
  //pass
}

//对于某些格式化输入，可以使用string类型读入后使用split函数进行分割。
```
### 数组
**数组定义及初始化**
java数组中数值类型的默认值为0，char类型的默认值为0，布尔类型的默认值为false，String类型的默认值为null。
```
int[] arr = new int[10];  // {0,0,0,0,...,0}
int[] arr = {1,2,3,4,5};
```
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
对于二维数组，需要重写compareto方法，比较简单的情况可以使用lamda表达式。
```
int[][] arr;
Arrays.sort(arr, (o1, o2) -> o1[0] - o2[0]);//以每个元素的第一个元素升序排序
```
### for each

## 常用类
