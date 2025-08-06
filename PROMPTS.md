# AI Prompts for Building the Virtual AI Assistant

This file contains a series of prompts that can be used to guide an AI developer in building the Virtual AI Assistant project, as specified in the `PRD.md`. Each prompt corresponds to a phase in the project's roadmap.

## Phase 1: Core Brain

**Objective:** Implement the core brain of the assistant, including the knowledge graph and LLM integration.

**Prompt:**

You are an expert C++ developer. Your task is to implement the 'Core Brain' of a virtual AI assistant. The project requirements are detailed in the `PRD.md` file.

**Requirements:**

1.  **Integrate the existing `ElephantMemory` library:** The project already includes a knowledge graph library called `ElephantMemory`. You need to use this library to store and retrieve information.
2.  **Integrate a Large Language Model (LLM):** You need to integrate an LLM for natural language understanding and generation. The `PRD.md` suggests using `Ollama` or `llama.cpp`. You should choose one and implement the integration.
3.  **Create a `CoreBrain` class:** This class will encapsulate the logic for the thinking process. It should be able to:
    *   Receive a text query from the user.
    *   Query the `ElephantMemory` knowledge graph based on the user's query.
    *   Formulate a prompt for the LLM, including the context from the knowledge graph.
    *   Send the prompt to the LLM and get a response.
    *   Process the LLM's response and store new information in the knowledge graph.
    *   Return a text response to the user.
4.  **Update the `CMakeLists.txt`:** You need to update the build system to include the new `CoreBrain` class and any new dependencies.
5.  **Create an example:** You should update `examples/main.cpp` to demonstrate the functionality of the `CoreBrain` class. The example should show how to ask a question, get a response, and how the knowledge graph is updated.

**Technical Specifications:**

*   **Programming Language:** C++
*   **Core Libraries:**
    *   **Knowledge Graph:** `ElephantMemory` (existing)
    *   **LLM Integration:** `Ollama` or `llama.cpp`
*   **Build System:** `CMake`

You should start by exploring the existing `ElephantMemory` code to understand how it works. Then, proceed with the LLM integration and the creation of the `CoreBrain` class.

## Phase 2: Perception

**Objective:** Implement the perception system, including continuous voice monitoring, VAD, speaker diarization, and speech-to-text.

**Prompt:**

You are an expert C++ developer. Your task is to implement the 'Perception' system of a virtual AI assistant. The project requirements are detailed in the `PRD.md` file.

**Requirements:**

1.  **Continuous Voice Monitoring:** Implement a system that continuously listens to the audio stream from the microphone. The `PRD.md` suggests using `PortAudio` or `RtAudio`.
2.  **Voice Activity Detection (VAD):** Integrate a VAD library to detect when a user is speaking.
3.  **Speaker Diarization:** Implement a mechanism to identify when the assistant is being spoken to. This could be a simple keyword-based activation (e.g., 'Hey, Assistant!').
4.  **Speech-to-Text:** Integrate a speech-to-text library to transcribe spoken language into text. The `PRD.md` suggests `Vosk` or a similar library.
5.  **Create a `Perception` class:** This class will encapsulate the logic for the perception system. It should be able to:
    *   Start and stop the audio monitoring.
    *   Detect voice activity.
    *   When activated, transcribe the user's speech to text.
    *   Pass the transcribed text to the `CoreBrain` for processing.
6.  **Update the `CMakeLists.txt`:** You need to update the build system to include the new `Perception` class and any new dependencies.
7.  **Create an example:** You should create a new example file to demonstrate the functionality of the `Perception` class. The example should show how to start listening, detect speech, and transcribe it to text.

**Technical Specifications:**

*   **Programming Language:** C++
*   **Audio Processing:** `PortAudio` or `RtAudio`
*   **Speech-to-Text:** `Vosk` or a similar library
*   **Build System:** `CMake`

