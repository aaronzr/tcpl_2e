prog=$1
shift
cc $prog

if [ $# -eq 0 ]
then
    ./a.out
else
    while [ $# -gt 0 ]
    do
        cat $1 | ./a.out
        shift
    done
fi
