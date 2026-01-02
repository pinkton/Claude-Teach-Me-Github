# Claude-Teach-Me

Learning C/C++ to create low-level modifications for games that struggle on modern OSes or have abandoned features. Currently targeting **"This Means Warp"** - specifically its unreliable multiplayer save system.

## Project Goal

Create tools for debugging and modifying legacy games to work better on modern operating systems. This includes DLL injection, application loaders, and game logic modification to add features that don't exist or are poorly implemented.

**Current Target:** [This Means Warp](https://store.steampowered.com/app/1269300/This_Means_Warp/) - A roguelike FTL-style space game with a save system that needs improvement.

## Current Status

**Background:** GIAC GREM certified with experience in reverse engineering (Ghidra, IDA, x64dbg) and CTF challenges. Comfortable reading assembly and analysing binaries, but need to shift from malware analysis to game modding and develop C/C++ coding skills.

**Gap:** The shift from "threat hunting" (malware analysis) to "feature hunting" (game reverse engineering), and moving from reading assembly to writing C/C++ code for building user-facing tools.

**Learning Journey:**
- [COMPLETED] Git workflow mastered (branching, merging, pushing to GitHub)
- [IN PROGRESS] Currently learning: C/C++ development and building tools
- [GOAL] Create save system modification for This Means Warp

## Why This Matters

Many games, especially indie or older titles, have features that are abandoned by publishers or poorly implemented. This project is about:
- Learning how games work at a low level
- Creating tools that benefit the gaming community
- Understanding reverse engineering of professional software (not just malware)
- Building practical, user-friendly modifications

## Technology Stack

- **Language:** C/C++ (matches target games, good for low-level work)
- **Tools:** Ghidra, IDA Pro, x64dbg (already familiar)
- **Target:** Windows executables, DLL injection, memory manipulation

## Learning Path

1. **Git Workflow** - Completed
   - Branching strategy (feature → develop → main)
   - GitHub integration and authentication
   - Professional workflow habits

2. **C/C++ Development** - In Progress
   - Syntax and language fundamentals
   - Building executables and DLLs
   - Memory management from developer perspective
   - Creating user-facing tools

3. **Game-Specific Reverse Engineering** - Upcoming
   - Finding game features (not malicious code)
   - Tracing UI elements and game logic
   - Understanding save systems and file formats
   - Instrumentation and logging without crashes

4. **Building the Mod** - Future
   - DLL injection for This Means Warp
   - Hooking save system logic
   - Implementing reliable save/load functionality
   - Creating user-friendly interface

## Repository Structure

```
/Coding/
├── README.md                    # This file
├── CLAUDE.md                    # Instructions for Claude Code sessions
├── git-notes.md                 # Git command reference
└── practice/
    └── github_commit_push/      # Git workflow learning exercises
        ├── hello.py
        └── goodbye.py
```

## Git Workflow Reference

See [git-notes.md](git-notes.md) for a complete reference of git commands used in this project.

**Professional workflow:**
```
feature/name → develop → main
   (work)      (test)  (production)
```

## Teaching Methodology

This repository uses Claude Code as an interactive teacher. The learning approach:
- **Guide, don't do** - Understanding through doing, not watching
- **Question-driven** - Frequent questions to reinforce concepts
- **Critical thinking** - No pushover teaching, honest feedback required
- **Self-correction** - Encouraged to think through problems and correct mistakes
- **Practical application** - Real projects, not just theory

## About

**Author:** pinkton
**Learning Partner:** Claude Code (AI)

This is a public learning repository. All AI-generated files should be prefixed with `AI-*` to distinguish from user-created work. The goal is to document the journey from reverse engineering analyst to game modding developer.

**For questions or disputes:** Please reach out - I'm learning and documenting the process publicly!

## Next Steps

- [ ] Set up C/C++ development environment
- [ ] Build first "Hello World" C++ program
- [ ] Create simple DLL injection tool
- [ ] Analyze This Means Warp save system
- [ ] Prototype save system hook

---

*This repository is part of a learning journey - expect frequent updates as skills develop!*
