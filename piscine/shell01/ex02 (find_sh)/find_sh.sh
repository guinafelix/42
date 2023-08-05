#!/bin/env sh
find . -name '*.sh' -execdir '{}' basename .sh ';'
