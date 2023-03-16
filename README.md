# More heaps!
In this lab, you are going to implement the following functions:
- void bfs(string source);
- void shortest_path(string source, string destination);

# Getting started!
Just clone this repository, and edit it! You don't need an extra github repo for this lab

# Implementing functions
## void bfs(string source)
Breath first search through the graph, and print out the nodes (implemented during lecture).

Assume we have `{"A","B","C","D"}` as nodes, and we have edges:
```
addedge("A","B");
addedge("A","C");
addedge("B","D");
addedge("C","D");
addedge("A","D");
```
The expected output will be (notice there's a space at the beginning of each line):
```
 visited :A
 visited :B
 visited :C
 visited :D
```
## void shortest_path(string source, string destination)
Outputs a shortest path starting from `source` to `destination` in following format:

Assume we have `{"A","B","C","D"}` as nodes, and we have edges:
```
addedge("A","B");
addedge("A","C");
addedge("B","D");
addedge("C","D");
addedge("A","D");
```
the `shortest_path("A","D")` will print
```
Shortest path from A to D:
A -> D
```
If we remove the edge `A, D`, the `shortest_path("A","D")` will print
```
Shortest path from A to D:
A -> B -> D
```
`A -> B -> D` not `A -> C -> D` because the edge `A,B` is added earlier than `A,C`

If can't find a valid path, print `Not found`:
```
Shortest path from NO to F:
Not found
```

# Have a autograder grade your work!
Due to the limited access to grade scope, we will use SCOPEGRADE for this lab

Please use the following link to join the course

[https://autograder.unics.top/enroll/f462b716](https://autograder.unics.top/enroll/f462b716)

Then, on the [page for this assignment](https://autograder.unics.top/app/courses/6923140a-52c2-4627-a4a9-5eed47715df4/assignments/ec70840d-37e5-49f8-bc0c-6d931b34f52f), you will a url to your Submission Repository, this is a virtual git repository for you!

Copy the url of your Submission Repository, and add it as a remote for the git repo of this lab (you cloned earlier)
```{bash}
git remote add submission <the-url-you-copied>
```
Then, just push to it (notice the main branch is called master in this lab)
```{bash}
git add .
git commit -m "<submission-message>"
git push submission master
```

You should see
```{bash}
remote: ------------------------- Scopegrade v0.0.1  -------------------------
remote: STATUS: 0 (0=OK, 1=FAIL, 2=SKIP)
remote: ----------------------------------------------------------------------
remote: 
remote:                  __                             
remote:                 / _\_   _  ___ ___ ___  ___ ___ 
remote:                 \ \| | | |/ __/ __/ _ \/ __/ __|
remote:                 _\ \ |_| | (_| (_|  __/\__ \__ \
remote:                 \__/\__,_|\___\___\___||___/___/
remote: 
remote: 
remote:  - Submission received, please wait for autograder to run
remote: 
remote: More info:
remote:  - Paper ID: <some-uuid>
remote:  - Submission ID: <some-uuid>
remote:  - IP: <your-ip>
remote:  - Request Id: <some-uuid>
remote:  - User Agent: git/<git-version>
remote:  - Time: <current-time>
remote: ------------------------- Submission Summary -------------------------
```

# Getting feedback!
This autograder runs super fast, just go back to the [page for this assignment](https://autograder.unics.top/app/courses/6923140a-52c2-4627-a4a9-5eed47715df4/assignments/ec70840d-37e5-49f8-bc0c-6d931b34f52f), and refresh (maybe wait for 10s). You will see a gradescope-like feedback for your submission!

# Submit again!
Not satisfied with the results? Just submit it again by doing
```{bash}
git add .
git commit -m "<submission-message>"
git push submission master
```
again!

Then, you can browse through your submission history just like on gradescope!

# (About this project)
This is a personal project started by Tianle Yu (tianleyu@ucsb.edu), it is not finished, and by doing this lab, you are contributing to it! If you are interested in making it better (or you found any bugs), please contact me directly via email!

If you are good at vue.js or react.js, and willing to make a brand new UI for this project, please also contact me! I have totally no idea about how to make UI.

# Happy studying! Good luck on finals!