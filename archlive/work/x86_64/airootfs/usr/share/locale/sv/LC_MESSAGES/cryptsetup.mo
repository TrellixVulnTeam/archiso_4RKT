��    z      �  �   �      H
     I
  �   _
  <        [     x     �     �     �     �  7   �               4  &   9  4   `  "   �  D   �  A   �  7   ?  !   w     �  "   �  A   �       #   4     X  #   p  -   �     �  $   �     �          0  %   J  F   p     �     �  *   �          &     @     Y     m     �  #   �     �     �  1   �  8   #  (   \     �  ,   �  *   �  *   �     #  ?   1  4   q     �     �      �     �  %     !   4  0   V  8   �  @   �            D   4     y  '   �  0   �  )   �  (     &   <     c     ~  '   �  )   �  '   �          ,     4     H  "   _  /   �  6   �  6   �  >         _     v  &   �  M   �  5   
  2   @  +   s  6   �     �  (   �       .   -     \      p     �     �     �  &   �       N   $  O   s     �     �  ,   �     &     ,  1   F     x     �     �  (   �  1   �  p        q  �   �  C   ]     �     �     �     �     �     
  8     !   J     l     �  :   �  6   �  $      d   '   S   �   H   �   +   )!     U!  '   u!  B   �!     �!  /   �!     -"  .   I"  /   x"     �"  /   �"  !   �"     #     +#  &   J#  j   q#     �#     �#  ,   $     0$     N$     j$  $   �$     �$     �$  %   �$     	%     #%  2   5%  C   h%  /   �%      �%  >   �%  ;   <&  9   x&     �&  D   �&  <   '     C'     V'  ,   n'  *   �'  0   �'  (   �'  )    (  3   J(  B   ~(     �(     �(  O   �(     M)  6   k)  >   �)  %   �)  +   *  %   3*  '   Y*     �*  %   �*  "   �*  3   �*  $   +     9+     B+     _+  $   {+  8   �+  X   �+  @   2,  E   s,     �,  !   �,     �,  e   -  @   w-  0   �-  C   �-  8   -.     f.  +   w.     �.  ?   �.     /  $   /     ?/  #   [/  )   /  1   �/  !   �/  d   �/  S   b0  (   �0     �0  (   �0     !1     $1  8   B1     {1     �1     �1  (   �1  8   �1     X             Y   +       _   ^       c           ]          L   %   A      $              [   a               ,   r   b      d       )       f       U         G       \       u   M   x          <       9   =   q   "   v   i   &       E   z                  V             j   m   6      ;       h   l   e   p       k       *       3   o   >   s           /   J   w   5   P   :   .   N   `   
                  !   8   T   0       @          B   #      W   1   ?   I   Z          C   K      D      g      y   F       4      t      (       Q   O   7           '   H      -   S           R   n                2         	    
<action> is one of:
 
<name> is the device to create under %s
<device> is the encrypted device
<key slot> is the LUKS key slot number to modify
<key file> optional key file for the new key for luksAddKey action
 
WARNING: real device header has different UUID than backup! %s: requires %s as arguments <device> <device> <key slot> <device> [<key file>] <device> [<new key file>] <name> Align payload at <n> sector boundaries - for luksFormat All key slots full.
 Argument <action> missing. BITS Backup LUKS device header and keyslots Can't do passphrase verification on non-tty inputs.
 Can't format LUKS without device.
 Cannot add key slot, all slots disabled and no volume key provided.
 Cannot create LUKS header: header digest failed (using hash %s).
 Cannot create LUKS header: reading random salt failed.
 Cannot get info about device %s.
 Cannot get process priority.
 Cannot initialize crypto backend.
 Cannot initialize device-mapper. Is dm_mod kernel module loaded?
 Cannot open device %s.
 Cannot open header backup file %s.
 Cannot read device %s.
 Cannot read header backup file %s.
 Cannot retrieve volume key for plain device.
 Cannot wipe device %s.
 Cannot write header backup file %s.
 Command failed with code %i Command successful.
 Create a readonly mapping DM-UUID for device %s was truncated.
 Data offset or key size differs on device and backup, restore failed.
 Device %s %s%s Device %s already exists.
 Device %s doesn't exist or access denied.
 Device %s has zero size.
 Device %s is not active.
 Device %s is too small.
 Display brief usage Do not ask for confirmation Enter any passphrase:  Enter new passphrase for key slot:  Enter passphrase for %s:  Enter passphrase:  Error during update of LUKS header on device %s.
 Error re-reading LUKS header after update on device %s.
 Error reading passphrase from terminal.
 Error reading passphrase.
 Failed to access temporary keystore device.
 Failed to open temporary keystore device.
 File with LUKS header and keyslots backup. Help options: How many sectors of the encrypted data to skip at the beginning How often the input of the passphrase can be retried Invalid device %s.
 Invalid key size.
 Invalid plain crypt parameters.
 Key %d not active. Can't wipe.
 Key size must be a multiple of 8 bits Key slot %d active, purge first.
 Key slot %d is full, please select another one.
 Key slot %d is invalid, please select between 0 and %d.
 Key slot %d is invalid, please select keyslot between 0 and %d.
 Key slot %d is invalid.
 Key slot %d is not used.
 Key slot %d material includes too few stripes. Header manipulation?
 Key slot %d unlocked.
 No key available with this passphrase.
 No known cipher specification pattern detected.
 Option --header-backup-file is required.
 Out of memory while reading passphrase.
 PBKDF2 iteration time for LUKS (in ms) Passphrases do not match.
 Print package version Read the volume (master) key from file. Requested LUKS hash %s is not supported.
 Restore LUKS device header and keyslots Resume suspended LUKS device. SECTORS Show debug messages Show this help message Shows more detailed error messages Slot number for new key (default is first free) Suspend LUKS device and wipe key (all IOs are frozen). The cipher used to encrypt the disk (see /proc/crypto) The hash used to create the encryption key from the passphrase The size of the device The size of the encryption key The start offset in the backend device This is the last keyslot. Device will become unusable after purging this key. This operation is not supported for %s crypt device.
 This operation is supported only for LUKS device.
 This will overwrite data on %s irrevocably. Timeout for interactive passphrase prompt (in seconds) Unknown action. Unknown crypt device type %s requested.
 Unsupported LUKS version %d.
 Verifies the passphrase by asking for it twice Verify passphrase:  Volume %s is already suspended.
 Volume %s is not active.
 Volume %s is not suspended.
 Volume key buffer too small.
 Volume key does not match the volume.
 add key to LUKS device already contains LUKS header. Replacing header will destroy existing keyslots. does not contain LUKS header. Replacing header can destroy data on that device. dump LUKS partition information formats a LUKS device memory allocation error in action_luksFormat msecs print UUID of LUKS device removes supplied key or key file from LUKS device resize active device secs show device status tests <device> for LUKS partition header wipes key with number <key slot> from LUKS device Project-Id-Version: cryptsetup 1.1.0-rc4
Report-Msgid-Bugs-To: dm-crypt@saout.de
POT-Creation-Date: 2015-10-29 13:27+0100
PO-Revision-Date: 2010-01-08 11:37+0100
Last-Translator: Daniel Nylander <po@danielnylander.se>
Language-Team: Swedish <tp-sv@listor.tp-sv.se>
Language: sv
MIME-Version: 1.0
Content-Type: text/plain; charset=utf-8
Content-Transfer-Encoding: 8bit
 
<åtgärd> är en av:
 
<namn> är enheten att skapa under %s
<enhet> är den krypterade enheten
<nyckelplats> är numret för LUKS-nyckelplatsen att ändra
<nyckelfil> valfri nyckelfil för den nya nyckeln för luksAddKey-åtgärden
 
VARNING: verkligt enhetshuvud har annat UUID än säkerhetskopian! %s: kräver %s som argument <enhet> <enhet> <nyckelplats> <enhet> [<nyckelfil>] <enhet> [<ny nyckelfil>] <namn> Justera nyttolast i <n> sektorgränser - för luksFormat Alla nyckelplatser är upptagna.
 Argumentet <åtgärd> saknas. BITAR Säkerhetskopiera huvud och nyckelplatser från LUKS-enhet Kan inte verifiera lösenfras på icke-tty-ingångar.
 Kan inte formatera LUKS utan enhet.
 Kan inte lägga till nyckelplats. Alla platser är inaktiverade och ingen volymnyckel har angivits.
 Kan inte skapa LUKS-huvud: huvudsammanfattning misslyckades (använder hashen %s).
 Kan inte skapa LUKS-huvud: läsning av slumpmässigt salt misslyckades.
 Kan inte hämta information om enheten %s.
 Kan inte få processprioritet.
 Kan inte initiera krypteringsbakände.
 Kan inte initiera device-mapper. Är kärnmodulen dm_mod inläst?
 Kan inte öppna enheten %s.
 Kan inte öppna säkerhetskopia för huvud %s.
 Kan inte läsa enheten %s.
 Kan inte läsa säkerhetskopia för huvud %s.
 Kan inte hämta volymnyckel för vanlig enhet.
 Kan inte rensa enheten %s.
 Kan inte skriva säkerhetskopia för huvud %s.
 Kommandot misslyckades med kod %i Kommandot lyckades.
 Skapa en skrivskyddad mappning DM-UUID för enheten %s förkortades.
 Dataoffset eller nyckelstorlek skiljer sig på enhet och säkerhetskopia. Återställningen misslyckades.
 Enhet %s %s%s Enheten %s finns redan.
 Enheten %s finns inte eller åtkomst nekas.
 Enheten %s har noll storlek.
 Enheten %s är inte aktiv.
 Enheten %s är för liten.
 Visa kort information om användning Fråga inte efter bekräftelse Ange valfri lösenfras:  Ange ny lösenfras för nyckelplats:  Ange lösenfras för %s:  Ange lösenfras:  Fel vid uppdatering av LUKS-huvud på enheten %s.
 Fel vid omläsning av LUKS-huvud efter uppdatering på enheten %s.
 Fel vid läsning av lösenfras från terminal.
 Fel vid läsning av lösenfras.
 Misslyckades med att komma åt temporär nyckellagringsenhet.
 Misslyckades med att öppna temporär nyckellagringsenhet.
 Fil med säkerhetskopior av LUKS-huvud och nyckelplatser. Hjälpflaggor: Hur många sektorer av krypterat data som ska hoppas över i början Hur många inmatningsförsök av lösenfrasen som kan göras Ogiltig enhet %s.
 Ogiltig nyckelstorlek.
 Ogiltiga parametrar för vanlig kryptering.
 Nyckel %d är inte aktiv. Kan inte rensa.
 Nyckelstorlek måste vara en multipel av 8 bitar Nyckelplats %d är aktiv, rensa först.
 Nyckelplats %d är full. Välj en annan.
 Nyckelplats %d är ogiltig. Välj mellan 0 och %d.
 Nyckelplats %d är ogiltig. Välj en nyckelplats mellan 0 och %d.
 Nyckelplats %d är ogiltig.
 Nyckelplats %d används inte.
 Nyckelplats %d material inkluderar för få stripes. Har huvudet manipulerats?
 Nyckelplats %d är upplåst.
 Ingen nyckel finns tillgänglig med denna lösenfras.
 Inget känt chifferspecifikationsmönster kunde identifieras.
 Flaggan --header-backup-file krävs.
 Slut på minne vid läsning av lösenfras.
 PBKDF2-iterationstid för LUKS (i ms) Lösenfraserna stämmer inte överens.
 Skriv ut paketversion Läs volymnyckeln (master) från fil. Begärd LUKS-hash %s stöds inte.
 Återställ huvud och nyckelplatser för LUKS-enhet Återuppta LUKS-enhet i vänteläge. SEKTORER Visa felsökningsmeddelanden Visa detta hjälpmeddelande Visar mer detaljerade felmeddelanden Platsnummer för ny nyckel (standard är första lediga) Försätt LUKS-enhet i vänteläge och rensa nyckel (alla in-/ut-åtgärder är frusna). Chiffret som används för att kryptera disken (se /proc/crypto) Hashen som används för att skapa krypteringsnyckel från lösenfras Storleken för enheten Storleken för krypteringsnyckeln Startoffset i bakändesenheten Detta är sista nyckelplatsen. Enheten kommer att bli oanvändbar efter att denna nyckel tagits bort. Denna åtgärd stöds inte för krypteringsenheter av typen %s.
 Denna åtgärd stöds endast för LUKS-enheter.
 Detta kommer att skriva över data på %s och går inte att ångra. Tidsgräns för interaktiv lösenfrasprompt (i sekunder) Okänd åtgärd. Okänd typ av krypteringsenhet %s begärd.
 LUKS-versionen %d stöds inte.
 Verifierar lösenfrasen genom att fråga efter den två gånger Verifiera lösenfras:  Volymen %s är redan i vänteläge.
 Volymen %s är inte aktiv.
 Volymen %s är inte i vänteläge.
 Buffert för volymnyckel är för liten.
 Volymnyckeln stämmer inte överens med volymen.
 lägg till nyckel till LUKS-enhet innehåller redan LUKS-huvud. Ersättningen av huvud kommer att förstöra befintliga nyckelplatser. innehåller inget LUKS-huvud. Ersättning av huvud kan förstöra data på enheten. skriver ut information om LUKS-partition formaterar en LUKS-enhet minnesallokeringsfel i action_luksFormat ms skriv ut UUID för LUKS-enhet tar bort angiven nyckel eller nyckelfil från LUKS-enhet ändra storlek på aktiv enhet s visa enhetsstatus testar <enhet> för LUKS-partitionshuvud rensar nyckeln med nummer <nyckelplats> från LUKS-enhet 