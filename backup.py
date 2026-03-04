import os
import zipfile
from datetime import datetime

def criar_backup():
    # Nome do arquivo com a data de hoje
    nome_zip = f"backup_cs50_{datetime.now().strftime('%Y-%m-%d')}.zip"

    # Cria o arquivo ZIP
    with zipfile.ZipFile(nome_zip, 'w') as zipf:
        for root, dirs, files in os.walk('.'):
            for file in files:
                # Filtra apenas arquivos de código e evita o próprio zip e o script
                if file.endswith(('.c', '.py', '.h', '.txt')) and file != nome_zip and file != 'backup.py':
                    caminho_completo = os.path.join(root, file)
                    zipf.write(caminho_completo, os.path.relpath(caminho_completo, '.'))

    print(f"Sucesso! Arquivo '{nome_zip}' criado.")
    print("Clique com o botão direito no arquivo no menu lateral e selecione 'Download'.")

if __name__ == "__main__":
    criar_backup()
