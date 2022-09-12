/*
 * main.c
 *
 *  Created on: Sep 12, 2022
 *      Author: Mahmoud Essam
 */

#include "stdio.h"
#define min(i, j) (((i) < (j)) ? (i) : (j))
#define max(i, j) (((i) > (j)) ? (i) : (j))
#define DPRINTF(...)	{fflush(stdout);\
		fflush(stdin);\
		printf(__VA_ARGS__);\
		fflush(stdout);\
		fflush(stdin);}
//- The average score. DONE
//- Names of all the students whose test scores are below the average,
//  with an appropriate warning message. DONE
//- Highest test score. DONE
//- Name of the top student, with an appreciation message. DONE


int findMax(int scores[],int studentsNumber)
{
	// Find the maximum number in the scores array and return its index
	int mx = 0;
	for(int i = 0; i < studentsNumber;i++)
	{
		mx = max(mx, scores[i]);
	}
	for(int i = 0; i < studentsNumber;i++)
	{
		if(mx == scores[i])
			return i;
	}
	return 0;
}
float AverageScore(int scores[],int studentsNumber)
{
	// Calculate Average Score and return it
	float average = 0,sum = 0;
	for(int i = 0; i < studentsNumber ; i++)
	{
		sum += scores[i];
	}
	average = sum / studentsNumber ;
	return average;
}
int main(void)
{
	int studentsNumber;
	DPRINTF("Enter The Number Of Students you will enter: ");
	scanf("%d",&studentsNumber);
	char names[studentsNumber][20];
	int scores[20];
	for(int i = 0; i < studentsNumber; i++)
	{
		DPRINTF("Enter Student %d name and score: ",i+1);
		scanf("%s %d",&names[i],&scores[i]);
	}

	int ind = findMax(scores,studentsNumber);

	float averageScore = AverageScore(scores,studentsNumber);

	DPRINTF("Average score is %.2f.\n",averageScore);
	DPRINTF("Highest Score is %d.\n",scores[ind]);
	DPRINTF("Congrats to the top student '%s' Keep up the good work.\n",names[ind]);

	// Print all The names that scored bellow the average score with an appropriate warning message.
	DPRINTF("As For the students that scored below the average : \n");
	for(int i = 0; i < studentsNumber; i++)
	{
		if(scores[i] < averageScore)
			DPRINTF("%s\n",names[i]);
	}
	DPRINTF("Study hard next time or you will be expelled.\n");
	return 0;
}

