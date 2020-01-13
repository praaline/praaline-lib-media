#ifndef SOXEXTERNAL_H
#define SOXEXTERNAL_H

#include <QObject>
<<<<<<< HEAD
#include "praaline-lib-media_global.h"
=======
>>>>>>> 238625fea2791ea254c0e56a609da0f4a247320b

namespace Praaline {
namespace Media {

<<<<<<< HEAD
class PRAALINE_LIB_MEDIA_SHARED_EXPORT SoxExternal : public QObject
=======
class SoxExternal : public QObject
>>>>>>> 238625fea2791ea254c0e56a609da0f4a247320b
{
    Q_OBJECT
public:
    explicit SoxExternal(QObject *parent = nullptr);

signals:
    void error(QString msg);
    void status(QString msg);

public slots:
    QString bin();
    QString about();
    QString dat(QString filename, float fps, int duration, bool x, bool y, int xFactor, int yFactor, bool forceNull);
    QString formats();
    float duration(QString filename, float fps);
};

} // namespace Media
} // namespace Praaline

#endif // SOXEXTERNAL_H
