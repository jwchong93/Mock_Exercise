#include "unity.h"
#include "dailyLife.h"
#include "mock_dailyWork.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_dailyLifeCycle_should_follow_the_cycle_of_aladin()
{
	Person aladin = {.name = "Aladin",.gender = m};
	Person princess = {.name ="Princess",.gender = f};
	FriendList testList;
	Food newFood[] = {{.name = "Hamburger",.status=AVAILABLE},{.name = "pita_and_curry",.status=AVAILABLE},{.name = "curry_chicken",.status=AVAILABLE}};
	WaterCondition water[]= {HOT,COLD,WARM};
	
	//Morning , breakfast
	getWhateverFoodInFridge_ExpectAndReturn(&newFood[0]);
	personEats_ExpectAndReturn(&aladin,&newFood[0],newFood[0].name);
	personShouts_Expect(&aladin, "Yuk!!!");
	
	//Morning , bathing
	personShowers_Expect(&aladin,&water[0]);
	
	//Afternoon , lunch
	getWhateverFoodInFridge_ExpectAndReturn(&newFood[1]);
	personEats_ExpectAndReturn(&aladin,&newFood[1],newFood[1].name);
	personShouts_Expect(&aladin, "What a good meal!");
	
	//Afternoon, bathing
	personShowers_Expect(&aladin,&water[1]);
	
	//Inviting Princess
	personInvites_ExpectAndReturn(&aladin,&testList,"Princess",&princess);
	
	//Chating with princess
	personTalks_ExpectAndReturn(&aladin, &princess,GOOD_CONVERSATION);
	
	personShouts_Expect(&aladin,"What a good conversation we have!");
	
	//Evening , dinner
	getWhateverFoodInFridge_ExpectAndReturn(&newFood[2]);
	personEats_ExpectAndReturn(&aladin,&newFood[2],newFood[2].name);
	personShouts_Expect(&aladin, "Yuk!!!");
	
	//Afternoon, bathing
	personShowers_Expect(&aladin,&water[2]);
	dailyLifeCycle (&aladin,&testList);
	
	TEST_ASSERT_EQUAL(EATEN,newFood[0].status);
	TEST_ASSERT_EQUAL(EATEN,newFood[1].status);
	TEST_ASSERT_EQUAL(EATEN,newFood[2].status);
}

