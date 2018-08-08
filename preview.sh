#!/bin/bash

# usage: ./preview.sh [input dir] [output dir] [start num]

in_dir=$1
out_dir=$2
num=$3

if [[ -z $3 ]]; then
	echo "usage: ./preview.sh [input dir] [output dir] [start num]"
	exit 0
fi

for file in $(ls $in_dir); do
	in_file="$in_dir/$file"
	out_file="$out_dir/custom$num.preview"
	ffmpeg -i $in_file -y -loglevel error -vf "scale=220:176:force_original_aspect_ratio=decrease,pad=220:176:(ow-iw)/2:(oh-ih)/2" -r 11 -f rawvideo -s 220x176 -pix_fmt rgb565be out.raw
	mv out.raw $out_file
	num=$((num+=1))
done
