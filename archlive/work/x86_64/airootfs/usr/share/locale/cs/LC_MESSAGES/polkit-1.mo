��          �   %   �      `  !   a  !   �  #   �     �  ,   �          /  >   6  D   u  ;   �  �   �     �  %   �  #   �     
  $     "   2     U  ,   f  $   �  %   �     �  )   �     &  c  3     �	  �  �	  $   =  %   b  *   �     �  2   �  !   �        E   )  V   o  J   �  �        �  !   �  $        5  "   8  &   [     �  &   �  .   �  /   �  $     ,   C     p  �       \                                        	                                                                            
        %s: Argument expected after `%s'
 %s: Invalid --process value `%s'
 %s: Invalid process specifier `%s'
 %s: Subject not specified
 %s: Two arguments expected after `--detail'
 %s: Unexpected argument `%s'
 ACTION Authentication is needed to run `$(program)' as the super user Authentication is needed to run `$(program)' as user $(user.display) Authentication is required to run a program as another user Authentication is required to run the polkit example program Frobnicate (user=$(user), user.gecos=$(user.gecos), user.display=$(user.display), program=$(program), command_line=$(command_line)) BUS_NAME Close FD when the agent is registered Don't replace existing agent if any FD Only output information about ACTION Output detailed action information PID[,START_TIME] Register the agent for the specified process Register the agent owner of BUS_NAME Report bugs to: %s
%s home page: <%s> Run a program as another user Run the polkit example program Frobnicate Show version Usage:
  pkcheck [OPTION...]

Help Options:
  -h, --help                         Show help options

Application Options:
  -a, --action-id=ACTION             Check authorization to perform ACTION
  -u, --allow-user-interaction       Interact with the user if necessary
  -d, --details=KEY VALUE            Add (KEY, VALUE) to information about the action
  --enable-internal-agent            Use an internal authentication agent if necessary
  --list-temp                        List temporary authorizations for current session
  -p, --process=PID[,START_TIME]     Check authorization of specified process
  --revoke-temp                      Revoke all temporary authorizations for current session
  -s, --system-bus-name=BUS_NAME     Check authorization of owner of BUS_NAME
  --version                          Show version

Report bugs to: %s
%s home page: <%s>
 [--action-id ACTION] Project-Id-Version: polkit
Report-Msgid-Bugs-To: 
POT-Creation-Date: 2013-06-04 11:06+0200
PO-Revision-Date: 2013-06-04 11:33+0200
Last-Translator: Tomáš Chvátal <tchvatal@suse.cz>
Language-Team: Czech <kde-i18n-doc@kde.org>
Language: cs
MIME-Version: 1.0
Content-Type: text/plain; charset=UTF-8
Content-Transfer-Encoding: 8bit
Plural-Forms: nplurals=2; plural=(n != 1);
X-Generator: Lokalize 1.5
 %s: po `%s' je očekáván argument
 %s: Neplatná hodnota --process `%s'
 %s: neplatný identifikátor procesu `%s'
 %s: neurčen předmět
 %s: po `--detail' jsou očekávány dva argumenty
 %s: neočekávaný argument `%s'
 ČINNOST Pro spuštění `$(program)' jako správce je vyžadováno ověření Pro spuštění `$(program)' jako uživatel $(user.display) je vyžadováno ověření Pro spuštění programu pod jiným uživatelem je vyžadováno ověření Pro spuštění ukázkového programu polkit Frobnicate je vyžadováno ověření (user=$(user), user.gecos=$(user.gecos), user.display=$(user.display), program=$(program), command_line=$(command_line)) NÁZEV_SBĚRNICE Uzavře FD při registraci agenta Nenahrazovat již bežícího agenta FD Pouze vypsat informace o ČINNOSTI Vypsat podrobné informace o činnosti PID[,ČAS_ZAHÁJENÍ] Registrovat agenta pro určený proces Registrovat agenta vlastníka NÁZEV_SBĚRNICE Chyby hlaste na: %s
%s domovská stránka: <%s> Spustit program jako jiný uživatel Spustit ukázkový program polkit Frobnicate Zobrazit verzi Použití:
  pkcheck [MOŽNOSTI]

Možnosti nápovědy:
  -h, --help                         Zobrazit možnosti nápovědy

Možnosti aplikace:
  -a, --action-id=ČINNOST             Zkontroluje oprávnění pro vykonání činnosti
  -u, --allow-user-interaction       Povolit uživatelskou interakci, pokud je potřeba
  -d, --details=KLÍČ HODNOTA            Přidá (KLÍČ, HODNOTA) do informací o činnosti
  --enable-internal-agent            Pokud je třeba, tak použít interního agenta ověření
  --list-temp                        Vypsat dočasná oprávnění pro aktuální sezení
  -p, --process=PID[,ČAS_ZAHÁJENÍ]     Zkontrolovat oprávnění vybraného procesu
  --revoke-temp                      Zrušit všechna dočasná oprávnění pro aktuální sezení
  -s, --system-bus-name=NÁZEV_SBĚRNICE     Zkontrolovat oprávnění vlastníka NÁZEV_SBĚRNICE
  --version                          Zobrazit verzi

Chyby hlaste na: %s
%s domovská stránka: <%s>
 [--action-id ČINNOST] 