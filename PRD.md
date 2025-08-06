# Project Requirements Document: Virtual AI Assistant

**1. Introduction**

This document outlines the requirements for a virtual AI assistant, a sophisticated software application designed to interact with users through natural language, perform tasks on a computer, and learn from its interactions. The assistant will be a standalone executable that runs on a user's computer, providing a seamless and intuitive user experience.

**2. Vision and Goals**

The primary goal of this project is to create a powerful and user-friendly virtual AI assistant that can:

*   **Understand and respond to natural language:** The assistant will be able to understand and respond to user commands and questions in a conversational manner.
*   **Perform tasks on the computer:** The assistant will be able to execute commands, run programs, and interact with the operating system.
*   **Learn and adapt:** The assistant will learn from its interactions with the user, becoming more knowledgeable and personalized over time.
*   **Provide a natural and intuitive user experience:** The assistant will be easy to use and interact with, providing a seamless and enjoyable user experience.

**3. Functional Requirements**

**3.1. Core Brain**

*   **Knowledge Graph:** The assistant will use a knowledge graph (Elephant Memory) to store and retrieve information about the world, the user, and its own experiences.
*   **Large Language Model (LLM):** The assistant will use a powerful LLM (Gemma 3) for natural language understanding, reasoning, and response generation.
*   **Thinking Process:** The assistant will have a sophisticated thinking process that involves querying the knowledge graph, formulating prompts for the LLM, and processing the LLM's responses.

**3.2. Perception**

*   **Continuous Voice Monitoring:** The assistant will continuously listen to the audio stream from the microphone.
*   **Voice Activity Detection (VAD):** The assistant will be able to detect when a user is speaking.
*   **Speaker Diarization:** The assistant will be able to identify when it is being spoken to, distinguishing between user commands and other speech.
*   **Speech-to-Text:** The assistant will be able to transcribe spoken language into text.
*   **Text Input:** The assistant will provide a command-line interface for text-based input.

**3.3. Action**

*   **Text-to-Speech (TTS):** The assistant will be able to convert text into speech, allowing it to speak its responses to the user.
*   **Command Execution:** The assistant will be able to execute shell commands to perform tasks on the computer.
*   **GUI (Optional):** The assistant may have a simple GUI to display its status, thoughts, and other information.

**4. Non-Functional Requirements**

*   **Performance:** The assistant should be responsive and perform its tasks in a timely manner.
*   **Reliability:** The assistant should be reliable and available when the user needs it.
*   **Usability:** The assistant should be easy to use and interact with.
*   **Extensibility:** The assistant should be designed in a modular and extensible way, allowing for new features and capabilities to be added in the future.
*   **Cross-Platform Support:** The assistant should be designed to run on multiple operating systems (e.g., Windows, macOS, Linux).

**5. Technical Specifications**

*   **Programming Language:** C++
*   **Core Libraries:**
    *   **Knowledge Graph:** Elephant Memory
    *   **LLM Integration:** Ollama or llama.cpp
    *   **Audio Processing:** PortAudio or RtAudio
    *   **Speech-to-Text:** Vosk or a similar library
    *   **Text-to-Speech:** A suitable TTS library (e.g., eSpeak, Flite)
*   **Build System:** CMake

**6. Roadmap**

The project will be developed in the following phases:

1.  **Phase 1: Core Brain:** Implement the core brain, including the knowledge graph and LLM integration.
2.  **Phase 2: Perception:** Implement the perception system, including continuous voice monitoring, VAD, speaker diarization, and speech-to-text.
3.  **Phase 3: Action:** Implement the action system, including TTS and command execution.
4.  **Phase 4: Integration and Testing:** Integrate all the components and perform thorough testing.
5.  **Phase 5: Deployment:** Package the assistant as a standalone executable and deploy it to users.
