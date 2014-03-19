#ifndef PROCESS_TEMP_FILE_HPP
#define PROCESS_TEMP_FILE_HPP

// Copyright Abel Sinkovics (abel@sinkovics.hu)  2013.
// Distributed under the Boost Software License, Version 1.0.
//    (See accompanying file LICENSE_1_0.txt or copy at
//          http://www.boost.org/LICENSE_1_0.txt)

#include <just/process.hpp>

#include <string>

extern const std::string temp_filename;

bool file_exists(const std::string& filename_);
bool file_descriptor_is_open(just::process::impl::fd_t fd_);
void write_file(const std::string& filename_, const std::string& content_);
std::string read_file(const std::string& filename_);

just::process::impl::fd_t open_read_only(const std::string& fn_);

#endif


