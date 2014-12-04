/*
 *The Server Controller responsible for using the QueryControl to query the database for persistently stored data
 *
 *Traceability: SS-06 (Part of Server Subsystem)
 *
 *
 */

#include "QueryControl.h"
#include "Course.h"
#include "ShoppingCart.h"
#include <QList>

#ifndef SERVERSTORAGECONTROL_H
#define SERVERSTORAGECONTROL_H

class ServerStorageControl
{
public:
    ServerStorageControl();
    QList<Course*>* retrieveContent(Student*, Term*);
    ShoppingCart* retrieveShoppingCart(Student*);

private:




};

#endif // SERVERSTORAGECONTROL_H
