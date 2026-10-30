Play instructions: controls, objective, and any special setup or rules needed to try your game.

move: WASD or Arrow Keys
Place Bomb: SPACE
Use Shield: R
Quit: ESC or Q

Feature checklist: the five required features and your three chosen extensions. For each, document at least one useful check: what you tested, what you observed, and how the result compares with the expected behaviour. One or two sentences per feature are enough. Choose a check that could reveal a mistake, such as a boundary case or interaction. You do not need to document every test or repeat the acceptance conditions.

1. Player damage and death: The player got hit by an enemy and took damage. When the player lost all 3 lives the game ended and the lose screen appeared.

2. Round states and an achievable objective: Key binds and gameplay updates only work when the game is in "playing" game state. When the player either loses or scores 10.000 points, the game ends and the game changes game state to either lost or won.

3. Safe Restart: The game ended with an amount of points and lives lost, when restarted, score reset to 0 and lives reset as well. The map layout (seed) changes

4. Solid bombs with owner escape: Bombs are solid when leaving the player, neither player nor enemies can go through them.
 
5. Collectible blast-range power-ups: Blast range begins at 3, when picking up an power-up, it increases with 1.

6. Multiple bombs per owner: A player can place 2 bombs instead of 1. Bombs can destroy other bombs and entities.

7. Shield or temporary invulnerability: There are shield power-ups on the map, when picking them up a player can use the shield whenever they want to as long as they have at least 1 shield in inventory.

8. Kickable bombs: When placing a bomb, the player kicks it the way they are moving, can kick more than once but will take damage if caught by the blast.

Known issues and sources: any remaining problems, plus a brief account of external code, collaboration, and AI assistance.
I got stuck when trying to make the blast-range power-ups and used AI to assist. 