#!/bin/bash

processor=();

for i in processor*/; do
    touch "$i"/partition.vtk
done

