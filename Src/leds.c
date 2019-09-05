/**
@file    leds.c
@version 0.0
@date    2019.09.01

@author  alexander
@email   zhevak@mail.ru

@brief   вставьте сюда краткое описание файла
*/


#include "leds.h"


void gled_off(void)
{
  GLED_GPIO_Port->BSRR = GLED_Pin << 16;
}


void gled_on(void)
{
  GLED_GPIO_Port->BSRR = GLED_Pin;
}


void gled_toggle(void)
{
  if ((GLED_GPIO_Port->ODR & GLED_Pin) == 0)
    GLED_GPIO_Port->BSRR = GLED_Pin;
  else
    GLED_GPIO_Port->BSRR = GLED_Pin << 16;
}



void oled_off(void)
{
  OLED_GPIO_Port->BSRR = OLED_Pin << 16;
}


void oled_on(void)
{
  OLED_GPIO_Port->BSRR = OLED_Pin;
}


void oled_toggle(void)
{
  if ((OLED_GPIO_Port->ODR & OLED_Pin) == 0)
    OLED_GPIO_Port->BSRR = OLED_Pin;
  else
    OLED_GPIO_Port->BSRR = OLED_Pin << 16;
}



void rled_off(void)
{
  RLED_GPIO_Port->BSRR = RLED_Pin << 16;
}


void rled_on(void)
{
  RLED_GPIO_Port->BSRR = RLED_Pin;
}


void rled_toggle(void)
{
  if ((RLED_GPIO_Port->ODR & RLED_Pin) == 0)
    RLED_GPIO_Port->BSRR = RLED_Pin;
  else
    RLED_GPIO_Port->BSRR = RLED_Pin << 16;
}



void bled_off(void)
{
  BLED_GPIO_Port->BSRR = BLED_Pin << 16;
}


void bled_on(void)
{
  BLED_GPIO_Port->BSRR = BLED_Pin;
}


void bled_toggle(void)
{
  if ((BLED_GPIO_Port->ODR & BLED_Pin) == 0)
    BLED_GPIO_Port->BSRR = BLED_Pin;
  else
    BLED_GPIO_Port->BSRR = BLED_Pin << 16;
}

