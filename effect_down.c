//--------------------------------------------------------------------------------------------------------
// 特效： 从上到下 打印图片
//--------------------------------------------------------------------------------------------------------

#include "common.h"
int down(char *frameBuffer, int width, int height, u32_t * buf32)
{
  int i = 0;
  int j = 0;

  for (j = 0; j < height; j++)
    {
      for (i = 0; i < width; i++)
	{
	  drawRect_rgbtest (i, width, j, buf32[j * width + i], frameBuffer);
	}
      usleep (5000);
    }
}
