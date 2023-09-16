#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<ctype.h>
	char board[21][21];
	int xpos=11;
	int ypos=11;
	int checkw=9;
	int cheese=0;
void map(){
	for(int i=1;i<=20;i++){
		for(int j=1;j<=20;j++){
			if(i==1 || j==1 || i==20 || j==20){
				board[i][j]='#';
			}else{
				board[i][j]=' ';
			}
		
		}
	}
		board[4][7]='C';
	board[4][8]='C';
	board[4][10]='C';
	board[4][11]='C';
	board[4][12]='C';
	board[4][14]='C';
	board[4][15]='C';
	board[9][9]='C';
	board[9][13]='C';
	board[10][4]='C';
	board[10][10]='C';
	board[10][12]='C';
	board[10][17]='C';
	board[11][4]='C';
	board[11][17]='C';
	board[12][9]='C';
	board[12][13]='C';
	board[17][7]='C';
	board[17][8]='C';
	board[17][10]='C';
	board[17][11]='C';
	board[17][12]='C';
	board[17][14]='C';
	board[17][15]='C';
		srand(time(NULL));
		int z,x;
		for(int j=0;j<15;j++){
		do{
			z= rand()%21;
			x= rand()%21;
		}while(board[z][x]!=' ');
		board[z][x]='.';
	}


}
void munculkan(){
	for(int i=1;i<=20;i++){
		for(int j=1;j<=20;j++){
				printf("%c",board[i][j]);

		}
		printf("\n");
	}
}
void move(){
	char com;
	printf("Press [w|a|s|d] to move: ");
	scanf("%c",&com);
	getchar();
	com= tolower(com);

	if(com == 'w'){
		if(board[ypos-1][xpos] == '#'){
			
		}else{
		if(board[ypos-1][xpos]=='C'){
			printf("YOU LOSE!");
			checkw=1;
		}
		if(board[ypos-1][xpos]=='.'){
		printf("GREAT JOB!\n");

		}
		board[ypos][xpos]=' ';
		ypos--;
		board[ypos][xpos]='M';
}
	}else if(com == 'a'){
				if(board[ypos][xpos-1] == '#'){
			
		}else{
		if(board[ypos][xpos-1]=='C'){
			printf("YOU LOSE!");
			checkw=1;
		}
		if(board[ypos][xpos-1] == '.'){
		printf("GREAT JOB!\n");
		}
		board[ypos][xpos]=' ';
		xpos--;
		board[ypos][xpos]='M';
}
	}else if(com == 's'){
				if(board[ypos+1][xpos] == '#'){
			
		}else{
				if(board[ypos+1][xpos]=='C'){
			printf("YOU LOSE!");
			checkw=1;
		}
		if(board[ypos][xpos+1] == '.'){
		printf("GREAT JOB!\n");

		}
		board[ypos][xpos]=' ';
		ypos++;
		board[ypos][xpos]='M';
}
}
	else if(com == 'd'){
				if(board[ypos][xpos+1] == '#'){
			
		}else{
				if(board[ypos][xpos+1]=='C'){
			printf("YOU LOSE!");
			checkw=1;
		}
		if(board[ypos][xpos+1] == '.'){
		printf("GREAT JOB!\n");

		}
		board[ypos][xpos]=' ';
		xpos++;
		board[ypos][xpos]='M';
}
}
}
int checkwin(){
	int check=0;
	for(int i=1;i<=20;i++){
		for(int j=1;j<=20;j++){
			if(board[i][j]!=' '){
				if(board[i][j]=='.'){
					cheese=cheese+1;
				}
				if(board[i][j]!='M'){
					return 1;
				}
			}
		}
	}
	return 0;
}
void checkcheese(){
	for(int i=1;i<=20;i++){
		for(int j=1;j<=20;j++){
			if(board[i][j]!=' '){
				if(board[i][j]=='.'){
					cheese=cheese+1;
				}
	}
	}
	}
	
}
int main(){
	printf("VOcman\n");
	printf("=======\n");
	printf("1. Start Game\n");
	printf("2.Exit\n");

	printf(">> ");
	int t;
	scanf("%d",&t);
	getchar();
		map();
			board[xpos][ypos]='M';
	if(t==1){
	do{
	checkcheese();
	if(cheese==0){
		printf("YOU WIN!");
		break;
	}
	printf("%d\n",cheese);
	cheese=0;
	munculkan();
	move();
	if(checkw==1){
		break;
	}
	}while(checkwin()==1);
	}else{
		printf("Thank you for playing, have a nice day ^^");
	}
	
	return 0;
}
