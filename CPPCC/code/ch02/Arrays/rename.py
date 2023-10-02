"""
@Title: 
@Author(s): Stephen CUI
@LastEditor(s): Stephen CUI
@CreatedTime: 2023-10-01 21:31:06
@Description: 
"""
import os
for file in os.listdir():
    os.rename(file, file.lower().replace(" ", "_"))
