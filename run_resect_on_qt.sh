#!/usr/bin/env sh

#     '--intrinsic=avx2' \
    # '--single-header' \
    # '--print-diagnostics' \
    # '--add-defines=-DDEBUG=1' \
    # '--system-include-path=/home/jboehland/repos/common-lisp/FFI/libresect/llvm-bin/lib/clang/13.0.0/include' \
    # '--cpu=x86_64' \
    # '--arch=x86_64' \

CMD="./resect_dump_to_sqlite"

$CMD /usr/include/qt6/QtCore/QtCore \
    ./test_qt_core \
    '--add=-v' \
    '--add=-stdlib++-isystem/home/jboehland/repos/common-lisp/FFI/libresect/llvm/libcxx/include' \
    '--add=-xc++' \
    '--add=-stdlib=libc++' \
    '--add=-fc++-abi=itanium' \
    '--add=-ferror-limit=0' \
    '--add=-fno-implicit-templates' \
    '--add=-Wno-nonnull' \
    '--target=x86_64-pc-linux-gnu' \
    '--abi=itanium' \
    '--language=c++' \
    '--standard=c++17' \
    '--include-path=/home/jboehland/repos/common-lisp/FFI/libresect/llvm/libcxx/include' \
    '--include-path=/home/jboehland/repos/common-lisp/FFI/libresect/llvm-bin/lib/clang/13.0.0/include' \
    '--include-path=/usr/include/qt6' \
    '--include-path=/usr/include/qt6/QtCore' \
    '--include-source=/usr/include/qt6/.*' \
    '--exclude-source=/usr/include/*h' \
    '--exclude-source=.*Private.*' \
    '--exclude-source=/home/jboehland/repos/common-lisp/FFI/libresect/.*' \
    '--include-definition=Qt::*' \
    '--exclude-definition=.*::d_ptr.*' \
    '--exclude-definition=.*::q_ptr.*' \
    '--exclude-definition=.*Private.*' \
    '--exclude-definition=__.*' \
    '--exclude-definition=std::.*' \
    '--enforce-source=/usr/include/qt6/.*'
