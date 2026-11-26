//
// Created by RosaA on 23/11/2026.
//

#ifndef PROJECTINFRARED_BASEOBJECT_H
#define PROJECTINFRARED_BASEOBJECT_H


class BaseObject
{
protected:

public:
	BaseObject();
	virtual ~BaseObject();
	virtual void Call() = 0;

	int i{};
	char c{};
};


#endif //PROJECTINFRARED_BASEOBJECT_H
