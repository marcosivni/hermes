#ifndef HERMES_GLOBAL_H
#define HERMES_GLOBAL_H

#include <QtCore/qglobal.h>


#if defined(HERMES_LIBRARY)
#  define HERMES_EXPORT Q_DECL_EXPORT
#else
#  define HERMES_EXPORT Q_DECL_IMPORT
#endif

#endif // HERMES_GLOBAL_H
