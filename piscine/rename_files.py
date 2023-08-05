import os

# Função para renomear diretórios com base no arquivo .c que eles contêm
def rename_directories(directory):
    for subdir in os.listdir(directory):
        subdir_path = os.path.join(directory, subdir)
        if os.path.isdir(subdir_path):
            files = [f for f in os.listdir(subdir_path) if f.endswith('.c')]
            if files:
                file_name = os.path.splitext(files[0])[0]
                new_name = f"{subdir} ({file_name})"
                new_subdir_path = os.path.join(directory, new_name)
                os.rename(subdir_path, new_subdir_path)

# Diretório principal
main_dir = ""

# Chama a função para iniciar o processo de renomear os diretórios
rename_directories(main_dir)
