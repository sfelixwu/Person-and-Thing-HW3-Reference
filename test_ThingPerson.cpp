
// test_GPS.cpp

#include "Person.h"
#include "Thing.h"
#include "Record.h"

int
main(int argc, char *argv[])
{
  // if (argc != 3) return -1;

  GPS_DD gps_Home_Woodland { 38.672215864622636, -121.72280111121437 };
  GPS_DD gps_TLC_UCDavis   { 38.53874868013882,  -121.7542091083306 };

  Person Felix { "987654321", "Felix", gps_Home_Woodland };

  GPS_DD gps_IKEA_Sacramento { 38.58681641563053, -121.55296296578501};

  Thing Swedish_Meatball { Felix };
  Swedish_Meatball.model = "HUVUDROLL";
  Swedish_Meatball.sequence_num = "123456-0000";
  Swedish_Meatball.description = "frozen";
  Swedish_Meatball.location = gps_Home_Woodland;

  Felix.setLocation(gps_TLC_UCDavis, (*getNowJvTime()));

  Felix.dump();
  Swedish_Meatball.dump();

  Json::Value x;
  x = gps_IKEA_Sacramento.dump2JSON();
  std::cout << x.toStyledString() << std::endl;

  Record r1 {Felix, Swedish_Meatball, gps_IKEA_Sacramento, (*getNowJvTime())};
  x = r1.dump2JSON();
  std::cout << x.toStyledString() << std::endl;
  
  return 0;
}
