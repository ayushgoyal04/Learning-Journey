<!-- global setup -->
git config --global user.name "ayushgoyal"
git config --global user.email "ayushgoyal434@gmail.com"
git config --global core.editor "code --wait"
git config --global core.autocrlf "input"
git config --global -e          -> change the above info

<!-- Moving versions -->
git log                        ->
git log --oneline              -> gets a list of current status of the saved checkpoints
git log --graph                -> tell us the author and date of the last commit
git status -s                  -> checks which file is in which stage
git reset --hard HEAD~1        -> to go back to the previous checkpoint
git reflog                      -> all recetn activities
git reset --hard <commit-hash> -> To jump to a particular checkpoint

<!-- Creating a Git BRANCH -->
git branch <branch-name>       -> Create a new branch
git branch                     -> All branches name
git switch <branch-name>       -> To swith between branches
git merge <branch-name>        -> merge branch to the main branch
git branch -d <branch-name>    -> Delete the branch
git switch -C <branch-name>    -> Create a new branch and switch to it (saves one line of code)
git stash                      -> draft the changes while we switch branch
git stash apply                -> bring back the changes made erlier before switching
git stash clear                -> clear/ delete the draft


<!-- cloning and contributing to reposiotry -->
git clone <https-key>
cd <project-name>
git switch -C <branch-name>
git branch
git add .
git commit -m "<commit-statement>"
git push -u origin <branch-name>
<!-- what the contributer will do -->
git fetch
git switch <branch-name>
git switch main
git merge <branch-name>
git push origin main
