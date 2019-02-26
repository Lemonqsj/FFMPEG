//
// Created by shangji.qi on 2019/2/26.
//

#ifndef FFMPEGPLAYER_FFMPEG_PLAYER_H
#define FFMPEGPLAYER_FFMPEG_PLAYER_H

#include "JavaCallHelper.h"

extern "C"{
#include <libavformat/avformat.h>
};
class ffmpeg_player {

public:
    ffmpeg_player(JavaCallHelper* javaCallHelper,const char* datasource);
    ~ffmpeg_player();


    void paepare();

 private:
    char* datasource;
    AVFormatContext* avFormatContext;

};


#endif //FFMPEGPLAYER_FFMPEG_PLAYER_H
