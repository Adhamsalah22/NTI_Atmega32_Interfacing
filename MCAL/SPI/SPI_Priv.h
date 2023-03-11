/*
 * SPI_Priv.h
 *
 * Created: 3/11/2023 4:58:15 AM
 *  Author: Ashraf
 */ 


#ifndef SPI_PRIV_H_
#define SPI_PRIV_H_

#define SPCR		*((volatile u8*) 0x2D)
#define SPSR		*((volatile u8*) 0x2E)
#define SPDR		*((volatile u8*) 0x2F)

#define SPIE	7
#define SPE	6
#define DORD	5
#define MSTR	4
#define CPOL	3
#define CPHA	2
#define SPR1	1
#define SPR0	0

#define SPIF	7
#define WCOL	6
#define SPI2X	0





#endif /* SPI_PRIV_H_ */