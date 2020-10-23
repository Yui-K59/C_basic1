#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

void print_hello(int n);
int kadai2_sum(int a, int b);	//a,bは任意で入力される引数
int kadai2_sub(int a, int b);	//a,bは任意で入力される引数
int kadai2_mul(int a, int b);	//a,bは任意で入力される引数
int kadai2_div(int a, int b);	//a,bは任意で入力される引数
int kadai2_rem(int a, int b);	//a,bは任意で入力される引数
void kadai2();					//整数値a,bが関数内で入力される
void kadai3(int n);				//n:判定する整数値
void kadai4(int n);				//n:判定する整数値
void kadai5(int n);				//n:判定する整数値
void kadai6(int n);				//n:判定する整数値
void kadai9();
void kadai10();
void print_array(int a[],int n);	//a[]:表示する配列
void input_array(int a[],int n);	//a[]:値を入力する配列
int kadai11(int a[], int n);
int kadai12(int a[], int n);
int kadai13(int a[], int n);
void kadai14();
void kadai15();
void kadai16();
int kadai17(int a[]);
void kadai18();
char* kadai19(char str[], char s[]);
int kadai25(int n);
int min3(int x, int y, int z);



void print_hello(int n) {
	int i = 0;
	for (i = 0; i < n; i++) {
		printf("Hello World!\n");
	}
}

int kadai2_sum(int a, int b) {
	int ans = 0;
	ans = a + b;
	return ans;
}

int kadai2_sub(int a, int b) {
	int ans;
	ans = a - b;
	return ans;
}

int kadai2_mul(int a, int b) {
	int ans;
	ans = a * b;
	return ans;
}

int kadai2_div(int a, int b) {
	int ans;
	ans = a / b;
	return ans;
}

int kadai2_rem(int a, int b) {
	int ans;
	ans = a % b;
	return ans;
}

void kadai2() {
	int a, b;
	printf("整数aとbを入力してください\n");
	printf("a:");
	scanf_s("%d", &a);
	printf("b:");
	scanf_s("%d", &b);
	printf("a=%d, b=%d\n", a, b);
	printf("和\n");
	printf("a+b=%d\n", kadai2_sum(a, b));
	printf("差\n");
	printf("a-b=%d\n", kadai2_sub(a, b));
	printf("b-a=%d\n", kadai2_sub(b, a));
	printf("積\n");
	printf("a*b=%d\n", kadai2_mul(a, b));
	printf("商\n");
	printf("a/b=%d…%d\n", kadai2_div(a, b), kadai2_rem(a, b));
	printf("b/a=%d…%d\n", kadai2_div(b, a), kadai2_rem(b, a));
}

void kadai3(int n) {
	printf("0かどうか:");
	if (n == 0) {
		printf("zero\n");
	}
	else {
		printf("not zero\n");
	}
}

void kadai4(int n) {
	printf("正負:");
	if (n == 0) {
		printf("zero\n");
	}
	else if (n > 0) {
		printf("positive\n");
	}
	else if (n < 0) {
		printf("negative\n");
	}
	else {
		//NR
	}
}

void kadai5(int n) {
	printf("偶奇:");
	if (n % 2 == 0) {
		printf("even\n");
	}
	else if (n % 2 == 1) {
		printf("odd\n");
	}
	else {
		//NR
	}
}

void kadai6(int n) {
	printf("絶対値:");
	if (n >= 0) {
		printf("%d\n", n);
	}
	else if (n < 0) {
		printf("%d\n", n);
	}
}

void kadai9() {
	int n;
	int i;
	printf("整数値を入力してください:");
	scanf_s("%d", &n);
	if (n >= 0) {
		for (i = 0; i <= n; i++) {
			printf("%d\n", i);
		}
	}
	else {
		printf("プログラムを使用できませんでした。\n");
	}
}



void kadai10() {
	int n = 0;
	printf("プログラムを終了します。\n0を入力してください:");
	scanf_s("%d", & n);

	while (n != 0) {
		printf("0が入力されていません。\nもう一度0を入力してください:");
		scanf_s("%d", &n);
	}
	exit(0);
}

