#!/bin/sh

BUILDDIR="build"

if [ -d "$BUILDDIR" ]; then
    cd "$BUILDDIR"
else
    mkdir -p $BUILDDIR
    cd "$BUILDDIR"
fi

cmake .. -DSERIOUS_PROTON_DIR=$PWD/../../SeriousProton/
make
echo "*** You can now install with \"sudo make install\", if you are not alreade logged in as root."
