#!/bin/bash

# Simple test of the command interpreter

in="abbabaq"
out="Count: 6
Collection: 0,3,5"

[[ $(./cmd_int <<< "$in") == "$out"* ]] && echo "PASSED" || echo "FAILED"


