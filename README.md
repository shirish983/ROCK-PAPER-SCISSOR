# ROCK-PAPER-SCISSOR
A simple command-line implementation of the classic Rock, Paper, Scissors game written in C.
The player selects Rock, Paper, or Scissors, and the computer randomly generates its move.
The winner is then determined based on the standard rules.

# How the Game Works

0 = Rock

1 = Paper

2 = Scissors

The program:

Prompts the user for a choice

Validates the input

Generates a random choice for the computer

Compares both choices and displays the result

# Features

Input validation (rejects numbers outside 0–2)

Randomized computer choice using rand()

Clear result messages: Win, Lose, or Draw

Simple and beginner-friendly

Demonstrates conditional logic in C

# Requirements

C compiler (e.g., GCC, Clang, MSVC)

Standard C library (stdio.h, stdlib.h, time.h)
# Code Overview

The program is divided into a few main parts:

User input

Input validation

Random computer selection using rand() % 3

Result calculation using conditional statements
