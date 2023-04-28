#include<bits/stdc++.h>
#include <iostream>
#include <stdio.h>
#include <windows.h>
#include <mmsystem.h>
//Hasham Younas made this little game in second semester of CS!!
using namespace std;
int score1 = 0;
int score2 = 0;
int i = 0;
int a=0,b=0,c=0,d=0,start=1;
void layout1()
{
    string game[10][10]={{"91","92","93","94","95","96","97","98","99","100"},
                         {"81","82","83","84","85","86","87","88","89","90"},
                         {"71","72","73","74","75","76","77","78","79","80"},
                         {"61","62","63","64","65","66","67","68","69","70"},
                         {"51","52","53","54","55","56","57","58","59","60"},
                         {"41","42","43","44","45","46","47","48","49","50"},
                         {"31","32","33","34","35","36","37","38","39","40"},
                         {"21","22","23","24","25","26","27","28","29","30"},
                         {"11","12","13","14","15","16","17","18","19","20"},
                         {"01","02","03","04","05","06","07","08","09","10"}};
    cout<<"\t\t\t\t\t\t _____________________________________________________________________"<<endl;
    cout<<"\t\t\t\t\t\t|      |      |      |      |      |      |      |      |      |      |"<<endl;
    cout<<"\t\t\t\t\t\t| "<<setw(3)<<game[0][0]<<"  | "<<setw(3)<<game[0][1]<<"  | "<<setw(3)<<game[0][2]<<"  | "<<setw(3)<<game[0][3]<<"  /"<<setw(3)<<game[0][4]<<"/  | "<<setw(3)<<game[0][5]<<"  | "<<setw(3)<<game[0][6]<<"  | "<<setw(3)<<game[0][7]<<"  | "<<setw(3)<<game[0][8]<<"  |"<<setw(4)<<game[0][9]<<"  |                    *"<<endl;
    cout<<"\t\t\t\t\t\t|______|______|______|_____/___/___|______|______|______|______|______|                   ***"<<endl;
    cout<<"\t\t\t\t\t\t|      |      |      |    /___/    |      |      |      |      |      |                  *o***"<<endl;
    cout<<"\t\t\t\t\t\t| "<<setw(3)<<game[1][0]<<"  | "<<setw(3)<<game[1][1]<<"  | "<<setw(3)<<game[1][2]<<"  |"<<setw(3)<<game[1][3]<<"/___/"<<setw(3)<<game[1][4]<<"  | "<<setw(3)<<game[1][5]<<"  | "<<setw(3)<<game[1][6]<<"  | "<<setw(3)<<game[1][7]<<"  | "<<setw(3)<<game[1][8]<<"  | "<<setw(3)<<game[1][9]<<"  |                 *******"<<endl;
    cout<<"\t\t\t\t\t\t|______|______|______|__/___/______|______|______|______|______|______|                   ***"<<endl;
    cout<<"\t\t\t\t\t\t|      |      |      | /___/|      |      |      |      |      |      |                  *o***"<<endl;
    cout<<"\t\t\t\t\t\t| "<<setw(3)<<game[2][0]<<"  | "<<setw(3)<<game[2][1]<<"  | "<<setw(3)<<game[2][2]<<"  |/"<<setw(3)<<game[2][3]<<"/ | "<<setw(3)<<game[2][4]<<"  | "<<setw(3)<<game[2][5]<<"  | "<<setw(3)<<game[2][6]<<"  | "<<setw(3)<<game[2][7]<<"  | "<<setw(3)<<game[2][8]<<"  | "<<setw(3)<<game[2][9]<<"  |                 *o*****"<<endl;
    cout<<"\t\t\t\t\t\t|______|______|______/___/__|______|______|______|______|______|______|                *********"<<endl;
    cout<<"\t\t"<<"\3 Player One Score: "<<0<<"\t\t|      |      |     /___/   |      |      |      |      |      |      |               **#***o****"<<endl;
    cout<<"\t\t\t\t\t\t| "<<setw(3)<<game[3][0]<<"  | "<<setw(3)<<game[3][1]<<"  | "<<setw(3)<<game[3][2]<<"/___/"<<setw(3)<<game[3][3]<<" | "<<setw(3)<<game[3][4]<<"  | "<<setw(3)<<game[3][5]<<"  | "<<setw(3)<<game[3][6]<<"  |\\"<<setw(3)<<game[3][7]<<" \\| "<<setw(3)<<game[3][8]<<"  | "<<setw(3)<<game[3][9]<<"  |              *************"<<endl;
    cout<<"\t\t\t\t\t\t|______|______|__ /___/_____|______|______|______|_\\ ___\\ _____|______|                  *****"<<endl;
    cout<<"\t\t\t\t\t\t|      |      |  /___/      |      |      |      |  \\ ___\\     |      |                 *o*****"<<endl;
    cout<<"\t\t\t\t\t\t| "<<setw(3)<<game[4][0]<<"  | "<<setw(3)<<game[4][1]<<"  | /"<<setw(3)<<game[4][2]<<"/| "<<setw(3)<<game[4][3]<<"  | "<<setw(3)<<game[4][4]<<"  | "<<setw(3)<<game[4][5]<<"  | "<<setw(3)<<game[4][6]<<"  |"<<setw(3)<<game[4][7]<<"\\ ___\\"<<setw(3)<<game[4][8]<<" | "<<setw(3)<<game[4][9]<<"  |                *********"<<endl;
    cout<<"\t\t\t\t\t\t|______|______|______|______|______|______|______|____\\ ___\\ __|______|               *****#*****"<<endl;
    cout<<"\t\t"<<"\6 Player Two Score: "<<0<<"\t\t|      |      |      |      |      |      |      |     \\ ___\\  |      |              *******o*****"<<endl;
    cout<<"\t\t\t\t\t\t| "<<setw(3)<<game[5][0]<<"  | "<<setw(3)<<game[5][1]<<"  | "<<setw(3)<<game[5][2]<<"  | "<<setw(3)<<game[5][3]<<"  | "<<setw(3)<<game[5][4]<<"  | "<<setw(3)<<game[5][5]<<"  | "<<setw(3)<<game[5][6]<<"  | "<<setw(3)<<game[5][7]<<"  \\"<<setw(3)<<game[5][8]<<" \\ | "<<setw(3)<<game[5][9]<<"  |             **o************"<<endl;
    cout<<"\t\t\t\t\t\t|______||____||______|______|______|______|______|______|______|______|            **********#******"<<endl;
    cout<<"\t\t\t\t\t\t|      ||____||      |      |/************|      |      |      |      |           ****o**********o***"<<endl;
    cout<<"\t\t\t\t\t\t| "<<setw(3)<<game[6][0]<<"  ||"<<setw(3)<<game[6][1]<<" || "<<setw(3)<<game[6][2]<<"  | "<<setw(3)<<game[6][3]<<"  |**"<<setw(3)<<game[6][4]<<" | "<<setw(3)<<game[6][5]<<" *| "<<setw(3)<<game[6][6]<<"  | "<<setw(3)<<game[6][7]<<"  | "<<setw(3)<<game[6][8]<<"  | "<<setw(3)<<game[6][9]<<"  |          ****#*****o**********"<<endl;
    cout<<"\t\t\t\t\t\t|______||____||______|______|\\************|______|______|______|______|         *****o************o****"<<endl;
    cout<<"\t\t\t\t\t\t|      ||____||      |      |      |*    *|      |      |      |      |        *************************"<<endl;
    cout<<"\t\t\t\t\t\t| "<<setw(3)<<game[7][0]<<"  ||"<<setw(3)<<game[7][1]<<" || "<<setw(3)<<game[7][2]<<"  | "<<setw(3)<<game[7][3]<<"  | "<<setw(3)<<game[7][4]<<"  |*"<<setw(3)<<game[7][5]<<" *| "<<setw(3)<<game[7][6]<<"  | "<<setw(3)<<game[7][7]<<"  | \\"<<setw(3)<<game[7][8]<<"\\| "<<setw(3)<<game[7][9]<<"  |                ***   ***         "<<endl;
    cout<<"\t\t\t\t\t\t|______||____||______|______|______|*    *|______|______|__\\ __\\ _____|                ***   ***"<<endl;
    cout<<"\t\t\t\t\t\t|      ||____||      |      |      |*********** \\|      |   \\ __\\     |                ***   ***"<<endl;
    cout<<"\t\t\t\t\t\t| "<<setw(3)<<game[8][0]<<"  ||"<<setw(3)<<game[8][1]<<" || "<<setw(3)<<game[8][2]<<"  | "<<setw(3)<<game[8][3]<<"  | "<<setw(3)<<game[8][4]<<"  |*"<<setw(3)<<game[8][5]<<"  | "<<setw(3)<<game[8][6]<<" *| "<<setw(3)<<game[8][7]<<"  | "<<setw(3)<<game[8][8]<<"\\ __\\"<<setw(3)<<game[8][9]<<" |                ***   ***         "<<endl;
    cout<<"\t\t\t\t\t\t|______|______|______|______|______|*********** /|______|_____\\ __\\ __|                ***   ***"<<endl;
    cout<<"\t\t\t\t\t\t|      |      |      |      |      |      |      |      |      \\ __\\  |                ***   ***"<<endl;
    cout<<"\t\t\t\t\tSRART\t=>"<<setw(3)<<game[9][0]<<"  | "<<setw(3)<<game[9][1]<<"  | "<<setw(3)<<game[9][2]<<"  | "<<setw(3)<<game[9][3]<<"  | "<<setw(3)<<game[9][4]<<"  | "<<setw(3)<<game[9][5]<<"  | "<<setw(3)<<game[9][6]<<"  | "<<setw(3)<<game[9][7]<<"  | "<<setw(3)<<game[9][8]<<"  |\\"<<setw(3)<<game[9][9]<<"\\ |              ****  ** ****       "<<endl;
    cout<<"\t\t\t\t\t\t|______|______|______|______|______|______|______|______|______|______|            ||||||||||||||||"<<endl;
}
void layout(int a, int b,int c,int d)
{
//    system("color e");

    string game[10][10]={{"91","92","93","94","95","96","97","98","99","100"},
                         {"81","82","83","84","85","86","87","88","89","90"},
                         {"71","72","73","74","75","76","77","78","79","80"},
                         {"61","62","63","64","65","66","67","68","69","70"},
                         {"51","52","53","54","55","56","57","58","59","60"},
                         {"41","42","43","44","45","46","47","48","49","50"},
                         {"31","32","33","34","35","36","37","38","39","40"},
                         {"21","22","23","24","25","26","27","28","29","30"},
                         {"11","12","13","14","15","16","17","18","19","20"},
                         {"01","02","03","04","05","06","07","08","09","10"}};

    string games[10][10]={{"91\3","92\3","93\3","94\3","95\3","96\3","97\3","98\3","99\3","100\3"},
                          {"81\3","82\3","83\3","84\3","85\3","86\3","87\3","88\3","89\3", "90\3"},
                          {"71\3","72\3","73\3","74\3","75\3","76\3","77\3","78\3","79\3", "80\3"},
                          {"61\3","62\3","63\3","64\3","65\3","66\3","67\3","68\3","69\3", "70\3"},
                          {"51\3","52\3","53\3","54\3","55\3","56\3","57\3","58\3","59\3", "60\3"},
                          {"41\3","42\3","43\3","44\3","45\3","46\3","47\3","48\3","49\3", "50\3"},
                          {"31\3","32\3","33\3","34\3","35\3","36\3","37\3","38\3","39\3", "40\3"},
                          {"21\3","22\3","23\3","24\3","25\3","26\3","27\3","28\3","29\3", "30\3"},
                          {"11\3","12\3","13\3","14\3","15\3","16\3","17\3","18\3","19\3", "20\3"},
                          {"01\3","02\3","03\3","04\3","05\3","06\3","07\3","08\3","09\3", "10\3"}};

    string gamess[10][10]={{"91\6","92\6","93\6","94\6","95\6","96\6","97\6","98\6","99\6","100\6"},
                          {"81\6","82\6","83\6","84\6","85\6","86\6","87\6","88\6","89\6", "90\6"},
                          {"71\6","72\6","73\6","74\6","75\6","76\6","77\6","78\6","79\6", "80\6"},
                          {"61\6","62\6","63\6","64\6","65\6","66\6","67\6","68\6","69\6", "70\6"},
                          {"51\6","52\6","53\6","54\6","55\6","56\6","57\6","58\6","59\6", "60\6"},
                          {"41\6","42\6","43\6","44\6","45\6","46\6","47\6","48\6","49\6", "50\6"},
                          {"31\6","32\6","33\6","34\6","35\6","36\6","37\6","38\6","39\6", "40\6"},
                          {"21\6","22\6","23\6","24\6","25\6","26\6","27\6","28\6","29\6", "30\6"},
                          {"11\6","12\6","13\6","14\6","15\6","16\6","17\6","18\6","19\6", "20\6"},
                          {"01\6","02\6","03\6","04\6","05\6","06\6","07\6","08\6","09\6", "10\6"}};
    game[a][b]=games[a][b];
    game[c][d]=gamess[c][d];
    cout<<"\t\t\t\t\t\t _____________________________________________________________________"<<endl;
    cout<<"\t\t\t\t\t\t|      |      |      |      |      |      |      |      |      |      |"<<endl;
    cout<<"\t\t\t\t\t\t| "<<setw(3)<<game[0][0]<<"  | "<<setw(3)<<game[0][1]<<"  | "<<setw(3)<<game[0][2]<<"  | "<<setw(3)<<game[0][3]<<"  /"<<setw(3)<<game[0][4]<<"/  | "<<setw(3)<<game[0][5]<<"  | "<<setw(3)<<game[0][6]<<"  | "<<setw(3)<<game[0][7]<<"  | "<<setw(3)<<game[0][8]<<"  |"<<setw(4)<<game[0][9]<<"  |                    *"<<endl;
    cout<<"\t\t\t\t\t\t|______|______|______|_____/___/___|______|______|______|______|______|                   ***"<<endl;
    cout<<"\t\t\t\t\t\t|      |      |      |    /___/    |      |      |      |      |      |                  *o***"<<endl;
    cout<<"\t\t\t\t\t\t| "<<setw(3)<<game[1][0]<<"  | "<<setw(3)<<game[1][1]<<"  | "<<setw(3)<<game[1][2]<<"  |"<<setw(3)<<game[1][3]<<"/___/"<<setw(3)<<game[1][4]<<"  | "<<setw(3)<<game[1][5]<<"  | "<<setw(3)<<game[1][6]<<"  | "<<setw(3)<<game[1][7]<<"  | "<<setw(3)<<game[1][8]<<"  | "<<setw(3)<<game[1][9]<<"  |                 *******"<<endl;
    cout<<"\t\t\t\t\t\t|______|______|______|__/___/______|______|______|______|______|______|                   ***"<<endl;
    cout<<"\t\t\t\t\t\t|      |      |      | /___/|      |      |      |      |      |      |                  *o***"<<endl;
    cout<<"\t\t\t\t\t\t| "<<setw(3)<<game[2][0]<<"  | "<<setw(3)<<game[2][1]<<"  | "<<setw(3)<<game[2][2]<<"  |/"<<setw(3)<<game[2][3]<<"/ | "<<setw(3)<<game[2][4]<<"  | "<<setw(3)<<game[2][5]<<"  | "<<setw(3)<<game[2][6]<<"  | "<<setw(3)<<game[2][7]<<"  | "<<setw(3)<<game[2][8]<<"  | "<<setw(3)<<game[2][9]<<"  |                 *o*****"<<endl;
    cout<<"\t\t\t\t\t\t|______|______|______/___/__|______|______|______|______|______|______|                *********"<<endl;
    cout<<"\t\t"<<"\3 Player One Score: "<<score1<<"\t\t|      |      |     /___/   |      |      |      |      |      |      |               **#***o****"<<endl;
    cout<<"\t\t\t\t\t\t| "<<setw(3)<<game[3][0]<<"  | "<<setw(3)<<game[3][1]<<"  | "<<setw(3)<<game[3][2]<<"/___/"<<setw(3)<<game[3][3]<<" | "<<setw(3)<<game[3][4]<<"  | "<<setw(3)<<game[3][5]<<"  | "<<setw(3)<<game[3][6]<<"  |\\"<<setw(3)<<game[3][7]<<" \\| "<<setw(3)<<game[3][8]<<"  | "<<setw(3)<<game[3][9]<<"  |              *************"<<endl;
    cout<<"\t\t\t\t\t\t|______|______|__ /___/_____|______|______|______|_\\ ___\\ _____|______|                  *****"<<endl;
    cout<<"\t\t\t\t\t\t|      |      |  /___/      |      |      |      |  \\ ___\\     |      |                 *o*****"<<endl;
    cout<<"\t\t\t\t\t\t| "<<setw(3)<<game[4][0]<<"  | "<<setw(3)<<game[4][1]<<"  | /"<<setw(3)<<game[4][2]<<"/| "<<setw(3)<<game[4][3]<<"  | "<<setw(3)<<game[4][4]<<"  | "<<setw(3)<<game[4][5]<<"  | "<<setw(3)<<game[4][6]<<"  |"<<setw(3)<<game[4][7]<<"\\ ___\\"<<setw(3)<<game[4][8]<<" | "<<setw(3)<<game[4][9]<<"  |                *********"<<endl;
    cout<<"\t\t\t\t\t\t|______|______|______|______|______|______|______|____\\ ___\\ __|______|               *****#*****"<<endl;
    cout<<"\t\t"<<"\6 Player Two Score: "<<score2<<"\t\t|      |      |      |      |      |      |      |     \\ ___\\  |      |              *******o*****"<<endl;
    cout<<"\t\t\t\t\t\t| "<<setw(3)<<game[5][0]<<"  | "<<setw(3)<<game[5][1]<<"  | "<<setw(3)<<game[5][2]<<"  | "<<setw(3)<<game[5][3]<<"  | "<<setw(3)<<game[5][4]<<"  | "<<setw(3)<<game[5][5]<<"  | "<<setw(3)<<game[5][6]<<"  | "<<setw(3)<<game[5][7]<<"  \\"<<setw(3)<<game[5][8]<<" \\ | "<<setw(3)<<game[5][9]<<"  |             **o************"<<endl;
    cout<<"\t\t\t\t\t\t|______||____||______|______|______|______|______|______|______|______|            **********#******"<<endl;
    cout<<"\t\t\t\t\t\t|      ||____||      |      |/************|      |      |      |      |           ****o**********o***"<<endl;
    cout<<"\t\t\t\t\t\t| "<<setw(3)<<game[6][0]<<"  ||"<<setw(3)<<game[6][1]<<" || "<<setw(3)<<game[6][2]<<"  | "<<setw(3)<<game[6][3]<<"  |**"<<setw(3)<<game[6][4]<<" | "<<setw(3)<<game[6][5]<<" *| "<<setw(3)<<game[6][6]<<"  | "<<setw(3)<<game[6][7]<<"  | "<<setw(3)<<game[6][8]<<"  | "<<setw(3)<<game[6][9]<<"  |          ****#*****o**********"<<endl;
    cout<<"\t\t\t\t\t\t|______||____||______|______|\\************|______|______|______|______|         *****o************o****"<<endl;
    cout<<"\t\t\t\t\t\t|      ||____||      |      |      |*    *|      |      |      |      |        *************************"<<endl;
    cout<<"\t\t\t\t\t\t| "<<setw(3)<<game[7][0]<<"  ||"<<setw(3)<<game[7][1]<<" || "<<setw(3)<<game[7][2]<<"  | "<<setw(3)<<game[7][3]<<"  | "<<setw(3)<<game[7][4]<<"  |*"<<setw(3)<<game[7][5]<<" *| "<<setw(3)<<game[7][6]<<"  | "<<setw(3)<<game[7][7]<<"  | \\"<<setw(3)<<game[7][8]<<"\\| "<<setw(3)<<game[7][9]<<"  |                ***   ***         "<<endl;
    cout<<"\t\t\t\t\t\t|______||____||______|______|______|*    *|______|______|__\\ __\\ _____|                ***   ***"<<endl;
    cout<<"\t\t\t\t\t\t|      ||____||      |      |      |*********** \\|      |   \\ __\\     |                ***   ***"<<endl;
    cout<<"\t\t\t\t\t\t| "<<setw(3)<<game[8][0]<<"  ||"<<setw(3)<<game[8][1]<<" || "<<setw(3)<<game[8][2]<<"  | "<<setw(3)<<game[8][3]<<"  | "<<setw(3)<<game[8][4]<<"  |*"<<setw(3)<<game[8][5]<<"  | "<<setw(3)<<game[8][6]<<" *| "<<setw(3)<<game[8][7]<<"  | "<<setw(3)<<game[8][8]<<"\\ __\\"<<setw(3)<<game[8][9]<<" |                ***   ***         "<<endl;
    cout<<"\t\t\t\t\t\t|______|______|______|______|______|*********** /|______|_____\\ __\\ __|                ***   ***"<<endl;
    cout<<"\t\t\t\t\t\t|      |      |      |      |      |      |      |      |      \\ __\\  |                ***   ***"<<endl;
    cout<<"\t\t\t\t\tSRART\t=>"<<setw(3)<<game[9][0]<<"  | "<<setw(3)<<game[9][1]<<"  | "<<setw(3)<<game[9][2]<<"  | "<<setw(3)<<game[9][3]<<"  | "<<setw(3)<<game[9][4]<<"  | "<<setw(3)<<game[9][5]<<"  | "<<setw(3)<<game[9][6]<<"  | "<<setw(3)<<game[9][7]<<"  | "<<setw(3)<<game[9][8]<<"  |\\"<<setw(3)<<game[9][9]<<"\\ |              ****  ** ****       "<<endl;
    cout<<"\t\t\t\t\t\t|______|______|______|______|______|______|______|______|______|______|            ||||||||||||||||"<<endl;
}
int main()
{
	system("color F0");
//	 PlaySound(TEXT("Music.wav"),NULL,SND_FILENAME|SND_LOOP|SND_ASYNC);
	if(1)
	{
    layout1();
    int nums[10][10]={{91,92,93,94,95,96,97,98,99,100},
                      {81,82,83,84,85,86,87,88,89,90},
                      {71,72,73,74,75,76,77,78,79,80},
                      {61,62,63,64,65,66,67,68,69,70},
                      {51,52,53,54,55,56,57,58,59,60},
                      {41,42,43,44,45,46,47,48,49,50},
                      {31,32,33,34,35,36,37,38,39,40},
                      {21,22,23,24,25,26,27,28,29,30},
                      {11,12,13,14,15,16,17,18,19,20},
                      {01,02,03,04,05,06,07, 8, 9,10}};
    int x,roll;
    srand(time(0));
    int counter = 0;
    // cout<<"Do You Want to Play Game: ";
    while (1)
    {
    	while (i%2==0)
    	{
        	if (counter==0)
        	{
        		cout<<"\n\n\t\t\t\t\t\t Player one's turn!"<<endl;
        		cout<<"\n\n\t\t\t\t\t\t Press ENTER to roll dice...";
        	}
        	cin>>roll;
        	while (roll!=1)
        	{
            	cout<<"\n\n\t\t\t\t\t\t\t You pressed the wrong key."<<endl;
            	cout<<"\n\n\t\t\t\t\t\t\t Try pressing enter key again..."<<endl;
            	cin>>roll;
        	}
//        	 PlaySound(TEXT("dice.wav"),NULL,SND_SYNC);
//        	 PlaySound(TEXT("Music.wav"),NULL,SND_FILENAME|SND_LOOP|SND_ASYNC);
        	x = ((rand()%6)+1);
        	cout<<"Roll : "<<x<<endl;
        	score1 = score1 + x;
        	if ( score1 != 10 && score1 != 12 && score1 != 49 && score1 != 35 )
        	{
            	for (int g = 0; g < 10; g++)
            	{
                	for (int h = 0; h < 10; h++)
                	{
                    	if ( nums[g][h] == score1 )
                    	{
                    		system("cls");
                        		a = g;
                        		b = h;
                        		layout(a,b,c,d);
                        		break;
                        		break;
                    	}
                	}
            	}
        	}
        while ( x == 6 )
        {
            ++counter;
            if (counter==3) 
            {
                cout<<"\n\n\t\t\t\t\t\t\t FOWL...Three time 6 in a row."<<endl;
				score1 = score1 + x;
				system ("cls");
				layout(a,b,c,d); 
            }
            else
            {
                cout<<"\n\n\t\t\t\t\t\t\t Player one's turn again!"<<endl;
                cout<<"\n\n\t\t\t\t\t\t\t Press ENTER to roll dice..."<<endl;
                cin>>roll;
//                 PlaySound(TEXT("dice.wav"),NULL,SND_SYNC);
//                 PlaySound(TEXT("Music.wav"),NULL,SND_FILENAME|SND_LOOP|SND_ASYNC);
                x = ((rand()%6)+1);
                cout<<"Roll : "<<x<<endl;
//                score1 = score1 + x;
                system ("cls");
                layout(a,b,c,d);
            }
        }
        // LADDERS
        if (score1==10)
        {
//        	 PlaySound(TEXT("ladder.wav"),NULL,SND_SYNC);
//        	 PlaySound(TEXT("Music.wav"),NULL,SND_FILENAME|SND_LOOP|SND_ASYNC);
            cout<<"You Entered Ladder!"<<endl;
            score1 = 29;
            system("cls");
            a = 7;
            b = 8;
            layout(a,b,c,d);
        }
        else if (score1==12)
        {
//        	 PlaySound(TEXT("ladder.wav"),NULL,SND_SYNC);
//        	 PlaySound(TEXT("Music.wav"),NULL,SND_FILENAME|SND_LOOP|SND_ASYNC);
            cout<<"You Entered Ladder!"<<endl;
            score1 = 42;
            system("cls");
            a = 5;
            b = 1;
            layout(a,b,c,d);
        }
        else if (score1==49)
        {
//        	 PlaySound(TEXT("ladder.wav"),NULL,SND_SYNC);
//        	 PlaySound(TEXT("Music.wav"),NULL,SND_FILENAME|SND_LOOP|SND_ASYNC);
            cout<<"You Entered Ladder!"<<endl;
            score1 = 68;
            system("cls");
            a = 3;
            b = 7;
            layout(a,b,c,d);
        }
        // SNAKE'S BITE
        else if (score1==35)
        {
//        	 PlaySound(TEXT("bite.wav"),NULL,SND/D_FILENAME|SND_LOOP|SND_ASYNC);
            cout<<"You were bitten by snake..."<<endl;
            score1 = 18;
            system("cls");
            a = 8;
            b = 7;
            layout(a,b,c,d);
        }
        ++i;
        counter = 0;
    }
//    Player Two's Turn
    while (i%2!=0)
    {
        // Player Two's turn!

        if (counter==0)
        {
        	cout<<"\n\n\t\t\t\t\t\t Player Two's turn!"<<endl;
        	cout<<"\n\n\t\t\t\t\t\t Press ENTER to roll dice...";
        }
        cin>>roll;
        while (roll!=1)
        {
            cout<<"\n\n\t\t\t\t\t\t You pressed the wrong key."<<endl;
            cout<<"\n\n\t\t\t\t\t\t Try pressing enter key again..."<<endl;
            cin>>roll;
        }
//         PlaySound(TEXT("dice.wav"),NULL,SND_SYNC);
//         PlaySound(TEXT("Music.wav"),NULL,SND_FILENAME|SND_LOOP|SND_ASYNC);
        x = ((rand()%6)+1);
        cout<<"Roll : "<<x<<endl;
        score2 = score2 + x;
        if ( score2 != 10 && score2 != 12 && score2 != 49 && score2 != 35 )
        {
            for (int g = 0; g < 10; g++)
            {
                for (int h = 0; h < 10; h++)
                {
                    if ( nums[g][h] == score2 )
                    {
                    	system("cls");
                        	c = g;
                        	d = h;
                        	layout(a,b,c,d);
                        	break;
                        	break;
                    }
                
                }
            }
        }
        if ( x == 6 )
        {
        	while ( x == 6 )
        	{
            	++counter;
            	if ( counter == 3 )
            	{
//            		 PlaySound(TEXT("bite.wav"),NULL,SND_SYNC);
                	cout<<"\n\n\t\t\t\t\t\t FOWL...Three time 6 in a row."<<endl;
                	score2 = score2 + x ;
            }
            else
            {
                cout<<"\n\n\t\t\t\t\t\t Player two's turn again!"<<endl;
                cout<<"\n\n\t\t\t\t\t\t Press ENTER to roll dice..."<<endl;
                cin>>roll;
//                 PlaySound(TEXT("dice.wav"),NULL,SND_SYNC);
                x = ((rand()%6)+1);
                score2 = score2 + x;
                for (int g = 0; g < 10; g++)
            	{
                	for (int h = 0; h < 10; h++)
                	{
                    	if ( nums[g][h] == score2 )
                    	{
                    		system("cls");
                        		c = g;
                        		d = h;
                        		layout(a,b,c,d);
                        		break;
                        		break;
                    	}
                	}
            	}
                cout<<"\n\n\t\t\t\t\t\t Roll : "<<x<<endl;
            }
            ++i;
            counter = 0;
        	}
    	}
    	else
    	{
        	if ( score2 == 10 )
        	{
//        		 PlaySound(TEXT("ladder.wav"),NULL,SND_SYNC);
//        		 PlaySound(TEXT("Music.wav"),NULL,SND_FILENAME|SND_LOOP|SND_ASYNC);
            	cout<<"\n\n\t\t\t\t\t\t You Entered Ladder!"<<endl;            
            	score2 = 29;
            	system("cls");
            	c = 7;
            	d = 8;
            	layout(a,b,c,d);
        	}
        	if ( score2 == 12 )
        	{
//        		 PlaySound(TEXT("ladder.wv"),NULL,SND_SYNC);
//        		 PlaySound(TEXT("Music.wav"),NULL,SND_FILENAME|SND_LOOP|SND_ASYNC);
            	cout<<"You Entered Ladder!"<<endl;
            	score2 = 42;
            	system("cls");
            	c = 5;
            	d = 1;
            	layout(a,b,c,d);
        	}
        	else if ( score2 == 49 )
        	{
//        		 PlaySound(TEXT("ladder.wav"),NULL,SND_SYNC);
//        		 PlaySound(TEXT("Music.wav"),NULL,SND_FILENAME|SND_LOOP|SND_ASYNC);
            	cout<<"\n\n\t\t\t\t\t\t You Entered Ladder!"<<endl;
            	score2 = 68;
            	system("cls");
            	c = 3;
            	d = 7;
            	layout(a,b,c,d);
        	}
		// SNAKE'S BITE        
        	else if (score2==35)
        	{
//        		 PlaySound(TEXT("bite.wav"),NULL,SND_SYNC);
//        		 PlaySound(TEXT("Music.wav"),NULL,SND_FILENAME|SND_LOOP|SND_ASYNC);
            	cout<<"\n\n\t\t\t\t\t\t You were bitten by snake..."<<endl;
            	score2 = 18;
            	system("cls");
            	c = 8;
            	d = 7;
            	layout(a,b,c,d);
        	}
        	++i;
        	counter = 0;
    	}
        while (score1 > 100 || score2 > 100 )
        {
            if ( score1 > 100 )
            {
//            	 PlaySound(TEXT("winner.wav"),NULL,SND_SYNC);
                cout<<"\n\n\t\t\t\t\t\t Player One Won!"<<endl;
            }
            else 
            {
//            	 PlaySound(TEXT("winner.wav"),NULL,SND_SYNC);
                cout<<"\n\n\t\t\t\t\t\t Player Two Won!"<<endl;
            }
            break;
        }
    }
    }
}
    return 0;
}
