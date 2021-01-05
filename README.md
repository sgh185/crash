# Crash Course on UNIX and Systems Tools 


## Overview

January 4, 2021 — January 8, 2021.  5PM — 6PM CST.

This is 5-day workshop class designed to introduce students to a myriad of 
tools and skills that are common in research and development of computer 
systems and computing in general. This class explores the following topics:
UNIX environment, the shell, scripting, makefiles, project organization, 
version control, debugging approaches/tools, profiling approaches/tools, basic 
C programming, understanding documentation, and more.  

Motivated by personal experiences as a CS student and the experiences of 
my peers at Northwestern. Inspiried by the [Missing Semester at MIT](https://missing.csail.mit.edu/).

## Breakdown

### Day 1 — UNIX Environment, The Command Line
- Shell navigation 
- Creating files and directories
- Finding files, character sequences, patterns, etc.
- Understanding documentation with man-pages

### Day 2 — Structuring Applications 
- Running basic executables and scripts
- Text editors (vim)
- Scripting (with bash)
- Version control (with git)
- Makefiles 
- Compiling your code 
- Structuring a project
- Writing (a tiny bit) of code in C

### Day 3 — Debugging 
- Debugging with prints and assertions 
- Using breakpoints and gdb 
- Bisection
- Finding memory corruptions with Valgrind 

### Day 4 — Profiling and Tracing 
- Running time of applications
- Traces (with strace and ltrace)
- What's the bottleneck? (with gprof)
- Callgraphs and related statistics (with callgrind)
- Visualization  

### Day 5 — Building Your Own "Profiler"
- Building a "package" 
- Design choices and tradeoffs 
- Linker tricks (wrapping, LD\_PRELOAD)
- A look at dynamic memory
- The final artifact is a profiler to track the distribution
  of dynamic memory allocations. Students will build the 
  profiler using C (using some starter code) and incorporate
  some of the concepts from Day 2 to create a distributable
  package/source. 

---

Designed by Souradip Ghosh, January 2021. See LICENSE.txt
