/*Billing Address header class
 *Date last modified: 10/24/2014
 *By: Rob
 *
 *Billing address is for use as part of the PaymentInformation class
 *that has this component
 *
 */
#ifndef BILLINGADDRESS_H
#define BILLINGADDRESS_H

#include <string>
#include <QObject>
#include <QString>

class BillingAddress : public QObject
{
    Q_OBJECT
public:
    BillingAddress();
    ~BillingAddress();
    QString getName();
    int getHouseNumber();
    QString getStreetName();
    QString getCity();
    QString getProvince();
    QString getPostalCode();

    void setAddress(QString,int,QString,QString,QString,QString);
    void setAddress(const BillingAddress&);

private:
    QString name;
    int houseNumber;
    QString streetName;
    QString city;
    QString province;
    QString postalCode;
};

#endif // BILLINGADDRESS_H
