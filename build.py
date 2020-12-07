#!/usr/bin/python3 

# Author: Marcin Serwach
# License: MIT

import build.buildSystem
   
def main():
    build_system = build.buildSystem.BuildSystem()

    return build_system.simpleRun('SoftwareDesignPatterns')
   
if __name__ == "__main__":
    main()

