; This file is distributed under a BSD license. See LICENSE.txt for details.

; data files

                bits    32

                section .data

                global  _PlayerDemo
                global  _PlayerKKrieger
                global  _PlayerIntro

_PlayerDemo     incbin  "../player_demo/debug/player_demo.exe"
_PlayerKKrieger incbin  "../player_demo/debug/player_demo.exe"
_PlayerIntro    incbin  "../player_intro/debug/player_intro.exe"
