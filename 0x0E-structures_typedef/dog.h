#ifndef _DOG_H_
#define _DOG_H_


/**
 * struct dog - new type define for gogs archives
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name og dog's owner
 * Description: data structure for dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
