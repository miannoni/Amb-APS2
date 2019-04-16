/*
 * tfont.h
 *
 * Created: 05/03/2019 17:20:03
 *  Author: eduardo
 */ 


#ifndef TICONES_H_
#define TICONES_H_

typedef struct {
	const uint8_t *data;
	uint16_t width;
	uint16_t height;
	uint8_t dataSize;
	int indice;
} tImage;

typedef struct {
	char nome[32];           // nome do ciclo, para ser exibido
	const tImage *icone;
} tciclo;
 
#endif /* TFONT_H_ */

