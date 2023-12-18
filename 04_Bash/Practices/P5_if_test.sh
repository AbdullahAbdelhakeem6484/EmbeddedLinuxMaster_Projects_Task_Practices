read -p "Enter String" str

if [ -z "$str"  ]; then
    echo "the string is empty"
else
    echo "the string id : ${str}"
fi


# =======================

read -p "Enter Number :" number
if [ "$number" -lt 125 ]; then
    echo "Value is less thean 125"
elif [ "$number" -lt 200 ]; then
    echo "the value is between 200 and 125"
else
    echo "the value is greater thean 200"

fi