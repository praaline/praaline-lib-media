#ifndef SOUNDINFO_H
#define SOUNDINFO_H

#include <QString>
#include <QPair>
<<<<<<< HEAD

#include "praaline-lib-media_global.h"
=======
>>>>>>> 238625fea2791ea254c0e56a609da0f4a247320b
#include "base/RealTime.h"

namespace Praaline {
namespace Media {

<<<<<<< HEAD
class PRAALINE_LIB_MEDIA_SHARED_EXPORT SoundInfo
=======
class SoundInfo
>>>>>>> 238625fea2791ea254c0e56a609da0f4a247320b
{
public:
    SoundInfo();
    ~SoundInfo();

    QString filename;
    int channels;
    int sampleRate;
    int precisionBits;
    RealTime duration;
    int bitRate;
    QString encoding;
    long long filesize;
    QString checksumMD5;

    static bool getSoundInfo(const QString &filename, SoundInfo &info);
    static QPair<long long, QString> getSizeAndMD5(const QString &filename);

};

} // namespace Media
} // namespace Praaline

#endif // SOUNDINFO_H
