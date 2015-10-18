exclude_files=()

# Exclude generated files.
exclude_regexs=(
    '.*/moc_.*'
    '.*\.moc$'
    '.*_automoc\..*'
    '.*/ui_.*'
    '.*/qrc_.*'
    '.*CMake.*'
    '.*/tests/.*'
)

arguments=()

for file in "${exclude_files[@]}"; do
    arguments+=(--exclude "$file")
done

for regex in "${exclude_regexs[@]}"; do
    arguments+=(--exclude-pattern "$regex")
done

coveralls "${arguments[@]}"