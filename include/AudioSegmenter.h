#ifndef AUDIOSEGMENTER_H
#define AUDIOSEGMENTER_H

#include <QString>
#include <QList>
<<<<<<< HEAD
#include "praaline-lib-media_global.h"
#include "base/RealTime.h"
=======
#include "pncore/base/RealTime.h"
>>>>>>> 238625fea2791ea254c0e56a609da0f4a247320b

namespace Praaline {

namespace Core {
    class Interval;
}

namespace Media {

<<<<<<< HEAD
class PRAALINE_LIB_MEDIA_SHARED_EXPORT AudioSegmenter
=======
class AudioSegmenter
>>>>>>> 238625fea2791ea254c0e56a609da0f4a247320b
{
public:
    static bool resample(const QString &filenameIn, const QString &filenameOut,
                         uint newSamplingRate, bool normalise = false, int channels = 1);
    static bool segment(const QString &filenameIn, const QString &pathOut,
                        QList<Praaline::Core::Interval *> segments, const QString &attribute = QString(),
                        uint newSamplingRate = 0, bool normalise = false, int channels = 1);
    static bool segment(const QString &filenameIn, const QString &filenameOut,
                        RealTime timeFrom, RealTime timeTo,
                        uint newSamplingRate = 0, bool normalise = false, int channels = 1);

    static QList<QStringList> script(const QString &filenameIn, const QString &pathOut,
                                     QList<Praaline::Core::Interval *> segments, const QString &attribute = QString(),
                                     uint newSamplingRate = 0, bool normalise = false, int channels = 1);
    static bool bookmarkCutting(const QString &filenameIn, const QString &pathOut, QList<Praaline::Core::Interval *> intervalsToRemove);

    static bool runSoxCommand(const QString &command);
    static bool generateSilence(const QString &filenameOut, RealTime duration);

private:
    AudioSegmenter() {}
    ~AudioSegmenter() {}
};

} // namespace Media
} // namespace Praaline

#endif // AUDIOSEGMENTER_H
