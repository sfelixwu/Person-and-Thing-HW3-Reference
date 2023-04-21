
#include "Record.h"

Record::Record(Person _p, Thing _t, GPS_DD _g, JvTime _jt)
{
  this->who = _p;
  this->what = _t;
  this->where = _g;
  this->when = _jt;
}

Record::Record()
{
}

void
Record::setWho(Person _p)
{
  this->who = _p;
}

void
Record::setWhat(Thing _t)
{
  this->what = _t;
}

void
Record::setWhere(GPS_DD _g)
{
  this->where = _g;
}

void
Record::setWhen(JvTime _jt)
{
  this->when = _jt;
}

Json::Value
Record::dump2JSON()
{
  Json::Value result;
  result["where"] = (this->where).dump2JSON();
  result["when"] = (this->when).dump2JSON();
  return result;
}
