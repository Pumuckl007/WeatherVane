#include "miniunit.h"
#include "WeatherDecoderTest.h"

using namespace RPL;

int main(){
  MU_RUN_SUITE(WeatherDecoderTest::weather_decoder_test);
	MU_REPORT();
	return minunit_status;
}