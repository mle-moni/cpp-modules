make > /dev/null
echo

echo './replace "file"'
./replace "file"
echo

echo './replace "file" "" ""'
./replace "file" "" ""
echo

echo './replace "file" "a" "-"'
./replace "file" "a" "-"
echo 'cat file.replace'
cat file.replace
echo

echo

echo './replace "file" "decided to" "END"'
./replace "file" "decided to" "END"
echo 'cat file.replace'
cat file.replace
echo

echo

echo './replace "imaginary_file" "yes" "no"'
./replace "imaginary_file" "yes" "no"
echo

return 0