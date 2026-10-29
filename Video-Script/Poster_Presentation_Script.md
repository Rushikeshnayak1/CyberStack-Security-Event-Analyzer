# CyberStack — Short Poster Presentation Script

**Presenter:** Rushikesh Nayak  
**Faculty advisor:** Dr. Victor Govindaswamy

## Introduction
Hello everyone. My name is Rushikesh Nayak, and I am a Master of Science in Computer Science student at Concordia University Chicago. Today I am presenting my project, “Design and Implementation of CyberStack: A C++ Stack-Based Security Event and Command History Analyzer with Applications in AI-Driven Cybersecurity and Blockchain.” This project was developed under the guidance of Dr. Victor Govindaswamy.

## Overview
CyberStack demonstrates how a Stack can manage sample cybersecurity-related events. It is written in C++ and follows the Last In, First Out (LIFO) principle. The current program uses an array-based Stack with a capacity of five events.

## Features
The menu supports Push to add an event, Peek to view the latest event, Pop to remove it, Display to show all events, Stack Status, Event Counter, Clear with confirmation, and Exit. Push, Pop, and Peek operate in O(1) time.

## Error Handling and Design
The program checks for Stack Overflow, Stack Underflow, and invalid menu selections. Its SecurityEventStack class organizes the data and methods. A Linked List could be used in a future version to support dynamic storage.

## Future Work
Potential future enhancements include AI and machine learning for suspicious activity analysis, blockchain and cryptographic hashing for integrity verification of permanently stored logs, event search, timestamps, alerts, reporting, and SIEM integration. These capabilities are not part of the current implementation.

## Conclusion and Acknowledgment
CyberStack strengthened my understanding of C++, Stack operations, LIFO, OOP, and error handling. I sincerely thank Dr. Victor Govindaswamy for his guidance, constructive feedback, and encouragement to connect classroom concepts with practical applications. I also thank Concordia University Chicago and the Computer Science Department. Thank you for watching.
