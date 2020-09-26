/* ECU_Tras_CAN_Deploying.h
 *  Implementação dos sensores como valores aleatórios. Utilizar para testar comunicação CAN sem usar os periféricos
 *  relativos aos sensores.
 *  Autor: Everton A. Gomes
 *  Data: 19/09/2020
*/

#ifndef _ECU_TRAS_CAN_DEPLOYING_H
#define _ECU_TRAS_CAN_DEPLOYING_H



//********************************************************************************
//                             #includes
//********************************************************************************

#include "ECU_Tras_Defines.h"

//********************************************************************************
//                             Variáveis
//********************************************************************************

#ifdef ENABLE_CAN_DEPLOYING

//Vetores dos sensores:
uint8_t velocidade_tras[100] = {15,25,29,6,55,46,38,25,36,13,
                                 10,11,1,20,02,23,17,40,9,8,
                                 13,37,51,43,37,2,26,12,53,11,
                                 35,24,47,4,13,39,34,42,51,8,
                                 2,26,17,42,41,33,51,35,22,7,
                                 6,52,40,52,55,57,6,41,33,2,
                                 19,59,1,10,22,36,51,4,18,38,
                                 25,14,46,8,24,11,9,53,14,23,
                                 7,17,43,44,28,32,52,46,29,11,
                                 32,58,27,12,52,54,9,15,16,43}; //valores de velocidade em km/h
                           
uint16_t pressao_tras[10] = {3248,1897,1642,291,2383,2682,317,197,1658,811}; //simula valores convertidos pelo AD 12 bits

uint16_t temp_tras[100] = {108,76,28,79,88,103,21,23,78,29,
                            42,59,50,104,66,35,111,94,73,46,
                            44,79,54,45,48,53,67,41,91,78,
                            85,52,41,33,100,79,47,60,44,103,
                            31,39,59,112,31,25,51,39,43,35,
                            87,64,89,79,100,107,55,68,46,35,
                            69,26,72,53,23,70,52,77,98,90,
                            76,105,82,108,105,49,30,65,20,26,
                            100,36,70,78,41,49,28,61,31,65,
                            67,103,95,61,38,26,36,32,89,48}; //valores de temperatura em °C

uint16_t combustivel[6] = {1,2,3,4,5,6}; //níveis de combustível

uint16_t Rpm[20] = {2872,2874,1918,2882,2160,1748,1866,2499,2286,3365,2037,2881,3312,2650,1608,1703,1808,1856,1605,2505};

//********************************************************************************
//                             Funções
//********************************************************************************  
                             


#endif    //ENABLE_CAN_DEPLOYING

#endif    //_ECU_TRAS_CAN_DEPLOYING_H
