/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file  stats.h
 * @brief  Statiscal Analytics
 *
 * A simple application that performs statistical analytics on a dataset.
 * This header file declares and outline all the functions needs for performing the statistical analytics
 * @author Srideep Maulik
 * @date 11-24-2025
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

/**
 * @brief Prints the statistics of an array including minimum, maximum, mean, and median
 *
 * @param data Unsigned char pointer to an n-element data array
 * @param size Unsigned integer as the size of the array
 *
 * @return void
 */
void print_statistics(unsigned char *data, unsigned int size);

/**
 * @brief Prints the array to the screen
 *
 * @param data Unsigned char pointer to an n-element data array
 * @param size Unsigned integer as the size of the array
 *
 * @return void
 */
void print_array(unsigned char *data, unsigned int size);

/**
 * @brief Returns the median value of the array
 *
 * @param data Unsigned char pointer to an n-element data array
 * @param size Unsigned integer as the size of the array
 *
 * @return Unsigned char median value
 */
unsigned char find_median(unsigned char *data, unsigned int size);

/**
 * @brief Returns the mean value of the array
 *
 * @param data Unsigned char pointer to an n-element data array
 * @param size Unsigned integer as the size of the array
 *
 * @return Unsigned char mean value
 */
unsigned char find_mean(unsigned char *data, unsigned int size);

/**
 * @brief Returns the maximum value in the array
 *
 * @param data Unsigned char pointer to an n-element data array
 * @param size Unsigned integer as the size of the array
 *
 * @return Unsigned char maximum value
 */
unsigned char find_maximum(unsigned char *data, unsigned int size);

/**
 * @brief Returns the minimum value in the array
 *
 * @param data Unsigned char pointer to an n-element data array
 * @param size Unsigned integer as the size of the array
 *
 * @return Unsigned char minimum value
 */
unsigned char find_minimum(unsigned char *data, unsigned int size);

/**
 * @brief Sorts the array from largest to smallest (in-place)
 *        Element [0] will be the largest value, element [n-1] will be the smallest
 *
 * @param data Unsigned char pointer to an n-element data array
 * @param size Unsigned integer as the size of the array
 *
 * @return void
 */
void sort_array(unsigned char *data, unsigned int size); 

#endif /* __STATS_H__ */
