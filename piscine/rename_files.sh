#!/bin/bash

# Função para renomear diretórios com base no arquivo .c que eles contêm
rename_directories() {
    local dir="$1"
    local ext="$2"
    # Usamos o find para percorrer os subdiretórios
    find "$dir" -type d -exec bash -c '
        for subdir do
            files=("$subdir"/*.'"$ext"')
            if [ -f "${files[0]}" ]; then
                # Obtém o nome do arquivo .c sem a extensão
                file_name=$(basename "${files[0]}" .'"$ext"')
                # Obtém o nome do diretório
                dir_name=$(basename "$subdir")
                # Concatena o nome do arquivo .c ao nome do diretório
                new_name="${dir_name} (${file_name})"
                # Renomeia o diretório apenas se o nome for diferente
                if [ "$dir_name" != "$new_name" ]; then
                    mv "$subdir" "$(dirname "$subdir")/$new_name"
                fi
            fi
        done
    ' bash {} +
}

# Diretório principal
main_dir="$1"

#extensão
ext="$2"

# Chama a função para iniciar o processo de renomear os diretórios
rename_directories "$main_dir" "$ext"
