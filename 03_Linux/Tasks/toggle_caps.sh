#!/bin/bash

CAPS_LOCK_FILE="/tmp/caps_lock_status"

if [ -f "$CAPS_LOCK_FILE" ]; then
    # If the file exists, turn off Caps Lock
    powershell.exe -Command "[console]::CapsLock = \$false"
    rm "$CAPS_LOCK_FILE"
else
    # If the file doesn't exist, turn on Caps Lock
    powershell.exe -Command "[console]::CapsLock = \$true"
    touch "$CAPS_LOCK_FILE"
fi
