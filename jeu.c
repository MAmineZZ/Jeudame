#include "graphics.h"
#include <stdio.h>
typedef struct case_j
{
	int etat;//0,1,2
	int joueur;//1=joueur1 && 2= joueur2
	POINT centre, clic;
	
	
}case_j;

case_j case_joue[10][10];

void assigner_tab_jeu()
{
int i, j;
int l=0, c=0;
	
	for(i=50; i<= 950; i=i+100)
	{
		for(j=50; j<= 950; j=j+100)
		{
			case_joue[l][c].centre.x = i;
			case_joue[l][c].centre.y = j;
			
			if(i == 50 || i == 150 || i == 250 || i == 350 || i == 450 || i == 550 || i == 650 || i == 750 || i == 850 || i == 950 )
			
			{
				case_joue[l][c].etat = 1;
			}
			
			if(i == 50 || i == 150 || i == 250 || i == 350 || i == 450 || i == 550 || i == 650 || i == 750 || i == 850 || i == 950 )
			
			{
				case_joue[l][c].etat = 0;
			}
			
			//printf(" %d %d ", case_joue[l][c].centre.x, case_joue[l][c].centre.y );
			
			l++;
			c++;
		}
	}
	
	for(i=50; i<= 950; i=i+100)
	{
		for(j=50; j<= 950; j=j+100)
		{
			
		}
		
	}
	
}





void creer_plateau()
{
	POINT p1, p2;
	int i;
	

	p1.x = 0; p1.y = 0;
	p2.x = 1000; p2.y = 0;
	for(i=0; i<=1000; i=i+100) 
	{
		draw_line(p1,p2,blanc);
		p1.y = i;
		p2.y = i;
	}
	
	p1.x = 0; p1.y = 0;
	p2.x = 0; p2.y = 1000;
	for(i=0; i<=1000; i=i+100) 
	{
		draw_line(p1,p2,blanc);
		p1.x = i;
		p2.x = i;
	}
	draw_line(p1,p2,blanc);
}






int main() 
{
	
	init_graphics(1200,1000);
	affiche_auto_off();
	
	creer_plateau();
	
	assigner_tab_jeu();
	//colorier_cases_blanches();

	
	
	
	
	
	affiche_all();
	wait_escape();
	return(0);
}
	
