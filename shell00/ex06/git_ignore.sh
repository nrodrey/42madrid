#! /bin/bash
git status --ignored --porcelain | grep '^!!' | awk '{print $2}'
