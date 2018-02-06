
#include <stdio.h>


// 第六十题: 一个字符串中查找第一个只出现一次的字符。 要求复杂度为 O(N).
// 例如:
// 字符串:”aaaabfqccrbdw",返回 f.


// 第五十七题:
// 实现一个直接插入排序,排序整形数组

/*
// 第五十六题:
// 一个数组中只有两个数字是出现一次,其他所有数字都出现了两次。
// 找出这两个数字,编程实现

int main()
{
    int a[] = {2, 1, 8, 4, 5, 3, 8, 5, 9, 3, 2, 1};
    int i = 0, sum = 0, num = sizeof(a)/sizeof(a[0]);
    for (; i < num; i++) {
        sum ^= a[i]; // sum为这两个数字异或后的结果, 且sum肯定不为0
    }
    int m1 = 0, m2 = 0;
    for (i = 0; i < num; i++) {
        if ( ((sum ^ a[i]) & 1) == 1) {
            m1 ^= a[i];
        }
        else {
            m2 ^= a[i];
        }
    }
    printf("%d %d\n", m1, m2);
    return 0;
}


// 第五十五题:
// 模拟实现 strncat 函数。
char* my_strncat(char* des, const char* src, int n)
{
    char* p = des;
    while (*des++) {
        ;
    }
    --des;
    int i = 0;
    for ( ; i < n; i++) {
        *des++ = src[i];
    }
    *des = '\0';
    return p;
}


int main()
{
    char a[] = "hello";
    char b[] = " world!";
    printf("%s\n", my_strncat(a, b, 7));
    return 0;
}


// 第五十四题:
// 判断一个字符串是否为另外一个字符串旋转之后的字符串。
// 例如:给定 s1 = AABCD 和 s2 = BCDAA,返回 1,给定 s1=abcd 和 s2=ACBD,返回 0.
// AABCD 左旋一个字符得到 ABCDA AABCD 左旋两个字符得到 BCDAA
// AABCD 右旋一个字符得到 DAABC AABCD 右旋两个字符得到 CDAAB

// 第五十三题:
// 实现一个函数,可以左旋字符串中的 k 个字符。
// AABCD 左旋一个字符得到 ABCDA
// AABCD 左旋两个字符得到 BCDAA

int main()
{
    
    return 0;
}


// 第五十二题:
// 写一个递归函数 DigitSum(n),输入一个非负整数,返回组成它的数字之和,例如,调用 DigitSum(1729),则应该返回 1+7+2+9,它的和是 19

int DigitSum(int n)
{
    if (n == 0) {
        return 0;
    }
    return DigitSum(n/10) + n % 10;
}

int main()
{
    printf("%d\n", DigitSum(1792));
    return 0;
}


// 第五十一题:
// 编写一个函数实现 n^k,使用递归实现

int power(int n, int k)
{
    if (k == 1) {
        return n;
    }
    return n*power(n, k-1);
}


int main()
{
    printf("%d\n", power(2,4));
    return 0;
}


// 第五十题:
// 一组数据中只有一个数字出现了一次。
// 其他所有数字都是成对出现的。请找出这个数字。(使用位运算)

int main()
{
    int a[] = {2, 1, 8, 5, 3, 8, 5, 9, 3, 2, 1};
    int i = 0;
    int sum = 0;
    for (; i < sizeof(a)/sizeof(a[0]); i++) {
        sum ^= a[i];
    }
    printf("%d\n", sum);
    return 0;
}


// 第四十九题:
// 在屏幕上打印杨辉三角。

int tri[100][100];

void triangle(int n)
{
    int i;
    for ( i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            if (j == 1 || j == i) {
                tri[i][j] = 1;
            } else {
                tri[i][j] = tri[i-1][j-1] + tri[i-1][j];
            }
        }
        for (int j = 1; j <= n-i; j++) {
            printf("  ");
        }
        for (int j = 1; j <= i; j++) {
            printf("%4d", tri[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    triangle(6);
    return 0;
}


// 第四十八题: (编程实现)日本某地发生了一件谋杀案,警察通过排查确定杀人凶手必为 4 个嫌疑犯的 一个。以下为 4 个嫌疑犯的供词。
// A 说:不是我。
// B 说:是 C。
// C 说:是 D。
// D 说:C 在胡说
// 已知 3 个人说了真话,1 个人说的是假话。 现在请根据这些信息,写一个程序来确定到底谁是凶手。

int main()
{
    char killer;
    for (killer = 'A'; killer <= 'D'; ++killer) {
        if ( (killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D') == 3) {
            printf("killer is %c\n", killer);
        }
    }
    return 0;
}


// 第四十七题:
// (编程实现)5 位运动员参加了 10 米台跳水比赛,有人让他们预测比赛结果(可重名词)
// A 选手说: B 第一,我第三。
// B 选手说: 我第二,E 第四。
// C 选手说: 我第一,D 第二。
// D 选手说: C 最后,我第三。
// E 选手说: 我第四,A 第一。 比赛结束后,每位选手都说对了一半,请编程确定比赛的名次。

// 题目有点问题？一定有人并列，否则无答案，这里按有并列来算可算出多组答案。

int main()
{
    int A, B, C, D, E;
    for (A = 1; A <= 5; A++) {
        for (B = 1; B <= 5; B++) {
            for (C = 1; C <= 5; C++) {
                for (D = 1; D <= 5; D++) {
                    for (E = 1; E <= 5; E++) {
                        if ((B == 1) + (A == 3) == 1 && (B == 2) + (E == 4) == 1 && (C == 1) + (D == 2) == 1 && (C == 5) + (D == 3) == 1 && (E == 4) + (A == 1) == 1) {
                            printf("A:%d B:%d C:%d D:%d E:%d\n", A, B, C, D, E);
                        }
                    }
                }
            }
        }
    }
    return 0;
}


// 第四十六题:
// 求出 0~999 之间的所有“水仙花数”并输出。“水仙花数”是指一个三位数,其各位数字的立 方和确好等于该数本身,如;153=1+5+3?,则 153 是一个“水仙花数”。

// 在数论中,水仙花数(Narcissistic number)也称为自恋数、自幂数、阿姆斯壮数或阿姆斯 特朗数(Armstrong number),是指一 N 位数,其各个数之 N 次方和等于该数。
// 例如 153、370、371 及 407 就是三位数的水仙花数,其各个数之立方和等于该数:
// 153 = 1^3 + 5^3 + 3^3。
// 370 = 3^3 + 7^3 + 0^3。
// 371 = 3^3 + 7^3 + 1^3。
// 407 = 4^3 + 0^3 + 7^3。

// 水仙花数必须 N >= 3
int main()
{
    int a, b, c;
    for (int i = 100; i <= 999; i++) {
        a = i % 10; // 个位
        b = (i / 10) % 10; // 十位
        c = (i / 100) % 10; // 百位
        if (i == a*a*a + b*b*b + c*c*c) {
            printf("%d\n", i);
            
        }
    }
    return 0;
}


// 第四十五题:[百度笔试题]
// 使用 c 语言编写函数:
// unsigned int reverse_bit(unsigned int value);
// 这个函数的返回 值 value 的二进制位模式从左到右翻转后的值。
// 如在 32 位机器上 25 这个值包含下列各位: 00000000000000000000000000011001 翻转后:(2550136832) 10011000000000000000000000000000 程序结果返回: 2550136832


// 第四十四题:
// 使用 c 语言实现求解:
// 有一个字符串是“student a am i”,现编写代码将字符串转换为“i am a student”. 要求:空间复杂度是 O(1);

void reverse(char* left, char* right)
{
    char tmp;
    while (left <= right) {
        tmp = *left;
        *left = *right;
        *right = tmp;
        left++;
        right--;
    }
}

void change(char* ptr)
{
    char* start = ptr;
    char* left = ptr;
    while (*ptr) {
        if (*ptr == ' ') {
            reverse(left, ptr-1);
            left = ptr + 1;
        }
        ++ptr;
    }
    reverse(start, --ptr);
}

int main()
{
    char a[] = "student a am i";
    change(a);
    printf("%s\n", a);
    return 0;
}


// 第四十三题:
// 使用 c 语言编程实现: 一个函数可以求任意多个整数的平均值。(使用可变参数列表)



// 第四十二题:
// 使用 c 语言编写程序求解:
// 1 元钱一瓶汽水,喝完后两个空瓶换一瓶汽水,问:你有 20 元钱,最多可以喝到几瓶汽水? (编程实现)

int drinks(int money)
{
    int sum = money;
    int none = money;
    while (none/2) {
        sum += none/2;
        none = none/2 + none%2;
    }
    return sum;
}

int main()
{
    printf("%d\n", drinks(20));
    return 0;
}


// 第四十一题:
// 使用 c 语言编写一个函数: 将一个数字字符串转换为对应的数字,不考虑溢出。(比如“12.34”转换为数字:12.34), 功能类似库函数 atof,考虑异常输入。

double my_atof(const char* src)
{
    int sign = 1;
    double sum = 0;
    while (*src == ' ' || *src == '\t') {
        src++;
    }
    if (*src == '-') {
        sign = -1;
        src++;
    }
    double i = 1;
    while (*src) {
        if (*src == '.') {
            while (*++src && *src >= '0' && *src <= '9') {                    i *= 0.1;
                sum += (*src - '0') * i;
            }
        } else if (*src >= '0' && *src <= '9') {
            sum = sum*10 + *src++ - '0';
        } else {
            return sum*sign;
        }
    }
    return sum*sign;
}

int main()
{
    char a[] = "  -12.3fd4";
    printf("%g\n", my_atof(a));
    return 0;
}
*/
///////////////////////////////////////////////////////////////////////

