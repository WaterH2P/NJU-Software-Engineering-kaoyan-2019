// 2018.8.13

#include <stdio.h>

#define TOTAL_NUM 5

int hanoi(int n, char from, char helper, char to);
int move(char from, char to);
void print_situation();

int x[TOTAL_NUM];
int y[TOTAL_NUM];
int z[TOTAL_NUM];
int len_x = 0;
int len_y = 0;
int len_z = 0;

int hanoi(int n, char from, char helper, char to){
	if( n == 1 ){
		move(from, to);
	}
	else {
		hanoi(n-1, from, to, helper);
		move(from, to);
		hanoi(n-1, helper, from, to);
	}
	return 0;
}

// 搬动操作 move( from, to ) 将 from 最上面一个搬运到 to 最上端
// 数据存储按照 stack 的模式，用数组存储，0 位表示栈底，len_* 表示栈顶
int move(char from, char to){
	int value = -1;

	switch(from){
		case 'x':
			len_x--;
			value = x[len_x];
			x[len_x] = 0;
			break;
		case 'y':
			len_y--;
			value = y[len_y];
			y[len_y] = 0;
			break;
		case 'z':
			len_z--;
			value = z[len_z];
			z[len_z] = 0;
			break;
		default :
			return 1;
	}

	switch(to){
		case 'x':
			x[len_x] = value;
			len_x++;
			break;
		case 'y':
			y[len_y] = value;
			len_y++;
			break;
		case 'z':
			z[len_z] = value;
			len_z++;
			break;
		default :
			return 1;
	}

	printf("                        %d : %c -> %c\n", value, from, to);

	print_situation();

	return 0;
}

// 打印三个数组中的情况
void print_situation(){
	printf("    x    y    z\n");
	int max = len_x > len_y ? len_x : len_y;
	max = max > len_z ? max : len_z;
	for( int i = max - 1 ; i >=0 ; i-- ){
		printf("    %d    %d    %d\n", x[i], y[i], z[i]);
	}
	printf("\n");
}

int main(int argc, char const *argv[]){

	// 从塔座 x 搬运到塔座 z 上，y 可用作辅助塔座
	char from = 'x', to = 'z', helper = 'y';

	// 将塔座 x 上按直径由小到大且自上而下编号为 1 至 n
	for( int i = 0 ; i < TOTAL_NUM ; i++ ){
		x[i] = TOTAL_NUM - i;
	}
	len_x = TOTAL_NUM;

	print_situation();

	hanoi(TOTAL_NUM, from, helper, to);
	return 0;
}

// gcc HanoiTower.c -o hanoi && ./hanoi

