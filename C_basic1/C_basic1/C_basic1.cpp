#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include "Header.h"

int main(void) {
	int a = 0;
	int b = 0;
	int num = 0;
	int i = 0;

	//課題1
	print_hello(1);

	//課題2
	kadai2();

	//課題3
	printf("入力値に関して判別します。\n整数値を入力してください:");
	scanf_s("%d", &num);
	kadai3(num);

	//課題4
	kadai4(num);

	//課題5
	kadai5(num);

	//課題6
	kadai6(num);
	
	//課題7
	printf("Hello World!を10回表示します。\n");
	print_hello(10);

	//課題8
	printf("同様に任意の回数だけHello World!を表示します。\n整数値を入力してください:");
	scanf_s("%d", &num);
	print_hello(num);

	//課題9
	kadai9();

	//課題11
	int a11[10];
	kadai11(a11,10);

	//課題12
	int a12[10];
	kadai12(a12,10);

	//課題13
	int a13[5];
	kadai13(a13, 5);

	//課題14
	kadai14();

	//課題15
	kadai15();

	//課題16
	kadai16();


	//課題17
	int a17[10] = { 3,7,0,8,4,1,9,6,5,2 };
	kadai17(a17);
	

	//課題18
	kadai18();

	//課題19
	printf("入力された文字列を全て大文字にして表示します。\n文字列を入力してください:");
	char str[256];
	char s[256];
	gets_s(str);
	printf("%s\n", kadai19(str, s));

	//課題20
	char s20[256];
	gets_s(s20);
	printf("%d", kadai20(s20));

	//課題21
	kadai21();

	//課題22
	kadai22();

	//課題23
	char p[256];
	char q[256];
	gets_s(p);
	gets_s(q);
	kadai23(p, q);

	//課題24
	char s24[256];
	gets_s(s24);
	printf("入力された文字列の複数形は%sです。\n", kadai24(s24));

	//課題25
	int n = 0;
	printf("二乗を計算します。\n整数値を入力してください：");
	scanf_s("%d", &n);
	printf("%dの二乗は%dです。\n",n, kadai25(n));


	//課題26
	int a26[3] ;
	printf("入力された整数値を小さい順に表示します。\n整数値を入力してください。\n");
	for(i=0;i<3;i++){
		printf("%d番目:",i+1);
		scanf_s("%d", &a26[i]);
	}
	printf("与えられた整数値を小さい順に並べると、\n%d\nです。\n", min3(a26[0], a26[1], a26[2]));

	//課題10
	kadai10();


	return 0;
}