You should start by researching and choosing the appropriate libraries for audio processing and speech-to-text. Then, implement the `Perception` class and integrate it with the `CoreBrain` from Phase 1.

## Phase 3: Action

**Objective:** Implement the action system, including TTS and command execution.

**Prompt:**

You are an expert C++ developer. Your task is to implement the 'Action' system of a virtual AI assistant. The project requirements are detailed in the `PRD.md` file.

**Requirements:**

1.  **Text-to-Speech (TTS):** Integrate a TTS library to convert text responses from the `CoreBrain` into speech. The `PRD.md` suggests `eSpeak`, `Flite`, or a similar library.
2.  **Command Execution:** Implement a mechanism to execute shell commands on the computer. This will allow the assistant to perform tasks like opening applications, running scripts, etc.
3.  **Create an `Action` class:** This class will encapsulate the logic for the action system. It should be able to:
    *   Receive a text response from the `CoreBrain`.
    *   If the response is a command, execute it.
    *   If the response is conversational, convert it to speech and play it to the user.
4.  **Update the `CMakeLists.txt`:** You need to update the build system to include the new `Action` class and any new dependencies.
5.  **Create an example:** You should create a new example file to demonstrate the functionality of the `Action` class. The example should show how to convert text to speech and how to execute a shell command.

**Technical Specifications:**

*   **Programming Language:** C++
*   **Text-to-Speech:** `eSpeak`, `Flite`, or a similar library
*   **Build System:** `CMake`

You should start by researching and choosing a suitable TTS library. Then, implement the `Action` class and integrate it with the `CoreBrain`.

## Phase 4: Integration and Testing

**Objective:** Integrate all the components and perform thorough testing.

**Prompt:**

You are an expert C++ developer. Your task is to integrate and test the virtual AI assistant. You need to combine the `CoreBrain`, `Perception`, and `Action` systems into a cohesive application.

**Requirements:**

1.  **Create a main application:** Create a `main.cpp` file that initializes and runs the `CoreBrain`, `Perception`, and `Action` systems. The application should start by listening for the activation keyword.
2.  **Integrate the components:**
    *   The `Perception` system should pass the transcribed text to the `CoreBrain`.
    *   The `CoreBrain` should process the text and return a response.
    *   The `Action` system should receive the response from the `CoreBrain` and either speak it or execute it as a command.
3.  **Thorough Testing:** You need to test the entire workflow:
    *   Test the activation keyword detection.
    *   Test the speech-to-text transcription.
    *   Test the interaction with the `CoreBrain` and the knowledge graph.
    *   Test the text-to-speech output.
    *   Test the command execution.
4.  **Update the `CMakeLists.txt`:** You need to update the build system to create the final executable.
5.  **Documentation:** You should update the `README.md` with instructions on how to build and run the complete virtual AI assistant.

**Technical Specifications:**

*   **Programming Language:** C++
*   **Build System:** `CMake`

You should focus on creating a stable and reliable application. Make sure to handle errors and edge cases gracefully.

## Phase 5: Deployment

**Objective:** Package the assistant as a standalone executable and deploy it to users.

**Prompt:**

You are an expert C++ developer. Your task is to package the virtual AI assistant as a standalone executable for different operating systems.

**Requirements:**

1.  **Cross-Platform Build:** Ensure that the project can be built on Windows, macOS, and Linux. You might need to adjust the `CMakeLists.txt` file to handle platform-specific dependencies and settings.
2.  **Create a Standalone Package:** Create a script or use a tool (like `CPack` with `CMake`) to package the application and all its dependencies into a single, easy-to-install package for each target platform.
3.  **Installation Instructions:** Create detailed installation instructions for each platform. This should be added to the `README.md` or a separate `INSTALL.md` file.
4.  **Release on GitHub:** Create a new release on the project's GitHub repository with the packaged executables.

**Technical Specifications:**

*   **Build System:** `CMake`
*   **Packaging:** `CPack` or similar

You should aim to make the installation process as simple as possible for the end-user.
