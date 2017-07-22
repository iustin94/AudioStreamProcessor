#include <iostream>
#include <SFML/Audio.hpp>

//installed sfml dependencies
//cmake https://www.sfml-dev.org/tutorials/2.4/compile-with-cmake.php

int main() {

    std::string tmpcmd;
    std::cout << "Hello, World!" << std::endl;

    std::cin >> tmpcmd;

    if (!sf::SoundBufferRecorder::isAvailable()){
        //audio capture not available
        throw __EXCEPTION__("Audio capture not available");
    }
    else {

        while (tmpcmd != "quit") {

            sf::SoundBufferRecorder recorder;
            const sf::SoundBuffer& buffer = recorder.getBuffer();

            //record
            if (tmpcmd == "record") {

                recorder.start();
            }

            if (tmpcmd == "stop") {
                recorder.stop();

            }

            if (tmpcmd == "playback") {
                sf::Sound sound(buffer);
                sound.play();
            }


            std::cin >> tmpcmd;
        }
    }
    return 0;
}

void checkForAudioDevice() {
    if (!sf::SoundBufferRecorder::isAvailable())
    {
        //audio capture not available
    }

    sf::SoundBufferRecorder recorder;

    recorder.start();

    recorder.stop();

    const sf::SoundBuffer& buffer = recorder.getBuffer();
}