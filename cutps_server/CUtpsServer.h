/*CutpsServer
 *
 *Purpose: Handles client requests through JSON data transport
 *And sends back messages through JSON to the client to manipulate with.
 *Uses APIControl objects whenever initiating some server-side API function call
 *Has a Test model for a shopping cart as the Shopping cart for a particular student
 *Does not save in between sessions
 *
 *
 *Traceability: NR-21
 */

#ifndef CUTPSSERVER_H
#define CUTPSSERVER_H

#include <QTcpServer>
#include <QTcpSocket>
#include "Student.h"
#include "ShoppingCart.h"
#include "CreditCardInformation.h"
#include "BillingAddress.h"
#include "APIControl.h"

class CutpsServer : public QTcpServer
{
    Q_OBJECT
public:
    explicit CutpsServer(QObject *parent = 0);
    void startServer();
    void sendJson(QJsonObject &json);
private:
    QTcpSocket *tcpConnection;
    qint64 bytes;
    QMap<QString,ShoppingCart> testStudentShoppingCart;

signals:

public slots:
    void incomingConnection();
    void readBytes();
    void disconnected(); //recieves signal from tcpConnection
};

#endif // CUTPSSERVER_H
