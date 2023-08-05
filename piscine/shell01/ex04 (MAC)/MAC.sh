#!/bin/env sh
if config | grep 'ether' | awk '{print $2}'
