# 2025-group-03


## Description

This project is part of the DIT639 Cyber-Physical Systems and Systems of Systems course at Chalmers/GU. Our goal is to design, implement, and evaluate software features for a self-driving miniature vehicle in a simulated, data-driven environment. The project involves analyzing customer requirements, selecting appropriate algorithms, and developing components such as perception, control, and decision-making. The team works collaboratively using GitLab for version control and Ubuntu-based systems for development, with a strong focus on testing, documentation, and iterative improvement.

## Getting started


<details><summary>Tech Stack</summary>

Before building or running the project locally, ensure you have the following prerequisites installed:
- **C++ compiler** (g++)
- **CMake** (version 3.2 or later)
- **Make**
- **Docker** (for building and running inside a container)
- **SSH key**

</details>

<details><summary>Setup Instructions</summary>

* **Clone the repository with the SSH key via terminal**
    - Open a terminal of your choice
    - Create a new folder to clone the repository to:
        - In desired location, run following command and replace the name with your folder name:
        `mkdir FOLDER_NAME`
    - Navigate to the folder with this command: `cd FOLDER_NAME`
    - Clone the repository:
    `git clone git@git.chalmers.se:courses/dit638/students/2025-group-03.git`

</details>

<details><summary>How to run the project (build/test/run)</summary>

* **How to build the project locally**
    - Navigate to the repository where the cloned project is: `cd REPO_NAME`
    - Create an out-of-source build directory: `mkdir build && cd build`
    - Run Cmake: `cmake ..`
    - Compile the source code: `make`
* **Run the application**
    - Once compilation is successful:
    - Run the program: `./helloworld <NUMBER>`
        - For example: `./helloworld 42` should print: `LASTNAME, FIRSTNAME, 42 is a prime? 0` (Replace first- and lastname with your own name)
    
* **Building and running through Docker**
    - Building the project:
        - `docker build -t CID/example:latest -f Dockerfile .`
    - Running the docker container:
        - `docker run --rm CID/example:latest 42`, this should print the same output as running the project locally

</details>

## Workflow
For a clean workflow, the team has decided on creating issues with user stories with acceptance criteria. The issues will be handled by feature branching.
Before commiting into the main branch, a pull request will be created and reviewed for code quality, readability, vulnerabilities, etc. Once the review
is confirmed, the branch can be merged into main.

The developers will fix unexptected behaviour by identifying and prioritizing the issues. Bugfixing branches
will be created and a pull request will be created. Once the bug is fixed, the code is reviewed and confirmed, the bugbranch
can be merged into main.

**Structure and content of commit messages**
The team will follow the best practices of the git commit template guide, found in the wiki:

[Link to commit template](https://git.chalmers.se/courses/dit638/students/2025-group-03/-/wikis/Guidelines-and-Templates/Commits)
## Code of Conduct

## Development Team

* Erik Lidbom (@eriklidb)

* Emma Olmås (@emmaolm)

* Fredrik Nilsson (@fnilsson)

* Ravi Sharma (@ravisha)

## Acknowledgements & Special Thanks

Acknowledgements and special thanks will be included at a later stage, as this course continues to develop and eventually finishes. These will reflect the contributions, support, and efforts of all those who played a meaningful role throughout its journey.


-------------------------------------------------------
_Group 3 (Name: TBD) - DIT639 V25 - University of Gothenburg, Sweden_