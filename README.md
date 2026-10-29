# CyberStack — C++ Stack-Based Security Event and Command History Analyzer

**Full academic poster title:** Design and Implementation of CyberStack: A C++ Stack-Based Security Event and Command History Analyzer with Applications in AI-Driven Cybersecurity and Blockchain

**Student:** Rushikesh Nayak  
**Faculty advisor:** Dr. Victor Govindaswamy  
**Institution:** Concordia University Chicago  
**Language:** C++

## Overview
CyberStack is an educational, menu-driven C++ program that uses a fixed-capacity array-based Stack to demonstrate Last In, First Out (LIFO) operations with manually entered example security events. It is **not** a production security monitor, intrusion detection system, or permanent audit log.

## Implemented features
1. Push a new security event
2. Peek at the most recent event
3. Pop the most recent event
4. Display events (newest first)
5. Check empty/full Stack status
6. Count stored events
7. Clear temporary event history with confirmation
8. Exit

The Stack holds at most **five events** and demonstrates overflow, underflow, and invalid menu selection handling.

## Run on Ubuntu / Linux

```bash
g++ -std=c++17 Source-Code/SecurityEventAnalyzer.cpp -o SecurityEventAnalyzer
./SecurityEventAnalyzer
```

## Complexity
| Operation | Time complexity |
| --- | --- |
| Push / Pop / Peek | O(1) |
| Check empty/full / Count | O(1) |
| Display | O(n) |
| Stack storage (general capacity n) | O(n) |

## Challenges and solutions
- **Fixed capacity:** The program checks whether the five-element array is full before adding another event. A Linked List is proposed for future dynamic storage.
- **Empty Stack:** Underflow checks prevent invalid Pop and Peek operations.
- **User input:** Menu validation helps prevent unsupported operations.
- **LIFO ordering:** Events are displayed from newest to oldest to make Stack behavior easy to verify.

## Future work (not implemented)
- Linked List-based dynamic Stack
- More advanced input validation and OOP structure
- Search, timestamps, persistent event storage, and reports
- Automated security alerts and possible SIEM integration
- AI/ML-based suspicious-pattern analysis
- Blockchain/cryptographic hashing to help verify integrity of **persistently stored** audit records

**Important:** Popping a temporary Stack entry is not equivalent to deleting a permanent security audit log.

## Repository contents
- `Source-Code/` — C++ application
- `Poster/` — final ACCA poster
- `Presentation/` — detailed presentation slides
- `Video-Script/` — short poster video script
- `Research-Report/` — research report
- `UML-and-Flowchart/` — diagrams and documentation
- `Screenshots/` — example program outputs
- `Video-and-LinkedIn-Links.md` — placeholders for published links

## Acknowledgment
I sincerely thank **Dr. Victor Govindaswamy** for his guidance, constructive feedback, and encouragement to connect Data Structures and Algorithms with practical applications. I also thank Concordia University Chicago and the Computer Science Department for the opportunity to develop and present this project.
