import os 
import sys

project_dir = os.path.dirname(os.path.abspath(__file__))
data_dir  = os.path.join(project_dir, "data")
models_dir = os.path.join(project_dir, "models")
utils_dir = os.path.join(project_dir, "utils")

if not os.path.exists(data_dir):
    os.makedirs(data_dir)

if not os.path.exists(models_dir):
    os.makedirs(models_dir)

if not os.path.exists(utils_dir):
    os.makedirs(utils_dir)

    