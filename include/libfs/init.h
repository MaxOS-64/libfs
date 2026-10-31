//
// Created by Max Tyson on 31/10/2026.
//

#ifndef LIBFS_INIT_H
#define LIBFS_INIT_H

#include <cstdint>
#include <libfs/directory.h>
#include <libkpi/processes/thread.h>

namespace LibFS {

    bool fs_full_ready();
    void wait_for_full_fs();

}

#endif //LIBFS_INIT_H
