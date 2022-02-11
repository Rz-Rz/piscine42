cat /etc/passwd | cut -d ":" -f 1 | awk "NR%2" | rev | sort -r | awk 'NR >= ENVIRON[FT_LINE1] && NR <= ENVIRON["FT_LINE2"]' | xargs  | sed -e 's/ /, /g' | sed 's/$/./'
