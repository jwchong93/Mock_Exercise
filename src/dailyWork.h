#ifndef dailyWork_H
#define dailyWork_H
#include "dailyLife.h"

/**
 * Person eats the given food
 * Input:
 * 	me	is the person eats	
 * 	food	is food to eat
 * Return:
 * 	the name of the food eaten
 */
char *personEats(Person *me, Food *food);

/**
 * Person showers with HOT, WARM, or COLD water
 * Input:
 * 	me			is the person showers
 * 	waterCondition	is the condition of the water
 */
void personShowers(Person *me, WaterCondition *waterCondition);

/**
 * Get whatever food in the fridge
 * Return:
 * 	the food from the fridge
 */
Food *getWhateverFoodInFridge();
/**
 * Person shouts
 * Input:
 * 	me	is the person shouts
 * 	remark	is the remark shouted
 */
void personShouts(Person *me, char *remark);

/**
 * Person invites friend
 * Input:
 * 	me         is the person inviting friend
 * 	friends    is the list of friends
 * 	friendName is friend’s name to invite
 * Return:
 * 	the invited friend
 */
Person *personInvites(Person *me, 
                      FriendList *friends, 
                      char *friendName);

/**
 * Person talks to friend
 * Input:
 * 	me	is the person talks to the friend	
 * 	friend	is the friend talked to
 * Return:
 * 	whether the conversation was good or involved heated
 *	argument.
 */
ConversationResult personTalks(Person *me, Person *friend);


#endif // dailyWork_H
