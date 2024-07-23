#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a new type describing a dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
}

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
static int _strlen(const char *s);
static char *_strcpy(char *dest, const char *stc);
void free_dog(dog_t *d);

#endif /* DOG_H */
