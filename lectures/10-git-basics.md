Intro to Version Control
========================

## What is Version Control?

- A system that records changes to files over time
- Allows you to recall specific versions later
- Enables collaboration among multiple people
- Tracks who made which changes and when

## Why Use Version Control?

- Revert files or entire projects to a previous state
- Compare changes over time
- See who last modified something that might be causing a problem
- Recover from accidental deletions or mistakes

## What is Git?

- Distributed version control system
- Created by Linus Torvalds in 2005
- Free and open-source
- Designed for speed, data integrity, and support for distributed workflows

## Git vs. Other Version Control Systems

| Feature | Git | Centralized VCS |
|---------|-----|-----------------|
| Repository | Distributed | Centralized |
| Speed | Fast | Slower |
| Offline Work | Supported | Limited |
| Branching | Lightweight | Often cumbersome |

## Installing Git

- Windows: Download from git-scm.com
- macOS: Use Homebrew or download from git-scm.com
- Linux: Use package manager (e.g., apt-get install git)

## Configuring Git

```bash
git config --global user.name "Your Name"
git config --global user.email "your.email@example.com"
git config --global core.editor "your_preferred_editor"
```

## Basic Git Commands

- `git init`: Initialize a new Git repository
- `git clone`: Create a copy of an existing repository
- `git add`: Stage changes for commit
- `git commit`: Record changes to the repository
- `git status`: Show the working tree status
- `git log`: Show commit logs

## Creating Your First Repository

```bash
mkdir my_project
cd my_project
git init
echo "# My Project" > README.md
git add README.md
git commit -m "Initial commit"
```

## Exercise: Setting Up a Git Repository

Take 10 minutes to create a new Git repository on your local machine, add a few files, and make your first commit.
