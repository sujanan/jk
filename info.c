#include "info.h"

int infoVerify(struct map *info)
{
    return 1;
}

i64 infoGetTotalBytes(struct map *info)
{
    struct list *files = benAsList(mapGet(info, "files"));

    u64 length = 0;
    for (u64 i = 0; i < files->len; i++) {
        length += benAsI64(
            mapGet(benAsMap(files->values[i]), "length"));
    }
    return length;
}
