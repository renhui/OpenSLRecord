
#pragma once
#ifndef WLPLAYER_ANDROIDLOG_H
#define WLPLAYER_ANDROIDLOG_H

#include <android/log.h>
#define LOGD(FORMAT,...) __android_log_print(ANDROID_LOG_DEBUG,"renhui",FORMAT,##__VA_ARGS__);
#define LOGE(FORMAT,...) __android_log_print(ANDROID_LOG_ERROR,"renhui",FORMAT,##__VA_ARGS__);

#define LOG_DEBUG false

#endif //WLPLAYER_ANDROIDLOG_H
