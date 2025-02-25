script_dir=$(dirname "$(readlink -f "$0")")
cd "$script_dir"
find . -name "*.c" -print0 | xargs -0 gcc -Wall -Wextra -Werror -o prg
./prg