# Remote controlled Lego car
This repo contains the code used by me in the *Radiostyrd bil* 
project in school.

## Design decisions
- ESP8266 is used as a microcontroller
- It communicates to the frontend via an MQTT broker

## Repo folder structure
- `radiobil-microcontroller` contains a *PlatformIO* project for the 
    ESP8266 microcontroller used in the project
- `radiobil-frontend` contains the frontend code for a Vue application
    which controls the car via MQTT
- `radiobil-deploy` contains deployment files and instructions
