# Claude Context File

## Project: Game Modding Tools Development

## IMPORTANT: Language Preference
**Please use British English in all responses:**
- British spelling (colour, organisation, realise, whilst, etc.)
- British terminology and conventions
- Metric units where applicable

## Public Repository Notice
This repository is **publicly accessible** on GitHub at: https://github.com/pinkton/Claude-Teach-Me
- Do not include sensitive information
- User is learning and documenting the process publicly
- AI-generated files are prefixed with `AI-*` to distinguish from user-created work

## Project Purpose
This is a **learning repository** for developing C/C++ skills to create game modification tools, specifically targeting legacy games that struggle on modern operating systems or have abandoned features.

**Current Target:** [This Means Warp](https://store.steampowered.com/app/1269300/This_Means_Warp/) - Roguelike space game with an unreliable multiplayer save system.

**Ultimate Goal:** Create DLL injection tools and game logic modifications to implement a reliable save system.

## User Background - IMPORTANT

**Existing Skills:**
- **GIAC GREM certified** - Professional reverse engineering of malware
- **Reverse engineering tools:** Ghidra, IDA Pro, x64dbg (experienced)
- **CTF experience** - Capture The Flag challenges (4 years ago, but foundational knowledge intact)
- **Binary analysis:** Comfortable reading assembly, understanding PE format, tracing execution
- **Scripting:** Python and PowerShell (day job usage)
- **Conceptual understanding:** Variables, loops, functions, control flow (high-level concepts)

**The Gap - What User NEEDS to Learn:**
- **C/C++ syntax and development** - Can read assembly, but can't write C/C++ code
- **Building executables and DLLs** - Need to understand toolchains, compilers, linkers
- **Game reverse engineering methodology** - Different from malware analysis:
  - Malware RE: "Look for malicious patterns" (threat hunting)
  - Game RE: "Look for functional patterns" (feature hunting)
  - Need to find UI code, save systems, game logic (not IOCs or suspicious APIs)
- **Creating user-facing tools** - Not just analysis, but building tools others can use
- **Memory management from developer perspective** - Allocating and manipulating, not just analyzing

**Critical Insight:**
User can **analyze** code but needs to learn to **write** code. Shift from "reverse engineering analyst" to "game modding developer."

## Learning Path (Updated)

**Learning Path (in order):**
1. **Git Workflow** - COMPLETED
2. **C/C++ Development** - IN PROGRESS (current focus)
3. **Game-Specific Reverse Engineering** - UPCOMING
4. **Building the This Means Warp Mod** - FUTURE

### 1. Git Workflow - COMPLETED
- [x] Repository setup and configuration
- [x] Branch workflow (feature → develop → main)
- [x] Creating and switching branches
- [x] Committing changes with meaningful messages
- [x] Merging feature branches through develop to main
- [x] Pushing to GitHub with authentication (Personal Access Token)
- [x] Handling divergent branches with git pull
- [x] Understanding when to use proper workflow vs direct commits
- [x] Multi-machine authentication setup

### 2. C/C++ Development - IN PROGRESS
**Goal:** Learn to write C/C++ code, not just read assembly.

- [x] Development environment setup (gcc, g++, make already installed in WSL2)
- [x] First Hello World program (`practice/cpp/hello-world/helloworld.cpp`)
- [x] Compilation process understanding (preprocessing, compiling, assembly, linking)
- [x] Compiling to Intel-syntax assembly (`g++ -S -masm=intel`) for analysis
- [x] Functions with parameters and return values (`practice/cpp/add-two-numbers/add-two-numbers.cpp`)
- [x] Understanding x86-64 calling conventions (EDI, ESI for params; EAX for return)
- [x] User input with `std::cin >>`
- [x] If/else statements and conditional logic (`practice/cpp/if-number-loop/if_greater_smaller.cpp`)
- [x] Key bug discovered: `=` (assignment) vs `==` (comparison) - caught and fixed
- [ ] Loops (while, for, do-while) - NEXT TASK
- [ ] Input validation (checking `std::cin.fail()`, clearing errors)
- [ ] Memory management (pointers, heap/stack from developer view)
- [ ] Creating DLLs and understanding linking
- [ ] Build systems (Makefiles, CMake, or similar)
- [ ] Debugging C/C++ code (not just binaries)

**Key Learning Discovery:**
User realized they can write C++ code, compile to assembly, and reverse engineer their own code to learn patterns. This creates a powerful learning loop: **write C++ → compile to assembly → analyze with RE skills → understand patterns → recognize in production software**.

### 3. Game-Specific Reverse Engineering - UPCOMING
**Goal:** Shift from malware analysis to game modding methodology.

- [ ] Finding game features (not malicious code)
  - Tracing user input → code path
  - Finding strings → UI code
  - Monitoring file I/O → save systems
- [ ] Understanding save file formats
  - Is it encrypted/seeded?
  - Can it be copied?
  - When can saves occur?
- [ ] Instrumentation without breaking the game
  - Hooking and logging safely
  - Understanding game state
- [ ] Finding UI elements and menu code

### 4. Building the This Means Warp Mod - FUTURE

**Specific Questions to Answer:**
1. How does the save system work?
2. Can saves be copied/moved?
3. Is it seeded or encrypted?
4. When can saves occur? (checkpoints only, or can we add quicksave?)
5. How to find menu code for adding a "Save" button?
6. How to hook and log game behavior?

**Implementation Steps:**
- [ ] Analyze This Means Warp save system
- [ ] Create DLL injector/loader
- [ ] Hook save system logic
- [ ] Implement reliable save/load
- [ ] Create user-friendly interface
- [ ] Test and refine

## Teaching Methodology for Future Claude Sessions

**IMPORTANT - How to teach the user:**

1. **Guide, don't do** - Tell the user what commands to run, don't execute for them (unless explicitly requested)
2. **Ask questions constantly** - Before and after each step to reinforce learning
3. **Test knowledge periodically** - Every 3-4 commands, ask: "What will this command do?" or "Why are we doing this?"
4. **Encourage independent thinking** - Ask which approach they'd choose before suggesting one
5. **Build on previous lessons** - Reference earlier concepts to reinforce connections
6. **Let them make mistakes** - If they suggest the wrong command, ask guiding questions rather than immediately correcting
7. **No pushover teaching** - User explicitly requested critical, honest feedback. Call out nonsense, redundant wording, or incorrect assumptions.
8. **Leverage existing knowledge** - User has GREM certification and RE experience. Don't explain basic RE concepts they already know.
9. **Focus on the gap** - Writing code, not analyzing it. Development, not just reverse engineering.
10. **Don't over-analyze assembly** - User is comfortable with assembly and doesn't need deep dives into every instruction. Use assembly as a learning tool when relevant, but prioritize C++ syntax learning.
11. **Practical application** - User prefers learning fundamentals before building tools ("no point making a tool if I don't know how to actually code in cpp")
12. **Minimal emojis** - User explicitly requested minimal emoji usage in responses and documentation.

## Branch Strategy

- **main**: Production-ready, stable code only
  - For solo learning: Can commit documentation directly when appropriate
  - For code changes: Use feature → develop → main workflow
- **develop**: Integration branch for testing features before production
- **feature/[name]**: Individual feature branches for isolated development

**Flexibility:** User understands when to use full workflow (code changes, teams) vs when to be pragmatic (documentation, solo work). Trust their judgment.

## Git Workflow Reference

See `git-notes.md` for complete command reference.

**Professional workflow:**
```
feature/name → develop → main
   (work)      (test)  (production)
```

Key commands mastered:
- `git checkout -b feature/name` - Create feature branch
- `git add`, `git commit -m "message"` - Save changes
- `git merge feature/name` - Integrate features
- `git push -u origin branch` - Upload to GitHub
- `git pull origin branch` - Download and merge remote changes
- `git config credential.helper store` - Save authentication

## Session Start Checklist for Future Claude

When resuming this project:
1. Read this entire file to understand context
2. **Remember:** User is GREM certified with RE experience - don't explain basic RE concepts
3. **Focus:** User needs to learn C/C++ development, not reverse engineering
4. Check current branch: `git branch`
5. Check for uncommitted changes: `git status`
6. Ask the user what they want to work on today
7. **Test previous knowledge** - Ask 1-2 questions about the last session's concepts before starting new material
8. Follow the teaching methodology above

## Knowledge Testing Examples

**Git questions:**
- "What branch should we create this feature from?"
- "What will `git status` show us right now?"
- "Why do we merge to develop before main?"
- "What's the difference between `git add` and `git commit`?"

**C/C++ questions:**
- "What's the difference between `=` and `==`?" (assignment vs comparison)
- "What's the difference between `<<` and `>>`?" (output vs input direction)
- "Which registers are used for the first two integer parameters in x86-64?" (EDI, ESI)
- "Where does a function's return value go?" (EAX/RAX)
- "Why do we need calling conventions?" (interoperability between compiled code)
- "What happens if `std::cin >>` fails when user enters invalid input?" (fail state, variable uninitialized)
- "Should compiled binaries be committed to git?" (no - only source code)
- "What's the difference between compiling and linking?" (upcoming)
- "What's the difference between the stack and the heap?" (upcoming)

**Game RE questions (future):**
- "How would you find the save game code if you don't know where it is?"
- "What's the difference between analyzing malware and analyzing game logic?"
- "How can you hook a function without crashing the game?"

## Common Scenarios Encountered

**Divergent Branches:** When local and remote repositories have different commits
- Caused by: Editing files on GitHub whilst also making local changes
- Solution: `git pull origin main` to merge remote changes, then push
- Lesson: Always pull before pushing to avoid conflicts

**Multi-machine setup:**
- Need to create new Personal Access Token for each machine
- Configure `credential.helper store` to save authentication
- Set up `user.name` and `user.email` globally

**Compiled outputs in git:**
- Common beginner mistake: committing compiled binaries, assembly files, and object files
- Only source code (`.cpp`, `.h`) should be in version control
- Compiled outputs (executables, `.o`, `.s` files) should be in `.gitignore`
- Build artifacts can always be regenerated from source
- Use `git rm` to remove mistakenly committed binaries, then add patterns to `.gitignore`

## Repository Structure

```
/Coding/
├── README.md                           # Public-facing project description
├── CLAUDE.md                           # This file - Claude Code instructions
├── git-notes.md                        # Git command reference
├── .gitignore                          # Ignore compiled outputs
└── practice/
    ├── github_commit_push/             # Git workflow learning exercises
    │   ├── hello.py
    │   └── goodbye.py
    └── cpp/                            # C++ learning exercises
        ├── programming.md              # C++ learning notes
        ├── hello-world/
        │   ├── helloworld.cpp          # First C++ program
        │   └── readme.md               # Notes on Hello World
        ├── add-two-numbers/
        │   └── add-two-numbers.cpp     # Function with parameters/return
        └── if-number-loop/
            └── if_greater_smaller.cpp  # If/else and user input
```

## Important Notes

- **Language choice:** C/C++ (matches target games, user preference over Rust for now)
- **Target game:** This Means Warp (save system modification)
- **User strength:** Reverse engineering, binary analysis, understanding code
- **User gap:** Writing code, building tools, C/C++ development
- **Teaching style:** Critical, honest, no hand-holding - user explicitly requested this
- **British English:** Always use British spelling and conventions

## Next Session Goals

**Immediate next steps:**
1. **Clean up git repository** - Remove compiled outputs (`.s` files, binaries) that were mistakenly committed
2. **Learn loops** - Implement while/for loops to handle repeated input validation
3. **Input validation** - Handle `std::cin.fail()` when user enters invalid input (letters instead of numbers)
4. **Combine concepts** - Create a robust number checker that loops until valid input received

**Current location in code:**
- File: `practice/cpp/if-number-loop/if_greater_smaller.cpp`
- Status: Has working if/else logic and user input, but uses recursive `main()` call (bad practice)
- Need to replace recursive call with proper loop

**Upcoming tasks:**
1. More control flow practice (switch statements, nested loops)
2. Different data types (char, float, string, bool, arrays)
3. Build simple file I/O tool (reads/writes files)
4. Learn pointers and memory management
5. Eventually: Create first DLL and analyze This Means Warp

---

**Remember:** User is transitioning from "reading assembly" to "writing C++". Focus on development skills, not analysis skills.
