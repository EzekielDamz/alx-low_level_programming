#ifndef _DOG_H_
#define _DOG_H_
/**
  * struct dog - a struct that  create a dog info
  *
  * @name: the name of dog
  * @age: the age of dog
  * @owner: owner of the dog
  *
  * Description: first struct with alx
  */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