// 第四十题:
// 使用 c 语言别编写一个函数:
// 实现内存的设置,功能类似于 memset,可以以字节为单位设置内存的值,不能使用任何 库函数。(函数原型自己设计)

// 第三十九题:[笔试题]
// 使用 c 语言编写一个函数:
// 实现内存的移动,功能类似于 memmove,实现内存重叠拷贝,不能使用任何库函数。(函 数原型自己设计)


// 第三十八题:[笔试题]
// 使用 c 语言编写一个函数:
// 实现内存的拷贝,功能类似于 memcpy,可以不实现内存重叠拷贝,不能使用任何库函数。 (函数原型自己设计)
///////////////////////////////////////////////////////////////////////

/*
// 第三十七题:[笔试题]
// 使用 c 语言编写一个函数:
// 实现字符串的比较,功能类似于与 strcmp,不能使用任何库函数。(函数原型自己设计)

int my_strcmp(const char* str1, const char* str2)
{
    while (*str1 == *str2) {
        if (*str1 == '\0') {
            return 0;
        }
        str1++;
        str2++;
    }
    return *str1 > *str2 ? 1 : -1;
}

int main()
{
    char a[] = "abdb";
    char b[] = "abdb";
    printf("%d", my_strcmp(a, b));
    return 0;
}


// 第三十六题:[笔试题]
// 使用 c 语言编写一个函数:
// 实现字符串的链接,功能类似于 strcat,不能使用任何库函数。(函数原型自己设计)

char* my_strcat(char* des, const char* src)
{
    char* p = des;
    while (*des++) {
        ;
    }
    des--;
    while (*des++ = *src++) {
        ;
    }
    return p;
}

int main()
{
    char a[] = " world!";
    char b[] = "hello";
    printf("%s\n", my_strcat(b, a));
    return 0;
}


// 第三十五题:[笔试题]
// 使用 c 语言编写一个函数:
// 实现字符串的拷贝,功能类似 strcpy,不能使用任何库函数。(函数原型自己设计)

char* my_strcpy(char* des, const char* src)
{
    char* p = des;
    while (*des++ = *src++) {
        ;
    }
    return p;
}

int main()
{
    char a[] = "hello world!";
    char b[100];
    printf("%s\n", my_strcpy(b, a));
    return 0;
}


// 第三十四题:
// 使用 c 语言编写一个程序,当输入小写字母 a,输出大写字母 Z,当输入小写字母 b,输出 大写字母 Y,以此类推,当输入小写字母 z,输出大写字母 A。
// 要求时间复杂度为 O(1);

int main()
{
    char ch;
    scanf("%c", &ch);
    if (ch >= 'a' && ch <= 'z') {
        printf("%c\n", 'Z' - ch + 'a');
    }
    return 0;
}


// 第三十三题:[字符]
// 使用 c 语言编写一个程序:从标准输入读取字符,并把他们写到标准输出。除了大写字母 转换成小写字母之外,其他的原样输出。
int main()
{
    char arr[1000];
    scanf("%s", arr);
    int i = 0;
    for ( ; arr[i] != '\0'; i++) {
        if ( arr[i] >= 'A' && arr[i] <= 'Z') {
            printf("%c", arr[i] - 'A' + 'a');
        }
        else {
            printf("%c", arr[i]);
        }
    }
    printf("\n");
    return 0;
}


// 第三十二题:[笔试题]
// 使用 c 语言编写一个函数,它从一个字符串中提取一个子字符串。函数原型如下:
// int substr(char dst[], char src[],int start, int len){}
// 目标是:从 src 数组起始位置向后偏移 start个字符的位置开始,最多复制len个非 NUL 字符到 dst 数组。在复制完毕之后, dst 数组必须以 NUL 字节结尾。函数的返回值是存储于 dst 数组中的字符串的长度。

int substr(char dst[], char src[],int start, int len)
{
    int num = 0;
    while ( len-- && src[start] != '\0') {
        dst[num++] = src[start++];
    }
    dst[num++] = '\0';
    return num;
}

int main()
{
    char dst[10];
    char src[] = "hello world!";
    int num = substr(dst, src, 2, 5);
    int i = 0;
    for ( ; i < num; i++) {
        printf("%c",dst[i]);
    }
    printf("\n%d\n",num);
    return 0;
}


// 第三十一题:[笔试题]
// 使用 c 语言编写程序: 将一个字符串内容逆序。如:一个字符数组内容是:arr[ ] = “bit-tech”; 经过逆序之后数组的内容变为:“hcet-tib”。
#include <string.h>

void reverse(char ch[])
{
    unsigned long num = strlen(ch);
    unsigned long i = 0;
    unsigned long j = num - 1;
    while (i <= j) {
        char tmp = ch[i];
        ch[i] = ch[j];
        ch[j] = tmp;
        i++;
        j--;
    }
}

int main()
{
    char arr[] = "bit-tech";
    reverse(arr);
    printf("%s\n", arr);
    return 0;
}


// 第三十题:
// 使用 c 语言编写程序: 在字符串中查找一个指定的字符第一次出现的位置,并返回字符所在的位置,如果不存在则返回 NULL。
#include <string.h>

char* search_char(char a[], char k)
{
    int i = 0;
    char* p = a;
    while (a[i] != '\0') {
        if (a[i] == k) {
            return p+i;
        }
        i++;
    }
    return NULL;
}


int main()
{
    char a[] = "hello world";
    char* p = search_char(a, 'k');
    if (p != NULL) {
        printf("%c\n", *p);
    }
    else
        printf("未找到！\n");
    
    return 0;
}


// 第二十九题:
// 使用 c 语言编写程序:[腾讯笔试题] 程序接收一个整数输入,输出该整数的每一位。 如:接收数字:1234
// 输出:1、2、3、4 四个数字。
void print_num(int n)
{
    if (n == 0) {
        return;
    }
    print_num(n/10);
    printf("%d ",n%10);
    
}

int main()
{
    int a = 1234;
    print_num(a);
    
    return 0;
}


// 第二十八题:[笔试题]
// 使用 c 语言编写程序:求 1-100 这 100 个整数中 9 出现的次数。

int main()
{
    int i = 1;
    int num = 0;
    for ( ; i <= 100; i++) {
        if ( i%10 == 9 || (i/10)%10 == 9 ) {
            num++;
            if ( i%10 == 9 && (i/10)%10 == 9) {
                num++;
            }
        }
    }
    printf("%d\n", num);
    return 0;
}


// 第二十七题:[经典笔试题]
// 使用 c 语言编写程序:不允许创建第三方变量交换两个数的值
int main()
{
    int a = 15, b = 20;
    //    a = a^b;
    //    b = a^b;
    //    a = a^b; // 法一
    a = a + b;
    b = a - b;
    a = a - b; // 法二
    
    return 0;
}
///////////////////////////////////////////////////////////////////////

// 第二十六题:[百度笔试题]
// 使用 c 语言编写程序:编写程序判断你的电脑存储方式是大端存储还是小端? (大端、小端概念不清楚的可以上网搜索了解。)


// 第二十五题:[谷歌笔试题]【可不断优化】
// 使用 c 语言编写程序:求一个数的二进制序列中 1 的个数。(比如:十进制 5 的二进制表 示为:00000000 00000000 00000000 00000101,其中有 2 个 1,所以程序的结果是 2)。

///////////////////////////////////////////////////////////////////////

// 第二十四题:
// 使用 c 语言编写程序:对任意一个整形数组排序。(使用选择排序法)

int Min(int a[], int now, int num)
{
    int min = now;
    for (int i = now + 1; i < num; i++) {
        if (a[i] < a[min]) {
            min = i;
        }
    }
    return min;
}

void SelectSort(int a[], int num)
{
    int now = 0;
    for ( ; now < num; now++) {
        int min = Min(a, now, num);
        if (min != now) {
            int tmp = a[min];
            a[min] = a[now];
            a[now] = tmp;
        }
    }
}

int main()
{
    int a[] = {3, 1, 5, 2, 6};
    SelectSort(a, sizeof(a) / sizeof(a[0]));
    for (int i = 0; i < sizeof(a) / sizeof(a[0]); ++i) {
        printf("%d  ", a[i]);
    }
    return 0;
}


// 第二十三题:
// 使用 c 语言编写程序:不允许创建临时变量求一个字符串的长度。

#include <string.h>

int my_strlen(const char* ptr)
{
    if (*ptr == '\0') {
        return 0;
    }
    return my_strlen(++ptr) + 1;
}

int main()
{
    char a[] = "hdau as";
    printf("%d\n", my_strlen(a));
    return 0;
}


// 第二十二题:
// 使用 c 语言编写程序: 编写一个函数可以求字符串的长度。(不能使用任何库函数)。

int my_strlen(const char* ptr)
{
    int i = 0;
    while (*ptr++) {
        ++i;
    }
    return i;
}

int main()
{
    char a[] = "hdau as";
    printf("%d\n",my_strlen(a));
    return 0;
}


// 第二十一题:
// 使用 c 语言编写程序:用非递归的方式求斐波那契数列的第 n 个数。
int main()
{
    int n;
    scanf("%d", &n);
    if (n <= 2) {
        printf("1\n");
    }
    else {
        int a1 = 1;
        int a2 = 1;
        int a3 = 0;
        n = n-2;
        while (n--) {
            a3 = a1 + a2;
            a1 = a2;
            a2 = a3;
        }
        printf("%d\n", a3);
    }
    return 0;
}


// 第二十题:
// 使用 c 语言编写程序:用递归的方式求斐波那契数列的第 n 个数。
int fibonacci(int n)
{
    if (n <= 2) {
        return 1;
    }
    return fibonacci(n-1) + fibonacci(n-2);
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d\n", fibonacci(n));
}


// 第十九题:
// 使用 c 语言编写程序,将多个字符串排序输出。 比如:有三个字符串分别是:“hello”、“bit-tech”、“world”。然后排序之后输出的顺序为: “bit-tech”、“hello”、“world”。
#include <string.h>
void string_sort(char a[][10], int n)
{
    int i = 0;
    for ( ; i < n-1; i++) {
        if( strcmp(a[i], a[i+1]) > 0) {
            char tmp[1000];
            strcpy(tmp, a[i]);
            strcpy(a[i], a[i+1]);
            strcpy(a[i+1], tmp);
        }
    }
}

int main()
{
    char a[3][10] = {"hello","bit-tech","world"};
    string_sort(a, 3);
    int i = 0;
    for ( ; i < 3; i++) {
        printf("%s\n", a[i]);
    }
    return 0;
}


// 第十八题:
// 使用 c 语言编写程序:对任意一个整形数组排序。(使用冒泡排序法)

void bubble_sort(int a[], int n)
{
    int i = 0;
    for ( ; i < n - 1; i++) {
        int j = 0;
        int flag = 0;
        for ( ; j < n - i - 1; j++) {
            if (a[j] > a[j+1]) {
                int tmp = a[j];
                a[j] = a[j+1];
                a[j+1] = tmp;
                flag = 1;
            }
        }
        if (flag == 0) {
            break;
        }
    }
}

int main()
{
    int a[10] = {10,9,8,7,6,5,4,3,2,1};
    bubble_sort(a, 10);
    int i = 0;
    for ( ; i < 10; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}


// 第十七题:
// 使用 c 语言编写程序:
// 将一个整形数组逆序,如:数组 a[5] ={1,2,3,4,5},逆序之后数组 a 的内容变为 {5,4,3,2,1};
#include <string.h>

void reverse(char ch[])
{
    unsigned long num = strlen(ch);
    unsigned long i = 0;
    unsigned long j = num - 1;
    while (i <= j) {
        char tmp = ch[i];
        ch[i] = ch[j];
        ch[j] = tmp;
        i++;
        j--;
    }
}

int main()
{
    
    char ch[100] = "abcdefg";
    reverse(ch);
    printf("%s\n", ch);
    return 0;
}


// 第十六题:
// 使用 c 语言编写程序:求一个 3*3 矩阵对角线元素之和 。
int main()
{
    
    int i = 0;
    int a[3][3] = {1,2,3,4,5,6,7,8,9};
    int sum = 0;
    for ( ; i < 3; i++) {
        int j = 0;
        for ( ; j < 3; j++) {
            if (i == j) {
                sum += a[i][j];
            }
        }
    }
    printf("%d\n",sum);
    return 0;
}



// 第十五题:
// 使用 c 语言编写程序: 判断一个字符串是否为回文字符串。(回文字符串说一个字符串,但是原字符串和字符串 逆序之后一样,比如:“abcba”,“cddc”就是回文字符串)。
#include <string.h>

int judge(char ch[])
{
    unsigned long num = strlen(ch);
    unsigned long i = 0;
    unsigned long j = num - 1;
    while (i <= j) {
        if (ch[i] != ch[j]) {
            return 0;
        }
        i++;
        j--;
    }
    return 1;
}

int main()
{
    
    char ch[100] = "abcdcba";
    printf("%d\n", judge(ch));
    return 0;
}


// 第十四题:
// 使用 c 语言编写程序: 判断一个数是否为回文数。(回文数也是一个数字,数字的特点是正反序是同一个数字, 如:12321,3443 就是回文数)
int judge(int a)
{
    char ch[100];
    int num = 0;
    while (a != 0) {
        ch[num++] = a % 10 - '0';
        a /= 10;
    }
    int i = 0;
    int j = num - 1;
    while (i <= j) {
        if (ch[i] != ch[j]) {
            return 0;
        }
        i++;
        j--;
    }
    return 1;
}

int main()
{
    
    int a = 1231321;
    printf("%d\n", judge(a));
    return 0;
}


// 第十三题:
// 使用 c 语言编写程序求解: 1+2!+3!+...+20!的和。(20!表示 20 的阶乘)
long long sum_factorial(int a)
{
    if (a == 1) {
        return 1;
    }
    long long i = 1;
    long long sum = 1;
    for ( ; i <= a; i++) {
        sum *= i;
    }
    return sum + sum_factorial(a-1);
}

int main()
{
    long long ret = sum_factorial(5);
    
    printf("%lld\n", ret);
    
    return 0;
}


// 第十二题:
// 使用 c 语言编程求解: 猴子吃桃问题:猴子第一天摘下若干个桃子,当即吃了一半,还不瘾,又多吃了一个,第二天早上又将剩下的桃子吃掉一半,又多吃了一个。以后每天早上都吃了前一天剩下的一半零一个。到第 10 天早上想再吃时,见只剩下一个桃子了。求第一天共摘了多少。

int main()
{
    int n = 1;
    int i = 1;
    for ( ; i <= 10; i++) {
        n = (n+1)*2;
    }
    printf("%d\n", n);
    return 0;
}


// 第十一题:
// 使用 c 语言编写程序求解:
// 一球从 100 米高度自由落下,每次落地后反跳回原高度的一半;再落下,求它在第 10 次 落地时,共经过多少米?第 10 次反弹多高?

int main()
{
    double height = 50;
    double sum = 100;
    int n = 9;
    while (n--) {
        sum += height*2;
        height /= 2;
        
    }
    printf("总长：%lf 高度：%lf\n", sum, height);
    return 0;
}


// 第十题:
// 使用 c 语言编写程序求解:
// s=a+aa+aaa+aaaa+aa...a 的值,其中 a 是一个数字。例如 2+22+222+2222+22222(此时 a = 2,共有 5 个数相加)其中 a 和个数 n 由键盘输入控制)。

int main()
{
    int a,n;
    scanf("%d%d",&a,&n);
    int i = 1;
    int sum = 0;
    for ( ; i <= n; i++) {
        sum = sum *10 + a*i;
    }
    printf("%d\n",sum);
    return 0;
}



// 第九题:[循环]
// 使用 c 语言编写程序,求解: 有一分数序列:2/1,3/2,5/3,8/5,13/8,21/13...求出这个数列的前 20 项之和。
// sum = 32.6602607986

int main()
{
    double a = 2;
    double b = 1;
    double sum = 0;
    int i = 1;
    for ( ; i <= 20; i++) {
        sum += a/b;
        int tmp = a;
        a = a + b;
        b = tmp;
    }
    
    printf("%lf\n",sum);
    
}


// 第八题:[循环]
// 使用 c 语言编写程序解决下面问题:
// 有 1、2、3、4 个四个数字,能组成多少个互不相同且无重复数字的三位数?都是多少? (程序分析:可填在百位、十位、个位的数字都是 1、2、3、4。组成所有的排列后再去掉 不满足条件的排列)。

int main()
{
    int i = 1;
    int num = 0;
    for ( ; i <= 4; i++) {
        int j = 1;
        for ( ; j <= 4; j++) {
            int k = 1;
            for ( ; k <= 4; k++) {
                if (i == j || i == k || j == k) {
                    continue;
                }
                printf("%d%d%d\n",i,j,k);
                ++num;
            }
        }
    }
    printf("共有%d种\n",num);
    return 0;
}



// 第七题:
// 使用 c 语言编写程序,交换两整数的值

int main()
{
    int a = 15, b = 20;
    //    a = a^b;
    //    b = a^b;
    //    a = a^b;
    a = a + b;
    b = a - b;
    a = a - b;
    
    return 0;
}


// 第六题:
// 使用 c 语言编写程序,求两个整数的最小公倍数。
int gcd(int a, int b);

int lcm(int a, int b)
{
    return a*b/gcd(a, b);
}


// 第五题:[辗转相除]
// 使用 c 语言编写程序,求两个整数的最大公约数。

int gcd(int a, int b)
{
    int x = ( a > b ) ? a : b; // 大数
    int y = ( a < b ) ? a : b; // 小数
    while ( x%y != 0) {
        b = x%y;
        x = y;
        y = b;
    }
    return y;
}

int main()
{
    printf("%d\n",lcm(15,20));
    
    return 0;
}


// 第四题:[循环、分支]
// 使用 c 语言编写程序,求 1 到 100 之间的素数。
// 2、3、5、7、11、13、17、19、23、29、31、37、41、43、47、53、59、61、67、71、73、79、83、89、97
// 法三：素数筛法
int main()
{
    int prime[25]; // 确定大致范围 x/lnx
    int judge[101] = {0}; // 素数为0，合数为1
    int num = 0;
    int i = 2;
    for ( ; i <= 100; i++) {
        if (judge[i] == 0) {
            prime[num++] = i;
        }
        int j = 0;
        for ( ; j < num && i*prime[j] <= 100; j++) {
            judge[i*prime[j]] = 1;
            if ( i%prime[j] == 0) { // 最重要的步骤
                break;
            }
        }
    }
    for (i = 0; i < num; i++) {
        printf("%d ",prime[i]);
    }
    
    return 0;
}


// 法二：试除法，效率比第一个方法略高，每次只需除已求出来的质数，以空间换时间，但仍不是最好方法
int main()
{
    int prime[25] = {2};
    int num = 0;
    int n = 3;
    for ( ; n <= 100; n++) {
        int i = 0;
        int flag = 0;
        for ( ; i <= num; i++) {
            if (n % prime[i] == 0) {
                flag = 1;
                break;
            }
        }
        if (flag == 0) {
            prime[++num] = n;
        }
    }
    int i = 0;
    for ( ; i <= num; i++) {
        printf("%d ",prime[i]);
    }
    return 0;
}


// 法一：普通试除法，效率最低
#include <math.h>
int main()
{
    printf("2 ");
    int n = 3;
    for ( ; n <= 100; n += 2) {
        int i = 2;
        int flag = 0;
        for ( ; i <= sqrt((double)n); i++) {
            if (n%i == 0) {
                flag = 1;
                break;
            }
        }
        if (flag == 0) {
            printf("%d ",n);
        }
        
    }
    
    return 0;
}


// 第三题:[循环]
// 使用 c 语言编写程序,求 10 个整数中的最大值。
int main()
{
    int a[10] = {8,4,3,6,2,10,9,1,7,5};
    int max = a[0];
    int i = 1;
    for ( ; i < 10; i++) {
        if (max < a[i]) {
            max = a[i];
        }
    }
    printf("%d\n",max);
    return 0;
}


// 第二题:[分支判断]
// 使用 c 语言编写程序,求两个整数的较大值。

int max(int a, int b) {
    return  (a > b) ? a : b;
}
int main()
{
    printf("%d\n", max(5, 6));
    return 0;
}


// 第一题:[循环]
// 使用 c 语言编写程序,在屏幕上打印 9*9 乘法口诀表。
int main(int argc, const char * argv[]) {
    int i = 1;
    for ( ; i <= 9; i++) {
        int j = 1;
        for ( ; j <= i; j++) {
            printf("%d*%d=%-2d ", j, i, i*j);
        }
        printf("\n");
    }
    return 0;
}
*/
