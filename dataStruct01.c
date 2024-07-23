#include <stdio.h>

typedef struct USERDATA {
	int age;
	char name[32];
	char phone[32];
	struct USERDATA* pNext;
} USERDATA;

int main(void) {
	USERDATA user[4] = {
		{12, "lob", "010-1234-5678", NULL},
		{12, "onA", "010-1234-5678", NULL},
		{12, "beat", "010-1234-5678", NULL},
		{12, "Hecop", "010-1234-5678", NULL},
	};

	user[0].pNext = &user[1];
	user[1].pNext = &user[2];
	user[2].pNext = &user[3];
	
	USERDATA* pUser = &user[0];

	while (pUser != NULL)
	{
		printf("addr: [%p], age: %d, name: %s, phone: %s\n",pUser, pUser->age, pUser->name, pUser->phone);
		pUser = pUser->pNext;
	}
	
}