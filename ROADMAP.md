# Planering bil

## Bilens konstruktion
- Lego Technic
- Styrning med gradservo som ansluts till legostyrning
- Mikrokontroller med kod för styrning av bilen och kommunikation via MQTT
- Drivlina med en DC-motor
- Batteri eller annan spänningskälla till driv och dator
## Mjukvara i monorepo
- Kod på Arduino, skriven i PlatformIO (C++)
    - Delar av koden styr själva bilen
    - En annan del subscribe:ar på MQTT-meddelandekö
    - Använd clang-tidy samt clang-format för enhetlig kodstil
    - Denna del av koden skrivs på Windows och pushas till monorepot
- MQTT-broker på nätverket
    - Raspberry PI + NixOS?
    - Inbyggd hotspot i RPI:n?
    - Använda annans broker?
    - Lägga in ett deployment i monorepot med NixOS
- Frontend, skriven i JavaScript med Vue
    - Kommunicerar med MQTT-brokern och lägger in styrkommandon
    - Hostas på samma RPI som MQTT?
    - Prettier alt. https://github.com/standard/standard
    - Använda Nix i WSL? Containerisera med Nix?
    - Utvecklas och pushas från Linux
# Cad
-	Servoadapter från den lilla plastgrejen i servot
-	Adapter från motorns växellåda till drivande axel, via kugghjul?

