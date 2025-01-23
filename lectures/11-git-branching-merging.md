# Branching and Merging

## Git Branching

- Branches are lightweight movable pointers to commits
- Allow for parallel development and experimentation
- Main branch is typically called "master" or "main"

## Basic Branch Commands

- `git branch`: List, create, or delete branches
- `git checkout`: Switch branches or restore working tree files
- `git merge`: Join two or more development histories together

## Creating and Switching Branches

```bash
git branch feature-x
git checkout feature-x
# Or, in one command:
git checkout -b feature-y
```

## Merging Branches

```bash
git checkout main
git merge feature-x
```

## Resolving Merge Conflicts

- Conflicts occur when changes in different branches affect the same part of a file
- Git marks the conflicting areas in the file
- Manually edit the file to resolve the conflict
- Use `git add` to mark the conflict as resolved
- Complete the merge with `git commit`

## Remote Repositories

- Versions of your project hosted on the internet or network
- Enable collaboration with other developers
- Common platforms: GitHub, GitLab, Bitbucket

## Working with Remotes

- `git remote`: Manage set of tracked repositories
- `git push`: Update remote refs along with associated objects
- `git pull`: Fetch from and integrate with another repository or local branch
- `git fetch`: Download objects and refs from another repository

## Pushing to a Remote Repository

```bash
git remote add origin https://github.com/username/repo.git
git push -u origin main
```

## Cloning a Remote Repository

```bash
git clone https://github.com/username/repo.git
```

## Exercise: Branching and Merging

1. Create a new branch called "feature-z"
2. Make some changes in this branch
3. Switch back to the main branch and make different changes
4. Merge the "feature-z" branch into main
5. Resolve any conflicts if they occur
