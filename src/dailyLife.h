#ifndef dailyLife_H
#define dailyLife_H



typedef enum {UNKNOWN, EATEN, AVAILABLE} Status;

typedef enum {m, f} Gender;

typedef enum {HOT, WARM, COLD} WaterCondition;

typedef enum {HEATED_ARGUMENT, GOOD_CONVERSATION} ConversationResult;

typedef struct {
	char *name;		// Name of the food
	Status status;
} Food;

typedef struct {
	char *name;		// Name of the person
	Gender gender;
} Person;

typedef struct list{
	Person friends;
	struct list *next;
}FriendList;

void dailyLifeCycle (Person *person, FriendList * friends);



#endif // dailyLife_H
