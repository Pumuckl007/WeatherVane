#include "miniunit.h"
#include "WeatherDecoder.h"

namespace RPL {
  namespace WeatherDecoderTest{
    MU_TEST(weather_decoder_test_tmp){
      WeatherDecoder wd;
    }

    

    MU_TEST_SUITE(weather_decoder_test){
      MU_RUN_TEST(weather_decoder_test_tmp);
    }
  }
}