void print_array(int a[],int n) {
	int i = 0;
	for (i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
}

void input_array(int a[],int n) {
	int i = 0;
	printf("要素数%dの配列に整数値を代入してください。\n", n);
	for (i = 0; i < n; i++) {
		printf("%d番目:", i + 1);
		scanf_s("%d", &a[i]);
	}
	
}

int kadai11(int a[],int n) {
	int i = 0;
	printf("要素数10の配列を表示します。\n");
	for (i = 0; i < 10; i++) {
		a[i] = i;
	}
	print_array(a,n);
	printf("\n");
	return 0;
}

int kadai12(int a[],int n) {
	int i = 0;
	input_array(a,n);
	printf("作成された配列は\n");
	print_array(a,n);
	printf("です。\n");
	return 0;
}

int kadai13(int a[],int n) {
	int i = 0;

	input_array(a,n);
	printf("作成された配列は\n");
	print_array(a,n);
	return 0;
}

void kadai14() {
	int n = 0;
	int ans = 0;
	printf("1から入力値までの総和を計算します。\n整数値を入力してください:");
	scanf_s("%d", &n);
	if (n <= 0) {
		printf("0\n");
	}
	else if (n > 0) {
		ans = (1 + n) * n / 2;
		printf("1から%dまでの総和は%dです。\n",n,ans);
	}
	else {
		//NR
	}
}

void kadai15() {
	int n = 0;
	int i=1;
	int ans = 1;
	printf("1から入力値までの階乗を計算します。\n整数値を入力してください:");
	scanf_s("%d", &n);
	if (n <= 0) {
		printf("0\n");
	}
	else if (n > 0) {
		ans = 1;
		for (i = 0; i < n; i++) {
			ans = ans * (i + 1);
		}
		printf("%dの階乗は%dです。\n", n, ans);
	}
	else {
		printf("\n");	//NR
	}
}

void kadai16() {
	int n = 0;
	int i = 0;
	printf("整数値を入力してください:\n");
	scanf_s("%d", &n);
	if (n <= 0) {
		printf("\n");	//NR
	}
	else if (n > 0) {
		for (i = 0; i < n; i++) {
			printf("*");
		}
		printf("\n");
	}
	else {
		printf("\n");	//NR
	}
}

int kadai17(int a[]) {
	int k;
	printf("1~10の整数値を入力してください。:");
	scanf_s("%d", &k);
	if (1<=k&&k<=10) {
		k -= 1;
		printf("%d番目の要素は%dです。\n", k + 1, a[k]);
	}
	else {
		printf("要求する整数値が入力されませんでした。\n");
	}
	return 0;
}

void kadai18() {
	char str[4];
	str[0] = 'A';
	str[1] = 'B';
	str[2] = 'C';
	str[3] = '\0';
	printf("%s\n", str);
}

char *kadai19(char str[],char s[]) {
	int i = 0;
	while (s[i]) {
		s[i] = toupper(str[i]);
		i++;
	}
	return s;
}

int kadai20(char str[]) {
	int i = 0;
	int ans = 0;
	while (str[i]) {
		ans += 1;
		i++;
	}
	return ans;
}

void kadai21() {
	int size = 0;
	char str[256];
	char ans[256];
	gets_s(str);
	size = kadai20(str);
	int i = 0;
	for (i = 0; i < size; i++) {
		ans[i]= str[size - 1 - i];
	}
	ans[size] = '\0';
	printf("%s", ans);
	//printf("21はまだ出来てないよ\n");
}

int kadai22() {
	int i = 0;
	int size = 0;
	char str[256];
	gets_s(str);
	size = kadai20(str);
	for (i = 0; i < size / 2 + 1; i++) {
		if (str[i] != str[size - 1 - i]) {
			printf("No\n");
			return 0;
		}
		else if (str[i] != str[size - 1 - i]) {
			//NR
		}
	}
	printf("Yes\n");
	return 0;
}

void kadai23(char str1[],char str2[]) {
	int i = 0;
	int size1;
	int size2;
	int size;
	
	size1 = kadai20(str1);
	size2 = kadai20(str2);

	if (size1 >= size2) {
		size = size1;
	}
	else if (size1 < size2) {
		size = size2;
	}
	for (i = 0; i < size; i++) {
		if (str1[i] == str2[i]) {
			//NR
		}
		else if (str1[i] < str2[i]) {
			printf("%sより%sのほうが辞書順ではやい。\n", str2, str1);
			break;
		}
		else if (str1[i] > str2[i]) {
			printf("%sより%sのほうが辞書順ではやい。\n", str1, str2);
			break;
		}
	}
	printf("同じ文字列が入力されました。\n");
}

char *kadai24(char str[]) {
	//単数形を複数形に
	//char ans[256];
	int size = 0;
	size = kadai20(str);
	if (str[size - 1] == 'o'||str[size - 1] == 'x'||str[size - 1] == 's') {
		str[size] = 'e';
		str[size + 1] = 's';
		str[size + 2] = '\0';
	}
	else if ((str[size - 2]=='c'&&str[size-1]=='h')|| (str[size - 2] == 't' && str[size - 1] == 'h')|| (str[size - 2] == 's' && str[size - 1] == 'h')) {
		str[size] = 'e';
		str[size + 1] = 's';
		str[size + 2] = '\0';
	}
	else if (str[size - 1] == 'y') {
		str[size - 1] = 'i';
		str[size] = 'e';
		str[size + 1] = 's';
		str[size + 2] = '\0';
	}
	else if (str[size - 1] == 'f') {
		str[size - 1] = 'v';
		str[size] = 'e';
		str[size + 1] = 's';
		str[size + 2] = '\0';
	}
	else if (str[size - 2] == 'f' && str[size - 1] == 'e') {
		str[size - 2] = 'v';
		str[size - 1] = 'e';
		str[size] = 's';
		str[size + 1] = '\0';
	}
	else {
		str[size] = 's';
		str[size + 1] = '\0';
	}
	return str;
	//printf("24はまだ出来てないよ\n");
}

int kadai25(int n) {
	int ans = 0;
	ans = n * n;
	return ans;
}

int min3(int x, int y, int z) {
	if (x <= y) {
		if (y < z) {
			printf("%d %d %d", x, y, z);
		}
		else if (z < x) {
			printf("%d %d %d", z, x, y);
		}
		else {
			printf("%d %d %d", x, z, y);
		}
	}
	else if (y < x) {
		if (x < z) {
			printf("%d %d %d", y, x, z);
		}
		else if (z < y) {
			printf("%d %d %d", z, y, x);
		}
		else {
			printf("%d %d %d",y, z, x);
		}
	}
	else {
		//NR
	}
	return 0;
}