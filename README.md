
<img width="979" height="601" alt="minicarsteer" src="https://github.com/user-attachments/assets/81a6d0ee-3f46-4c38-bbf6-05aad68864e1" />

## Description

This project is developed as part of the **DIT639 Cyber-Physical Systems and Systems of Systems** course at **Chalmers University of Technology / University of Gothenburg**.

The purpose of the project is to design, implement, and evaluate software features for a **self-driving miniature vehicle** operating in a simulated, data-driven environment. The project emphasizes a full cyber-physical systems workflow, including requirement analysis, algorithm selection, implementation, testing, and evaluation.

The system focuses on core autonomous driving components such as **perception, control, and decision-making**, with a strong emphasis on **real-time computer vision**, **steering angle computation**, and **system integration using OpenDLV**. Development is carried out collaboratively using **GitLab**, **Ubuntu-based systems**, and modern software engineering practices such as containerization, testing, and documentation.

---

## Project Scope and Goals

The main objectives of the project are:

- Analyze customer and system requirements for autonomous vehicle functionality  
- Design and implement perception algorithms for environmental understanding  
- Compute steering commands based on detected features  
- Integrate software components using a message-based middleware  
- Evaluate system performance using recorded data and analysis tools  
- Apply professional software engineering practices throughout development  

---

## Features

### Perception: Cone Detection

- Real-time detection of **blue and yellow traffic cones**
- Implemented using **OpenCV**
- HSV color segmentation combined with contour analysis
- Filtering of noise and irrelevant detections
- Limiting and sorting of detected cones for robust downstream processing
- Designed to operate on shared memory image streams

### Control: Steering Angle Calculation

- Steering angle computation based on detected cone positions and angular velocity
- Scaling and limiting algorithms to ensure safe and realistic steering behavior
- Designed for use in autonomous navigation scenarios
- Output suitable for logging and evaluation

### System Integration (OpenDLV)

- Integration with the **OpenDLV** framework
- Attachment to shared memory for image input
- Communication using OD4 sessions for message exchange
- Designed to work with both live and recorded data streams
- Modular architecture enabling future extensions

### Data Analysis and Evaluation

- Python scripts for extracting and formatting log data
- Quantitative evaluation of predicted steering angles against ground truth
- Computation of accuracy metrics within defined thresholds
- CSV-based data storage for reproducible analysis

### Visualization

- Gnuplot scripts for visualizing steering angle performance
- Comparison plots of computed versus ground truth steering angles
- Visual tools to support system validation and reporting

---

## Getting Started

### Prerequisites

Before building or running the project locally, ensure that the following tools and dependencies are installed:

- **C++ compiler** (C++17 or newer, e.g. g++)
- **CMake** (version 3.2 or later)
- **Make**
- **OpenCV** (core, imgproc, highgui)
- **Docker** (optional, for containerized builds)
- **Python 3** (for data analysis scripts)
- **SSH key** (for repository access)

---

## Building and Running the Project

### Build Locally Using CMake

mkdir build  
cd build  
cmake ..  
make  

### Running the Application

The main application integrates cone detection, steering angle computation, and OpenDLV communication.

Example usage:

./template-opencv --cid=253 --name=img --width=640 --height=480 --verbose

Command-line arguments:

--cid : OD4 session ID  
--name : Shared memory area name  
--width : Image width  
--height : Image height  
--verbose : (Optional) Display live OpenCV visualization  

## Docker Support

### Build Docker Image

docker build -t dit639_group03 .

### Run Docker Container

docker run dit639_group03 --cid=253 --name=img --width=640 --height=480

Docker can be used to ensure consistent build and runtime environments.

## Code of Conduct

The project follows a defined code of conduct located in the root directory.  
It can be found here:

https://git.chalmers.se/courses/dit638/students/2025-group-03/-/blob/main/code-of-conduct.md

## Development Team

Erik Lidbom (@eriklidb)  
Emma Olmås (@emmaolm)  
Fredrik Nilsson (@fnilsson)  
Ravi Sharma (@ravisha)  

## Acknowledgements

Acknowledgements and special thanks will be added as the course progresses and the project reaches completion. These will reflect the contributions, support, and collaboration of all parties involved.

