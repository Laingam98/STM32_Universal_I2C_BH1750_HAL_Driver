/*
 * bh1750.h
 *
 *  Created on: Oct 20, 2025
 *      Author: Laingam_Laishram
 */

#ifndef INC_BH1750_H_
#define INC_BH1750_H_

#include "stdio.h"

#define BH1750_ADDR 0X23 //I2C Address

//Function Prototypes
void BH1750_Init(I2C_HandleTypeDef *hi2c);
float BH1750_ReadLux(I2C_HandleTypeDef *hi2c);

//Error Status
HAL_StatusTypeDef Transmit_Err, Receive_Err;

//BH1750 initialization
void BH1750_Init(I2C_HandleTypeDef *hi2c) {
	uint8_t cmd[] = {0x10};
	Transmit_Err = HAL_I2C_Master_Transmit(hi2c, BH1750_ADDR << 1, cmd, sizeof(cmd), HAL_MAX_DELAY);
	if(Transmit_Err != HAL_ERROR){
		printf("\r\n");
		printf("BH1750 intialized...");
		printf("\r\n");
	}
}

//Reading Light Intensity from BH1750 sensor
float BH1750_ReadLux(I2C_HandleTypeDef *hi2c){
	uint8_t data[2];
	HAL_I2C_Master_Receive(hi2c, BH1750_ADDR << 1, data, sizeof(data), HAL_MAX_DELAY);

	uint16_t lux = (data[0] << 8) | data[1];
	return (float)lux / 1.2;
}


#endif /* INC_BH1750_H_ */
