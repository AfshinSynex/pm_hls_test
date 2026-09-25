📋 **Binary Identification Registers** : Version = `0x00000003` | Hash = `0x0E8795C9`

# Vivado Project
[//]: # (AI INSTRUCTIONS: Review the project files to understand the main purpose and replace this comment with a 2-3 sentence summery of the purpose and functionality of this Vivado FPGA project. update the git clone command below with the actual repository URL if you have access.)

### Clone this project

```sh
git clone --recursive git@github.com:AfshinSynex/pm_hls_test.git
cd Vivado pm_hls_test
python project_manager_shortcut.py
# Select option 2 to recreate the Vivado project
```

### Run the project manager
Vivado FPGA project managed with [vivado-project-manager](https://github.com/synexmedical/vivado_manager).
To start, run:
```sh
python project_manager_shortcut.py
```

## Key Organizational Folder Structure

| Folder | Description |
|--------|-------------|
| `ip_repo/` | Custom IP cores (git submodules) |
| `ip_export/` | Packaged/exported IP cores |
| `user_files/` | Documentation, notes, and user files |
| `tools/` | Build tools and scripts |

## Requirements

- Vivado (in PATH)
- Python 3.6+
- Git
