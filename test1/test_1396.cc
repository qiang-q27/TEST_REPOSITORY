#include "lc1396.h"
#include <gtest/gtest.h>
// Demonstrate some basic assertions.
TEST(SubwaySystemTest, BasicAssertions)
{
	UndergroundSystem *s = undergroundSystemCreate();
	s->checkIn(s, 45, "Leyton", 3);
	s->checkIn(s, 32, "Paradise", 8);
	s->checkIn(s, 27, "Leyton", 10);
	s->checkOut(s, 45, "Waterloo", 15);
	s->checkOut(s, 27, "Waterloo", 20);
	s->checkOut(s, 32, "Cambridge", 22);
	ASSERT_EQ(s->getAverageTime(s, "Paradise", "Cambridge"), 14.00);
	s->getAverageTime(s, "Leyton", "Waterloo");
	s->checkIn(s, 10, "Leyton", 24);
	s->getAverageTime(s, "Leyton", "Waterloo");
	s->checkOut(s, 10, "Waterloo", 38);
	s->getAverageTime(s, "Leyton", "Waterloo");
}