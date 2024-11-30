////////////////////////version complete3.3
//#include <iostream>
//#include <fstream>
//# include "youregraphics.h"
//
//using namespace std;
//struct box {           //function prototypes and definitinos
//	int x1;
//	int y1;
//	int x2;
//	int y2;
//};
//void init1(ifstream& in1, bool flagar2[], bool broken2[], int data2[],int brickcounter[]);
//void save1(ofstream& out1, bool flagar2[], bool broken2[], int data2[],int brickcounter[] );
//void sort1(int hs1[]);
//void print1(int hs1[]);
//void init2(ifstream &in2 , int hs[]){
//	for (int i = 0; i < 6; i++) {
//		in2 >> hs[i];
//
//
//	}
//}
//void save2(ofstream& out2, int hs[]) {
//	for (int i = 0; i < 6; i++) {
//		out2<< hs[i]<<' ';
//
//
//	}
//}
//
//
//
//void printBricks(box b[], bool flagar[],int brickcounter[]);
//void comparebricks(box b[], bool flagar[], int& blx1, int& bly1, int& blx2, int& bly2, bool&  colbat,bool broken[], int& score,int brickcounter[]);
//int main() {
//
//	int decision; int temp = 0;
//	ofstream out1, out2;
//	ifstream in1, in2;
//		gotoxy(10, 10);
//	cout << "Welcome to Brick Breaker" << endl;
//	gotoxy(20, 12);
//	cout << "Faseeh Incorporated" << endl;
//	gotoxy(20, 14);
//	cout << "All Rights Reserved" << endl;
//	gotoxy(30, 16);
//	cout << "Help: The game is controlled by left and right arrow keys ."<<endl;
//	gotoxy(30, 18);
//	cout<<"press s for save, spacebar to pause." << endl;
//    gotoxy(40, 20);
//	cout << "Press 1 to start a NEW GAME " << endl;
//	gotoxy(50, 22);
//	cout << "Press 2 to load a SAVED GAME " << endl;
//	gotoxy(60, 24);
//	cin >> decision;
//	gotoxy(60, 26);
//	cls();
//	int data[21];
//	bool colarr[2];          //intitailisations of variables
//	bool flagar1[50];
//	bool broken[50];
//	box b1[50];
//	int  score;
//	int life = 3;
//	int changebt;
//	int btx1; int bty1; int btx2; int bty2;
//	int w; int h; int changeY = 20;
//	int changeX;
//	int blx1; int bly1; int blx2; int bly2;
//	int colCountbat; int colCountbrick;
//	bool collisionbat; bool collisionbrick;
//	w = 360, h = 460;  changeY = 16;
//	int hs[6]; hs[0] = 0; hs[1] = 0;
//	hs[2] = 0;
//	hs[3] = 0;
//	hs[4] = 0;
//
//	for (int i = 0; i < 50; i++) {
//
//		broken[i] = false;
//
//	}
//	changeX = changeY / 7;
//	blx1 = w - 11;  bly1 = h - 165;  blx2 = w + 15;  bly2 = h - 190;
//	btx1 = 310;  bty1 = 510;  btx2 = 450;  bty2 = 540;
//	changebt = (btx2 - btx1) / 5;
//
//
//	colCountbat = 0;  colCountbrick = 0;
//	collisionbat = false;  collisionbrick = false;
//	int brickcounter[51] = { 0 };
//	////////////////////////////////////////////////////////////////////save game
//	if (decision == 2) {
//		in1.open("c://file1/outputFile.txt");
//		init1(in1,flagar1, broken, data,brickcounter);
//		
//		score = data[0];
//		life = data[1];
//		  w= data[2];
//		 h= data[3];
//		 changeY= data[4];
//		  changeX= data[5];
//		blx1=data[6];
//		bly1 = data[7];
//	
//		blx2 = data[8];
//		bly2=data[9];
//		  btx1= data[10];
//		  bty1= data[11];
//		  btx2= data[12];
//		  bty2= data[13];
//		  changebt= data[14];
//		  hs[5]=data[20];
//		  hs[4] = data[19];
//		  hs[3] = data[18];
//		  hs[2] = data[17];
//		  hs[1] = data[16];
//		  hs[0] = data[15];
//	
//		
//		in1.close();
//out1.open("c://file1/outputFile.txt");
//	}
//	/////////////////////////////////////////////////////////////////////////////////new game
//	if (decision == 1) {
//		
//		
//		
//		score = 0;
//		life = 3;
//		
//
//		for (int z = 0; z < 50; z++) {
//
//			flagar1[z] = true;
//			
//
//		}
//		in2.open("c://file1/outputFile1.txt");
//
//		init2(in2, hs);
//		
//		out2.open("c://file1/outputFile1.txt");
//		
//		out1.open("c://file1/outputFile.txt");
//		
//	     
//	
//	}
//
// 
//
//	
//	while (true) {
//		printBricks(b1, flagar1, brickcounter);
//
//		drawRectangle(12, 568, 1068, 588, 0, 0, 0, 0, 0, 0);
//		drawRectangle(12, 588, 1068, 608, 0, 0, 0, 0, 0, 0);
//		drawRectangle(12, 488, 1068, 508, 0, 0, 0, 0, 0, 0);
//		drawRectangle(12, 508, 1068, 588, 0, 0, 0, 0, 0, 0);
//
//
//
//
//		if (!collisionbat) {  //if to move downward
//
//			
//			drawEllipse(blx1, bly1, blx2, bly2, 0, 0, 0, 0, 0, 0);
//			bly1 = bly1 + changeY; bly2 = bly2 + changeY;
//			blx1 = blx1 - changeX; blx2 = blx2 - changeX;
//
//			drawEllipse(blx1, bly1, blx2, bly2, 0, 0, 0, 0, 0, 255);
//
//			drawLine(1070, 0, 1070, 1200, 0, 0, 255);
//			drawLine(10, 0, 10, 1200, 0, 0, 255);
//			drawLine(10, 590, 1070, 590, 0, 0, 255);
//			drawRectangle(btx1, bty1, btx2, bty2, 0, 0, 0, 255, 255, 255);
//			delay(30);
//			drawRectangle(btx1, bty1, btx2, bty2, 0, 0, 0, 0, 0, 0);
//
//			if (blx1 >= 1068 || blx2 >= 1068) {
//				changeX = -changeX;
//			}
//			if (blx1 <= 12 || blx2 <= 12) {
//
//
//				changeX = -changeX;
//
//			}
//			{if (bly1 <= 0 || bly2 <= 0) {
//				collisionbat = true;
//
//			}
//
//			}
//			if (bly1 >= 590 || bly2 >= 590) {
//
//				btx1 = 310;  bty1 = 510;  btx2 = 450;  bty2 = 540;
//				blx1 = w - 11;  bly1 = h - 165;  blx2 = w + 15;  bly2 = h - 190;
//
//				life--;
//				if (life <= 0) {
//
//					break; break;
//					break;
//				}
//
//			}
//
//
//
//			if (btx1 <= 10) {
//				btx1 = 10;
//
//				btx2 = 160;
//			}
//			if (btx2 >= 1070) {
//				btx2 = 1070;
//				btx1 = 920;
//			}
//			comparebricks(b1, flagar1, blx1, bly1, blx2, bly2, collisionbat, broken, score, brickcounter);
//
//
//			gotoxy(5, 0);
//			showConsoleCursor(false);
//			cout << "Score: " << score << "  Life:  " << life;
//			char c = getKey();
//			if (c == KEY_LEFT || c == KEY_RIGHT) {
//				if (c == KEY_LEFT) { btx1 = btx1 - 20; btx2 = btx2 - 20; }
//				if (c == KEY_RIGHT) { btx2 = btx2 + 20; btx1 = btx1 + 20; }
//				
//			}
//			else if (c == 's') {
//				
//				data[0] = score;
//				data[1] = life;
//				data[2] = w;
//				data[3] = h;
//				data[4] = changeY;
//				data[5] = changeX;
//				data[6] = w - 11;
//				data[7] = h - 165;
//				data[8] = w + 15;
//				data[9] = h - 190;
//				data[10] = btx1;
//				data[11] = bty1;
//				data[12] = btx2;
//				data[13] = bty2;
//				data[14] = (btx2 - btx1) / 3;
//				data[15] = hs[0];
//				data[16] = hs[1];
//				data[17] = hs[2];
//				data[18] = hs[3];
//				data[19] = hs[4];
//				data[20] = score;
//				save1(out1, flagar1, broken, data, brickcounter);
//				break; break; break;
//				temp++;
//				
//			
//			
//			
//			
//			}
//			else if(c==' ')
//			{
//			
//				while (true)
//				{
//					if (getKey() == ' ') { break; break; }
//
//				}
//			}
//			
//			
//			
//			if ((bty1 <= bly2) && ((blx1 + blx2) / 2 >= btx1) && ((blx1 + blx2) / 2 <= btx2)) {
//				if (((bty1 <= bly2) && ((blx1 + blx2) / 2 >= btx1) && ((blx1 + blx2) / 2 <= (btx1 + changebt)))) {
//					collisionbat = true;
//					colCountbat = colCountbat + 2;
//					bly1 = bly1 - changeY; bly2 = bly2 - changeY;
//					changeX = 8;
//					blx1 = blx1 - changeX; blx2 = blx2 - changeX;
//
//				}
//				if (((bty1 <= bly2) && ((blx1 + blx2) / 2 >= (btx1 + changebt)) && ((blx1 + blx2) / 2 <= (btx1 + changebt + changebt)))) {
//					collisionbat = true;
//					colCountbat = colCountbat + 2;
//					bly1 = bly1 - changeY; bly2 = bly2 - changeY;
//					changeX = 0;
//
//				}
//				if (((bty1 <= bly2) && ((blx1 + blx2) / 2 >= (btx1 + changebt + changebt)) && ((blx1 + blx2) / 2 <= (btx2)))) {
//					collisionbat = true;
//					colCountbat = colCountbat + 2;
//					bly1 = bly1 - changeY; bly2 = bly2 - changeY;
//					changeX = -8;
//					blx1 = blx1 + changeX; blx2 = blx2 + changeX;
//
//				}
//			}
//
//		}
//
//		if (collisionbat) { //if to move upward
//
//			drawEllipse(blx1, bly1, blx2, bly2, 0, 0, 0, 0, 0, 0);
//			bly1 = bly1 - changeY; bly2 = bly2 - changeY;
//			blx1 = blx1 - changeX; blx2 = blx2 - changeX;
//			drawEllipse(blx1, bly1, blx2, bly2, 0, 0, 0, 0, 0, 255);
//
//			drawLine(1070, 0, 1070, 1200, 0, 0, 255);
//			drawLine(10, 0, 10, 1200, 0, 0, 255);
//			drawLine(10, 590, 1070, 590, 0, 0, 255);
//
//			drawRectangle(btx1, bty1, btx2, bty2, 0, 0, 0, 255, 255, 255);
//			delay(30);
//			drawRectangle(btx1, bty1, btx2, bty2, 0, 0, 0, 0, 0, 0);
//
//
//
//			if (blx1 >= 1068 || blx2 >= 1068) {
//				changeX = -changeX;
//			}
//			if (blx1 <= 12 || blx2 <= 12) {
//
//
//				changeX = -changeX;
//			}
//			if (bly1 <= 0 || bly2 <= 0) {
//				collisionbat = false;
//
//			}
//			if (bly1 >= 590 || bly2 >= 590) {
//
//				btx1 = 310;  bty1 = 510;  btx2 = 450;  bty2 = 540;
//				blx1 = w - 11;  bly1 = h - 165;  blx2 = w + 15;  bly2 = h - 190;
//
//				life--;
//				if (life <= 0) {
//
//					break; break;
//					break;
//				}
//
//			}
//
//			if (btx1 <= 10) {
//				btx1 = 10;
//				btx2 = 160;
//			}
//			if (btx2 >= 1070) {
//				btx2 = 1070;
//				btx1 = 920;
//			}
//
//
//			comparebricks(b1, flagar1, blx1, bly1, blx2, bly2, collisionbat, broken, score, brickcounter);
//			gotoxy(5, 0);
//			showConsoleCursor(false);
//			cout << "Score: " << score << "  Life:  " << life;
//			char c = getKey();
//			if (c == KEY_LEFT || c == KEY_RIGHT) {
//				if (c == KEY_LEFT) { btx1 = btx1 - 20; btx2 = btx2 - 20; }
//				if (c == KEY_RIGHT) { btx2 = btx2 + 20; btx1 = btx1 + 20; }
//				
//			
//			}
//			else if (c == 's') {
//				hs[5] = score;
//				data[0] = score;
//				data[1] = life;
//				data[2] = w;
//				data[3] = h;
//				data[4] = changeY;
//				data[5] = changeX;
//				data[6] = blx1;
//				data[7] = bly1;
//				data[8] = blx2;
//				data[9] = bly2;
//				data[10] = btx1;
//				data[11] = bty1;
//				data[12] = btx2;
//				data[13] = bty2;
//				data[14] = (btx2 - btx1) / 3;
//				data[15] = hs[0];
//				data[16] = hs[1];
//				data[17] = hs[2];
//				data[18] = hs[3];
//				data[19] = hs[4];
//				data[20] = score;
//				save1(out1, flagar1, broken, data, brickcounter);
//
//				break; break; break;
//				temp++;
//				
//
//			}
//			
//			else if (c == ' ')
//			{
//				
//				while (true)
//				{
//					if (getKey() == ' ') { break; break; }
//
//				}
//			}
//
//		
//		}
//	
//	
//	
//}
//cls();
//in1.close();
//
//save1(out1, flagar1, broken, data,brickcounter);
//out1.close();
//
//sort1(hs);
//hs[5] = score;
//
//
//cout << "Game Over " << endl;
//	cout << "Your score is  : " << score << endl;
//	cout << " Last five high scores are " << endl;
//	sort1(hs);
//	print1(hs);
//	save2(out2, hs);
//	out2.close();
//	return 0;
//}
//
//void printBricks(box b[], bool flagar[], int  brickcounter[]) { //main functions whose prototypes were discussed
//	int	chbx = 106; int chby = 33;
//	if (flagar[0]) {
//		if (brickcounter[0] == 0) {
//			b[0].x1 = 10;
//			b[0].x2 = 116;
//			b[0].y1 = 33;
//			b[0].y2 = 66;
//
//			drawRectangle(b[0].x1, b[0].y1, b[0].x2, b[0].y2, 0, 0, 0, 255, 0, 0);
//		}
//		if (brickcounter[0] == 1) {
//			b[0].x1 = 10;
//			b[0].x2 = 116;
//			b[0].y1 = 33;
//			b[0].y2 = 66;
//
//			drawRectangle(b[0].x1, b[0].y1, b[0].x2, b[0].y2, 0, 0, 0, 200, 0, 0);
//		}
//		if (brickcounter[0] == 2) {
//			b[0].x1 = 10;
//			b[0].x2 = 116;
//			b[0].y1 = 33;
//			b[0].y2 = 66;
//
//			drawRectangle(b[0].x1, b[0].y1, b[0].x2, b[0].y2, 0, 0, 0, 150, 0, 0);
//		}
//	
//	}
//	else {
//		b[0].x1 = 10;
//		b[0].x2 = 116;
//		b[0].y1 = 33;
//		b[0].y2 = 66;
//
//		drawRectangle(b[0].x1, b[0].y1, b[0].x2, b[0].y2, 0, 0, 0, 0, 0, 0);
//
//	}
//	for (int i = 1; i < 10; i++) {
//
//		if (flagar[i]) {
//			if (brickcounter[i] == 0) {
//				b[i].x1 = b[i - 1].x2;
//				b[i].x2 = b[i].x1 + chbx;
//				b[i].y1 = 33;
//				b[i].y2 = 66;
//				drawRectangle(b[i].x1, b[i].y1, b[i].x2, b[i].y2, 0, 0, 0, 255, 0, 0);
//			}
//			
//				if (brickcounter[i] == 1) {
//					b[i].x1 = b[i - 1].x2;
//					b[i].x2 = b[i].x1 + chbx;
//					b[i].y1 = 33;
//					b[i].y2 = 66;
//					drawRectangle(b[i].x1, b[i].y1, b[i].x2, b[i].y2, 0, 0, 0, 200, 0, 0);
//				}
//		
//				
//					if (brickcounter[i] == 2) {
//						b[i].x1 = b[i - 1].x2;
//						b[i].x2 = b[i].x1 + chbx;
//						b[i].y1 = 33;
//						b[i].y2 = 66;
//						drawRectangle(b[i].x1, b[i].y1, b[i].x2, b[i].y2, 0, 0, 0, 150, 0, 0);
//					}
//		
//		}
//		else {
//			b[i].x1 = b[i - 1].x2;
//			b[i].x2 = b[i].x1 + 106;
//			b[i].y1 = 33;
//			b[i].y2 = 66;
//			drawRectangle(b[i].x1, b[i].y1, b[i].x2, b[i].y2, 0, 0, 0, 0, 0, 0);
//
//		}
//	}
//	if (flagar[10]) {
//		b[10].x1 = 10;
//		b[10].x2 = 116;
//		b[10].y1 = 66;
//		b[10].y2 = 99;
//		drawRectangle(b[10].x1, b[10].y1, b[10].x2, b[10].y2, 0, 0, 0, 0, 255, 0);
//	}
//	else {
//		b[10].x1 = 10;
//		b[10].x2 = 116;
//		b[10].y1 = 66;
//		b[10].y2 = 99;
//		drawRectangle(b[10].x1, b[10].y1, b[10].x2, b[10].y2, 0, 0, 0, 0, 0, 0);
//	}
//		for (int j = 11; j < 20; j++) {
//			if (flagar[j]) {
//				b[j].x1 = b[j - 1].x2;
//				b[j].x2 = b[j].x1 + chbx;
//				b[j].y1 = chby*2;
//				b[j].y2 = chby *3;
//				drawRectangle(b[j].x1, b[j].y1, b[j].x2, b[j].y2, 0, 0, 0, 0, 255, 0);
//			}
//			else {
//				b[j].x1 = b[j - 1].x2;
//				b[j].x2 = b[j].x1 + chbx;
//				b[j].y1 = chby*2;
//				b[j].y2 = chby *3;
//				drawRectangle(b[j].x1, b[j].y1, b[j].x2, b[j].y2, 0, 0, 0, 0, 0, 0);
//
//			}
//		}
//		 if (flagar[20]) {
//			b[20].x1 = 10;
//			b[20].x2 = 116;
//			b[20].y1 = 99;
//			b[20].y2 = 132;
//			drawRectangle(b[20].x1, b[20].y1, b[20].x2, b[20].y2, 0, 0, 0, 0, 0, 255);
//		}
//		 else {
//			 b[20].x1 = 10;
//			 b[20].x2 = 116;
//			 b[20].y1 = 99;
//			 b[20].y2 = 132;
//			 drawRectangle(b[20].x1, b[20].y1, b[20].x2, b[20].y2, 0, 0, 0, 0, 0, 0);
//		 }
//		
//		 for (int k = 21; k < 30; k++) {
//			 if (flagar[k]) {
//				 b[k].x1 = b[k - 1].x2;
//				 b[k].x2 = b[k].x1 + chbx;
//				 b[k].y1 = chby*3;
//				 b[k].y2 = chby*4;
//				 drawRectangle(b[k].x1, b[k].y1, b[k].x2, b[k].y2, 0, 0, 0, 0, 0, 255);
//			 }
//			 else {
//				 b[k].x1 = b[k - 1].x2;
//				 b[k].x2 = b[k].x1 + chbx;
//				 b[k].y1 = chby *3;
//				 b[k].y2 =chby*4;
//				 drawRectangle(b[k].x1, b[k].y1, b[k].x2, b[k].y2, 0, 0, 0, 0, 0, 0);
//
//			 }
//		 }
//		 if (flagar[30]) {
//			 
//			 if (brickcounter[30] == 0) {
//				 b[30].x1 = 10;
//				 b[30].x2 = 116;
//				 b[30].y1 = 132;
//				 b[30].y2 = 165;
//				 drawRectangle(b[30].x1, b[30].y1, b[30].x2, b[30].y2, 0, 0, 0, 0, 255, 0);
//			 }
//			 if (brickcounter[30] == 1) {
//				 b[30].x1 = 10;
//				 b[30].x2 = 116;
//				 b[30].y1 = 132;
//				 b[30].y2 = 165;
//				 drawRectangle(b[30].x1, b[30].y1, b[30].x2, b[30].y2, 0, 0, 0, 0,200, 0);
//			 }
//			 if (brickcounter[30] == 2) {
//				 b[30].x1 = 10;
//				 b[30].x2 = 116;
//				 b[30].y1 = 132;
//				 b[30].y2 = 165;
//				 drawRectangle(b[30].x1, b[30].y1, b[30].x2, b[30].y2, 0, 0, 0, 0, 150, 0);
//			 }
//		 
//		 
//		 }
//			 
//			
//			
//		 else {
//			 b[30].x1 = 10;
//			 b[30].x2 = 116;
//			 b[30].y1 = 132;
//			 b[30].y2 = 165;
//			 drawRectangle(b[30].x1, b[30].y1, b[30].x2, b[30].y2, 0, 0, 0, 0, 0, 0);
//		 }
//		 for (int k = 31; k < 40; k++) {
//			
//			 if (flagar[k]) {
//				 if (brickcounter[k] == 0) {
//					 b[k].x1 = b[k - 1].x2;
//					 b[k].x2 = b[k].x1 + chbx;
//					 b[k].y1 = chby * 4;
//					 b[k].y2 = chby * 5;
//					 drawRectangle(b[k].x1, b[k].y1, b[k].x2, b[k].y2, 0, 0, 0, 0, 255, 0);
//				 }
//				 
//					 if (brickcounter[k] == 1) {
//						 b[k].x1 = b[k - 1].x2;
//						 b[k].x2 = b[k].x1 + chbx;
//						 b[k].y1 = chby * 4;
//						 b[k].y2 = chby * 5;
//						 drawRectangle(b[k].x1, b[k].y1, b[k].x2, b[k].y2, 0, 0, 0, 0, 200, 0);
//					 }
//					
//						 if (brickcounter[k] == 2) {
//							 b[k].x1 = b[k - 1].x2;
//							 b[k].x2 = b[k].x1 + chbx;
//							 b[k].y1 = chby * 4;
//							 b[k].y2 = chby * 5;
//							 drawRectangle(b[k].x1, b[k].y1, b[k].x2, b[k].y2, 0, 0, 0, 0, 150, 0);
//						 }
//
//
//					 }
//
//					 else {
//
//						 b[k].x1 = b[k - 1].x2;
//						 b[k].x2 = b[k].x1 + chbx;
//						 b[k].y1 = chby * 4;
//						 b[k].y2 = chby * 5;
//						 drawRectangle(b[k].x1, b[k].y1, b[k].x2, b[k].y2, 0, 0, 0, 0, 0, 0);
//
//
//
//					 }
//
//		
//		 }
//
//			 
//			 
//		 
//			 
//		 
//		 if (flagar[40]) {
//			 b[40].x1 = 10;
//			 b[40].x2 = 116;
//			 b[40].y1 = 165;
//			 b[40].y2 = 198;
//			 drawRectangle(b[40].x1, b[40].y1, b[40].x2, b[40].y2, 0, 0, 0, 255, 0, 0);
//		 }
//		 else {
//			 b[40].x1 = 10;
//			 b[40].x2 = 116;
//			 b[40].y1 = 166;
//			 b[40].y2 = 198;
//			 drawRectangle(b[40].x1, b[40].y1, b[40].x2, b[40].y2, 0, 0, 0, 0, 0, 0);
//		 }
//		 for (int k = 41; k < 50; k++) {
//			 if (flagar[k]) {
//				 b[k].x1 = b[k - 1].x2;
//				 b[k].x2 = b[k].x1 + chbx;
//				 b[k].y1 = chby * 5;
//				 b[k].y2 = chby * 6;
//				 drawRectangle(b[k].x1, b[k].y1, b[k].x2, b[k].y2, 0, 0, 0, 255, 0, 0);
//			 }
//			 else {
//				 b[k].x1 = b[k - 1].x2;
//				 b[k].x2 = b[k].x1 + chbx;
//				 b[k].y1 = chby * 5;
//				 b[k].y2 = chby * 6;
//				 drawRectangle(b[k].x1, b[k].y1, b[k].x2, b[k].y2, 0, 0, 0, 0, 0, 0);
//
//		 }
//		 }
//		 }
//
//	
//void comparebricks(box b[], bool flagar[], int& blx1, int& bly1, int& blx2, int& bly2, bool& colbat, bool broken[], int& score, int brickcounter[]) {
//
//	int	chbx = 106; int chby = 33;
//	
//		
//	    b[0].x1 = 10;
//		b[0].x2 = 116;
//		b[0].y1 = 33;
//		b[0].y2 = 66;
//
//		
//	if (!broken[0]) {
//			if (blx1 >= 10 && blx1 <= 116 && bly1 <= 66) {
//				colbat = false;
//				brickcounter[0]++;
//				if (brickcounter[0] == 3){
//					flagar[0] = false;
//
//						broken[0] = true;
//						score = score + 50;
//				}
//				}
//		}
//	for (int i = 1; i < 10; i++) {
//
//
//		b[i].x1 = b[i - 1].x2;
//		b[i].x2 = b[i].x1 + chbx;
//		b[i].y1 = chby;
//		b[i].y2 =2* chby;
//		if (!broken[i]) {
//			if (blx1 >= b[i].x1 && blx1 <= b[i].x2 && bly1 <= b[i].y2) {
//				colbat = false;
//				brickcounter[i]++;
//				if (brickcounter[i] == 3) {
//					flagar[i] = false;
//
//					broken[i] = true;
//					score = score + 50;
//				}
//				}
//		}
//	}
//			b[10].x1 = 10;
//			b[10].x2 = 116;
//			b[10].y1 = 66;
//			b[10].y2 = 99;
//
//
//			if (!broken[10]) {
//				if (blx1 >= 10 && blx1 <= 116 && bly1 <= 99) {
//					flagar[10] = false;
//					colbat = false;
//					broken[10] = true;
//					score = score + 10;
//				}
//			}
//			for (int i = 11; i < 20; i++) {
//
//
//				b[i].x1 = b[i - 1].x2;
//				b[i].x2 = b[i].x1 + chbx;
//				b[i].y1 = 2*chby;
//				b[i].y2 = 3 * chby;
//				if (!broken[i]) {
//					if (blx1 >= b[i].x1 && blx1 <= b[i].x2 && bly1 <= b[i].y2) {
//						flagar[i] = false;
//						colbat = false;
//						broken[i] = true;
//						score = score + 10;
//					}
//				}
//			}
//			b[20].x1 = 10;
//			b[20].x2 = 116;
//			b[20].y1 = 99;
//			b[20].y2 = 132;
//
//
//			if (!broken[20]) {
//				if (blx1 >= 10 && blx1 <= 116 && bly1 <= 132) {
//					flagar[20] = false;
//					colbat = false;
//					broken[20] = true;
//					score = score + 10;
//				}
//			}
//			for (int i = 21; i < 30; i++) {
//
//
//				b[i].x1 = b[i - 1].x2;
//				b[i].x2 = b[i].x1 + chbx;
//				b[i].y1 = 3*chby;
//				b[i].y2 = 4 * chby;
//				if (!broken[i]) {
//					if (blx1 >= b[i].x1 && blx1 <= b[i].x2 && bly1 <= b[i].y2) {
//						flagar[i] = false;
//						colbat = false;
//						broken[i] = true;
//						score = score + 10;
//					}
//				}
//			}
//			
//			b[30].x1 = 10;
//			b[30].x2 = 116;
//			b[30].y1 = 132;
//			b[30].y2 = 165;
//			
//			
//			
//				if (!broken[30]) {
//					if (blx1 >= 10 && blx1 <= 116 && bly1 <= 165) {
//
//
//						
//						colbat = false;
//						brickcounter[30]++;
//						if (brickcounter[30] == 3) {
//							broken[30] = true;
//							flagar[30] = false;
//							score = score+50;
//						}
//						
//					}
//				}
//			
//				for (int i = 31; i < 40; i++) {
//
//					int d = 1;
//					b[i].x1 = b[i - 1].x2;
//					b[i].x2 = b[i].x1 + chbx;
//					b[i].y1 = 4 * chby;
//					b[i].y2 = 5 * chby;
//
//
//
//					if (!broken[i]) {
//						if (blx1 >= b[i].x1 && blx1 <= b[i].x2 && bly1 <= b[i].y2) {
//
//
//							colbat = false;
//							brickcounter[i]++;
//							if (brickcounter[i] == 3) {
//								broken[i] = true;
//								flagar[i] = false;
//								score = score + 50;
//							}
//
//						}
//					}
//
//
//				
//				}
//			b[40].x1 = 10;
//			b[40].x2 = 116;
//			b[40].y1 = 165;
//			b[40].y2 = 198;
//
//
//			if (!broken[40]) {
//				if (blx1 >= 10 && blx1 <= 116 && bly1 <= 198) {
//					flagar[40] = false;
//					colbat = false;
//					broken[40] = true;
//					score = score + 10;
//				}
//			}
//			for (int i = 41; i < 50; i++) {
//
//
//				b[i].x1 = b[i - 1].x2;
//				b[i].x2 = b[i].x1 + chbx;
//				b[i].y1 = 5 * chby;
//				b[i].y2 = 6 * chby;
//				if (!broken[i]) {
//					if (blx1 >= b[i].x1 && blx1 <= b[i].x2 && bly1 <= b[i].y2) {
//						flagar[i] = false;
//						colbat = false;
//						broken[i] = true;
//						score = score + 10;
//					}
//				}
//			}
//			
//	
//}
//
//void save1(ofstream& out1, bool flagar2[], bool broken2[], int data2[], int brickcounter[])
//
//{
//	int temp;
//	for (int i = 0; i < 50; i++) {
//		if (flagar2[i] == true) { temp = 1; }
//		else { temp = 0; }
//		out1 << temp<< ' ';
//	}
//	for (int i = 0; i < 50; i++) {
//		if (broken2[i] == true) { temp = 1; }
//		else { temp = 0; }
//		out1 << temp << ' ';
//	}
//		for (int i = 0; i < 21; i++) {//////////////// to be
//		out1 << data2[i] << ' ';
//	}
//		for (int i = 0; i < 50; i++) {
//			out1 << brickcounter[i] << ' ';
//		}
//
//
//
//
//}
//void init1(ifstream& in1, bool flagar2[], bool broken2[], int data2[], int brickcounter[]) {
//	int temp;
//	for (int i = 0; i < 50; i++) {
//		in1 >> temp ;
//
//		if (temp==1){flagar2[i] = true; }
//		else {flagar2[i] = false;}
//			}
//	for (int i = 0; i < 50; i++) {
//		in1 >> temp;
//
//		if (temp == 1) { broken2[i] = true; }
//		else { broken2[i] = false; }
//	}
//	
//	for (int i = 0; i < 21; i++) {
//		in1 >> temp;
//		 data2[i] = temp;
//	}
//	for (int i = 0; i < 50; i++) {
//		in1 >> brickcounter[i] ;
//	}
//
//
//
//
//}
//
//void sort1(int hs1[]) {
//	int temp;
//	for (int i = 0; i < 5; i++) {
//		for (int i = 0; i < 5; i++) {
//			if (hs1[i] < hs1[i + 1]) {
//				temp = hs1[i];
//				hs1[i] = hs1[i + 1];
//				hs1[i + 1] = temp;
//			}
//
//		}
//	}
//}
//
//		void print1(int hs1[]) {
//			for (int i = 0; i < 5; i++) {
//				cout << hs1[i] << endl;
//			}
//		}
//
//
//
//
//
//
//
//
//
//
//
//
//	
