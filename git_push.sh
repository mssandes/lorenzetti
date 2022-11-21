#!/bin/bash

git init
git add .
DATE=$(date)

git commit -m "changes made on $DATE"

git push origin crosstalk