/*
 * This file was generated by qdbusxml2cpp version 0.7
 * Command line was: qdbusxml2cpp AP_Service_6485.xml -p AP_Interface
 *
 * qdbusxml2cpp is Copyright (C) 2010 Nokia Corporation and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef AP_INTERFACE_H_1385517360
#define AP_INTERFACE_H_1385517360

#include <QtCore/QObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>
#include <QtDBus/QtDBus>

/*
 * Proxy class for interface local.Service
 */
class LocalServiceInterface: public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
    { return "local.Service"; }

public:
    LocalServiceInterface(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = 0);

    ~LocalServiceInterface();

public Q_SLOTS: // METHODS
    inline QDBusPendingReply<int> getStart(bool in0, const QString &in1, const QString &in2)
    {
        QList<QVariant> argumentList;
        argumentList << qVariantFromValue(in0) << qVariantFromValue(in1) << qVariantFromValue(in2);
        return asyncCallWithArgumentList(QLatin1String("getStart"), argumentList);
    }

Q_SIGNALS: // SIGNALS
};

namespace local {
  typedef ::LocalServiceInterface Service;
}
#endif
