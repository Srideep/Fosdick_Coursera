/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 *Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.c 
 * @brief Implementation file for statistical analytics
 *
 * Implements all the functions declared in stats.h
 *
 * @author Srideep Maulik 
 * @date 11-24-2025
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  printf("======================================\n");
  printf("  Statistical Analytics Application\n");
  printf("======================================\n\n");
  printf("Unsorted Array:\n");
  printf("---------------\n");
  print_array(test, SIZE);
  print_statistics(test, SIZE);
  printf("\n");
  printf("\n"); 
  printf("Sorted Array:\n");
  printf("---------------\n");
  sort_array(test,SIZE);
  print_array(test,SIZE);
  print_statistics(test,SIZE);

}

/* Add other Implementation File Code Here */
void print_statistics(unsigned char *data, unsigned int size)
{
	unsigned char min = find_minimum(data,size);
	unsigned char max = find_maximum(data, size);
	unsigned char mean = find_mean(data,size);
	unsigned char median = find_median(data,size);
	
	printf("\n======== Statistics ====\n");
	printf("Minimum: %u\n", min);
        printf("Maximum: %u\n", max);
 	printf("Mean: %u\n", mean);
	printf("Median: %u\n", median);
	printf("====================\n\n");

}

void print_array(unsigned char *data, unsigned int size)
{
	for (unsigned int i = 0; i<size; i++)
	{
		printf("%3u" , data[i]);
	
		if((i+1)%10 == 0) 
		{
			printf("\n");
		}
		else
		{printf(", ");}
	}
}

unsigned char find_median(unsigned char *data, unsigned int size)
{
	unsigned char median;
	unsigned char temp[size];
	
	for(unsigned int i=0;i<size;i++)
	{
		temp[i] = data[i];
	}

	sort_array(temp,size);
	if(size%2 == 1) { median = temp[size/2];}
	else {
		unsigned int mid1 = temp[size/2 -1];
		unsigned int mid2 = temp[size/2];
		median = (mid1+mid2)/2;
	}
	return median;

}

unsigned char find_mean(unsigned char *data, unsigned int size)
{
	unsigned int sum = 0;
	for (unsigned int i=0; i<size; i++){
	sum += data[i];
	}
	unsigned char mean = sum/size;
	return mean;
}

unsigned char find_maximum(unsigned char *data, unsigned int size)
{
	unsigned char max = data[0];

	for (unsigned int i=0; i<size; i++){
		if(data[i]>max){
			max = data[i];
		}
	}
	return max;
}

unsigned char find_minimum(unsigned char *data, unsigned int size)
{
	unsigned char min = data[0];

	for (unsigned int i=0; i<size;i++){
		if(data[i]<min){min=data[i];}
	}
	return min;
}

void sort_array(unsigned char *data, unsigned int size)
{
	for (unsigned int i =0; i < size-1; i++)
	{
		for (unsigned int j=0; j < size-i-1; j++)
		{
			if(data[j]<data[j+1])
			{
				unsigned char temp = data[j];
				data[j] = data[j+1];
				data[j+1] = temp;
			}
		}
	}
}

