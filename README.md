# Lyra, Simplified

Lyra, Simplified is a project to make a simplified but more accessible
version of the tools in Unreal's
[Lyra Starter Game](https://dev.epicgames.com/community/learning/paths/Z4/lyra-starter-game).
Lyra has a lot of really useful tools, but some of them are deeply
ingrained with multiplayer code as well as with other complex tools
that may prove to be challenging to set up. Not to mention, the
project can be very intimidating to someone new to the engine.

This project attempts to take the tools that I find to be the most
useful, and make them more accessible as well as scope them down to
be more relevant for smaller projects. Here are the tools I've
extracted so far:

## Basic Hero Component
The [Basic Hero Component](https://github.com/josiest/BasicHeroComponent)
is a very simple component that aims to make it marginally easier
to set up basic features on a player character, such as movement
and camera controls.

As it stands now, the plugin is very trivial and not super novel.
Plans for future development however are to make a few different
general archetypes for common small-scoped character setups, as
well as to set up data-oriented configuration to provide some
accessible configuration points.

## Simple Gameplay Experience

The [Simple Gameplay Experience](https://github.com/josiest/SimpleGameplayExperience)
provides a data-oriented approach to setting up a game instance.
As of right now, this just means choosing the pawn type and setting
up input. Current plans for future development are to set up the
main UI layout as well.