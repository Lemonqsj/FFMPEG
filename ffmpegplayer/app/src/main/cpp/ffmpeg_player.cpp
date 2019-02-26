//
// Created by shangji.qi on 2019/2/26.
//

#include "ffmpeg_player.h"
#include <cstring>
#include "macro.h"
#include "JavaCallHelper.h"


ffmpeg_player::ffmpeg_player(JavaCallHelper *javaCallHelper,const char *datasource) {
    this->datasource=new char[strlen(datasource)];
    strcpy(this->datasource,datasource);


}

ffmpeg_player::~ffmpeg_player() {

    DELETE(datasource);
}


void ffmpeg_player::paepare() {

    //初始化网络
    avformat_network_init();

    avFormatContext=0;

    //打开视频流  0 on success, a negative AVERROR on failure
    int ret=avformat_open_input(&avFormatContext,datasource,0,0);



}
