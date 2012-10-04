//---------------------------------------------------------------------------------------------------------
// 特效，从下到上到左百页窗 
//---------------------------------------------------------------------------------------------------------
#include "common.h"
int left_sector (char *frameBuffer,int width, int height, u32_t *buf32)
{
  int i, j, m1, m2, m3, m4, m5, m6, m7;

  m1 = height / 8;
  m2 = height / 4;
  m3 = height / 4 + height / 8;
  m4 = height / 2;
  m5 = height / 2 + height / 8;
  m6 = height / 2 + height / 4;
  m7 = height / 2 + height / 8 + height / 4 - 1;

  for (j = 0; j <= height / 8; j++, m1++, m2++, m3++, m4++, m5++, m6++, m7++)
    {
      for (i = width; i >= 0; i--)
	{
	  drawRect_rgbtest(i, width, j ,   buf32[i + j  * width], frameBuffer);
	  drawRect_rgbtest(i, width, m1,   buf32[i + m1 * width], frameBuffer);
	  drawRect_rgbtest(i, width, m2,   buf32[i + m2 * width], frameBuffer);
	  drawRect_rgbtest(i, width, m3,   buf32[i + m3 * width], frameBuffer);
	  drawRect_rgbtest(i, width, m4,   buf32[i + m4 * width], frameBuffer);
	  drawRect_rgbtest(i, width, m5,   buf32[i + m5 * width], frameBuffer);
	  drawRect_rgbtest(i, width, m6,   buf32[i + m6 * width], frameBuffer);
	  drawRect_rgbtest(i, width, m7,   buf32[i + m7 * width], frameBuffer);
	}
      usleep (10000);
    }

  return 0;
}
