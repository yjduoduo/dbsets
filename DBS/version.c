#include "version.h"

#define DBS_VERSION "数据库服务器 v1.0"


const char *dbsets_version = DBS_VERSION;

const char * about_version()
{
    return dbsets_version;
}
