#include "country.h"

#include <TJpg_Decoder.h>

/**
 * @brief 显示国家国旗在对应位置
 * numu=0 中国
 * numu=1 美国
 * 
 */
void Country::printfcountry(int numx,int numy,int numn)
{
    switch(numn)
  {
    case 0:
      TJpgDec.drawJpg(numx,numy,china, sizeof(china));
      break;
    case 1:
      TJpgDec.drawJpg(numx,numy,USA, sizeof(USA));
      break;
    default:
      Serial.println("显示国旗错误");
      break;
  }
}

