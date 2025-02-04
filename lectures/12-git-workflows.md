Git Workflows
=============

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

## Rebasing

- Alternative to merging
- Reapplies commits on top of another base tip

```bash
git checkout feature-branch
git rebase main
```

## Interactive Rebasing

- Modify commits while rebasing
- Reorder, edit, squash, or drop commits

```bash
git rebase -i HEAD~3
```

## Git Stash

- Temporarily shelve changes
- Useful when switching branches with uncommitted work

```bash
git stash
git stash pop
```

## Git Tags

- Mark specific points in history
- Typically used for release versioning

```bash
git tag -a v1.0 -m "Version 1.0"
git push origin v1.0
```

## Git Hooks

- Scripts that run automatically on certain events
- Located in the `.git/hooks` directory
- Can be used for enforcing commit message formats, running tests, etc.

## Git Submodules

- Include other Git repositories within your project
- Useful for including libraries or shared components

```bash
git submodule add https://github.com/username/library.git
```
