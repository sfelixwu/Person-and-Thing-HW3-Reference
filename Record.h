
#ifndef _RECORD_H_
#define _RECORD_H_

// Record.h

#include "Person.h"
#include "Thing.h"
#include "GPS.h"
#include "JvTime.h"

#include "ecs36b_Common.h"

class Record
{
 private:
  Person who;
  Thing what;
  GPS_DD where;
  JvTime when;
  
public:
  Record(Person, Thing, GPS_DD, JvTime);
  Record();
  void setWho(Person);
  void setWhat(Thing);
  void setWhere(GPS_DD);
  void setWhen(JvTime);
  Json::Value dump2JSON();
};

#endif  /* _RECORD_H_ */
