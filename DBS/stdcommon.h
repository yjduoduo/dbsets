#ifndef STDCOMMON_H
#define STDCOMMON_H

#include <QtGui>
#include <QString>


#if 1
//±àÂëºº×Ö
//#define str_china(A)     QString::fromLocal8Bit(#A)
#define str_china(A)     QString::fromLocal8Bit(A)
//#define str_china(A)     QString::fromUtf8(#A)
#else
#define str_china(A)     codec->toUnicode(#A)
#endif


#endif // STDCOMMON_H
