#include "dailyLife.h"
#include "dailyWork.h"
#include <stdio.h>
void dailyLifeCycle (Person *person, FriendList * friends)
{
	WaterCondition water[]= {HOT,COLD,WARM};
	Person *friend1;
	ConversationResult result;
	int i=0;
	Food *anyFood;
	char *foodEaten;
	
	for(i=0;i<2;i++)
	{
		Food *anyFood = getWhateverFoodInFridge();
		char *foodEaten = personEats(person,anyFood);
		anyFood->status = EATEN;
		if(strcmp(foodEaten,"pita_and_curry")==0)
			personShouts(person,"What a good meal!");
		else
			personShouts(person,"Yuk!!!");
		
		personShowers(person,&water[i]);
	}
	
	//Invite friend and have a chat.
	friend1 = personInvites(person,friends,"Princess");
	result = personTalks(person, friend1);
	
	if(result=GOOD_CONVERSATION)
		personShouts(person,"What a good conversation we have!");
	else
		personShouts(person,"I don’t like this conversation!");
		
	anyFood = getWhateverFoodInFridge();
	foodEaten = personEats(person,anyFood);
	anyFood->status = EATEN;
	if(strcmp(foodEaten,"pita_and_curry")==0)
		personShouts(person,"What a good meal!");
	else
		personShouts(person,"Yuk!!!");
		
	personShowers(person,&water[i]);
	
}
