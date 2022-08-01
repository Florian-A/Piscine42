#!/bin/sh
find . -name "*.sh" -type f | rev | cut -d'.' -f2 | cut -d'/' -f1 | rev
