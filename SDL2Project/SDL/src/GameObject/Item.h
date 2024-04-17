#pragma once
#include "Sprite2D.h"
#include "ResourceManagers.h"

enum class ItemType
{
	Item_INVALID = 0,
	Item_LOG,
	Item_BERRIES,
	Item_ROPE,
	Item_WHEAT,
	Item_TWIG,
	Item_FRUIT,
	Item_ROCK,
};

class Item : public Sprite2D
{
private:
	ItemType itemType;
	bool consumable;
	int hungerPerConsumable;
public:
	//void Consume(Character* player);
	Item(ItemType type);
};
