//
// Created by Max Tyson on 31/10/2026.
//

#include <libfs/init.h>


namespace LibFS {

    bool fs_full_ready() {

        const char* root = "/0/os/";
        uint64_t handle = open_directory(root);
        close_directory(handle);

        // Positive handle means was ready
        return handle != 0;

    }

    void wait_for_full_fs() {

        while (!fs_full_ready())
            MaxOS::KPI::processes::yield();

    }

}
