
<img width="979" height="601" alt="minicarsteer" src="https://github.com/user-attachments/assets/81a6d0ee-3f46-4c38-bbf6-05aad68864e1" />

## Description

This project is developed as part of the **DIT639 Cyber-Physical Systems and Systems of Systems** course at **Chalmers University of Technology / University of Gothenburg**.

The goal of the project is to design, implement, and evaluate software components for a self-driving miniature vehicle in a simulated, data-driven environment. The system focuses on perception, control, and decision-making, with an emphasis on real-time computer vision, steering control, and system integration.

The project includes cone detection using computer vision, steering angle computation, and communication through the OpenDLV platform. Development is carried out collaboratively using GitLab, Ubuntu-based systems, and modern software engineering practices such as feature branching, CI pipelines, testing, and documentation.

---

## Features

### Cone Detection
- Real-time detection of blue and yellow cones using OpenCV
- HSV color segmentation and contour analysis
- Filtering, limiting, and sorting of detected cones for robust downstream processing

### Steering Angle Calculation
- Steering angle computation based on angular velocity
- Scaling and limiting algorithm to ensure safe and realistic steering output

### OpenDLV Integration
- Attachment to shared memory for image input
- Communication via OD4 sessions for message exchange
- Designed for integration with recorded or live data streams

### Data Analysis & Evaluation
- Python scripts for log formatting and data processing
- Evaluation of predicted steering angles against ground truth
- CSV-based analysis and visualization

### Visualization
- Gnuplot scripts for plotting steering angle comparisons
- Visual comparison between computed and ground truth steering data

---

## Getting Started

### Prerequisites

Before building or running the project locally, ensure you have the following installed:

- C++ compiler (C++17 or newer, e.g. g++)
- CMake (version 3.2 or later)
- Make
- OpenCV (core, imgproc, highgui)
- Docker (optional, for containerized builds)
- Python 3 (for data analysis scripts)
- SSH key (for repository access)

---

### Clone the Repository

```bash
git clone git@git.chalmers.se:courses/dit638/students/2025-group-03.git
cd 2025-group-03
