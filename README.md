# OCP Starter Template

This is the template a CAX+ application starter.

The starter project utilize the OpenCAX+ lifecycle. 
We will first build your source codes into a library. 
Then, the current cmake project will add the OCP lifecycle folder as subdirectory, 
which create the executable target and use the library target you just created.


## Things that you need to modify
- [ ] This README.md file, also remember to add the workflow badge
- [ ] The workflow yml files, change the name of workflow
- [ ] The ocp.yml file
- [ ] scripts/prepare.sh
- [ ] scripts/install.sh
- [ ] Create any new configurations build and install script in the config folder
- [ ] Update your source files in the source folder


## Folder structure explained

## The ocp.yml file