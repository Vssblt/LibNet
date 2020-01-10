#ifndef RBTREE_H
#define RBTREE_H

typedef struct MapElement{
	char *key;
	char *value;
	struct Tree *left;
	struct Tree *right;
	struct Tree *parent;
	int color;
};

void tree_add(MapElement *root, const char *key, const char *value);

void tree_del(MapElement *root, const char *key, MapElement *element);

MapElement tree_first(EdtpMap *root);

MapElement tree_last(EdtpMap *root);

MapElement tree_next(MapElement *root);

char *tree_search(EdtpMap *map, const char *key);

void delete_tree(EdtpMap *map);


#endif
