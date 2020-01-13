#ifndef PRAALINE_LIB_MEDIA_GLOBAL_H
#define PRAALINE_LIB_MEDIA_GLOBAL_H

/*
    Praaline - Libraries - Media
    Copyright (c) 2011-2020 George Christodoulides

    This program or module is free software: you can redistribute it
    and/or modify it under the terms of the GNU General Public License
    as published by the Free Software Foundation, either version 3 of
    the License, or (at your option) any later version. It is provided
    for educational purposes and is distributed in the hope that it will
    be useful, but WITHOUT ANY WARRANTY; without even the implied
    warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See
    the GNU General Public License for more details.
*/

#include <QtGlobal>

#if defined(LIBRARY_PRAALINE_LIB_MEDIA)
#  define PRAALINE_LIB_MEDIA_SHARED_EXPORT Q_DECL_EXPORT
#else
#  define PRAALINE_LIB_MEDIA_SHARED_EXPORT Q_DECL_IMPORT
#endif


#if !defined(USE_NAMESPACE_PRAALINE_LIB_MEDIA) /* namespace */
# define PRAALINE_LIB_MEDIA_NAMESPACE
# define PRAALINE_LIB_MEDIA_USING_NAMESPACE
# define PRAALINE_LIB_MEDIA_BEGIN_NAMESPACE
# define PRAALINE_LIB_MEDIA_END_NAMESPACE
#else /* namespace */
# define PRAALINE_LIB_MEDIA_NAMESPACE Praaline::Media
# define PRAALINE_LIB_MEDIA_USING_NAMESPACE using namespace Praaline::Media;
# define PRAALINE_LIB_MEDIA_BEGIN_NAMESPACE namespace Praaline { namespace Media {
# define PRAALINE_LIB_MEDIA_END_NAMESPACE } }
#endif /* namespace */


#endif // PRAALINE_LIB_MEDIA_GLOBAL_H
