BEGIN_ENUM(PathRootType, int)
	EV(Root, 0)
	EV(Data, 1)
	EV(Public, 2)
	EV(MyDocuments, 3)
	EV(GameStorage, 4)
END_ENUM()

BEGIN_BITMASK(InputType, int)
	EV(Unknown, 0)
	EV(Press, 1)
	EV(Release, 2)
	EV(ValueChange, 4)
	EV(Hold, 8)
	EV(Repeat, 16)
	EV(AcceleratedRepeat, 32)
END_ENUM()

BEGIN_ENUM(ExtResourceManagerType, uint32_t)
	E(Tag)
	E(Faction)
	E(Race)
	E(AbilityDistributionPreset)
	E(CharacterCreationPreset)
	E(CharacterCreationSkinColor)
	E(CharacterCreationEyeColor)
	E(CharacterCreationHairColor)
	E(CompanionPreset)
	E(Origin)
	E(Background)
	E(God)
	E(AbilityList)
	E(SkillList)
	E(SpellList)
	E(PassiveList)
	E(Progression)
	E(ProgressionDescription)
	E(Gossip)
	E(ActionResource)
	E(ActionResourceGroup)
	E(EquipmentType)
	E(VFX)
	E(DeathType)
	E(CharacterCreationAppearanceMaterial)
	E(CharacterCreationAppearanceVisual)
	E(CharacterCreationSharedVisual)
	E(TutorialEntries)
	E(Feat)
	E(FeatDescription)
	E(TutorialModalEntries)
	E(AvailableClassSpells)
	E(ClassDescription)
	E(ColorDefinition)
	E(Flag)
	E(Max)
END_ENUM()

BEGIN_ENUM(ExtComponentType, uint32_t)
	E(ServerCharacter)
	E(ServerItem)
	E(ServerProjectile)
	E(ClientCharacter)
	E(ClientItem)
	E(ClientProjectile)
	E(ActionResources)
	E(Armor)
	E(BaseHp)
	E(Data)
	E(Experience)
	E(Health)
	E(Passive)
	E(Sense)
	E(SpellBook)
	E(Stats)
	E(StatusImmunities)
	E(SurfacePathInfluences)
	E(Use)
	E(Value)
	E(Weapon)
	E(Wielding)
	E(CustomStats)
	E(BoostCondition)
	E(BoostsContainer)
	E(ActionResourceConsumeMultiplierBoost)
	E(CombatParticipant)
	E(Gender)
	E(SpellContainer)
	E(Tag)
	E(ServerOsirisTag)
	E(SpellBookPrepares)
	E(CombatState)
	E(TurnBased)
	E(TurnOrder)
	E(Transform)
	E(PassiveContainer)
	E(BoostInfo)
	E(Relation)

	// Boost components
	E(ArmorClassBoost)
	E(AbilityBoost)
	E(RollBonusBoost)
	E(AdvantageBoost)
	E(ActionResourceValueBoost)
	E(CriticalHitBoost)
	E(AbilityFailedSavingThrowBoost)
	E(ResistanceBoost)
	E(WeaponDamageResistanceBoost)
	E(ProficiencyBonusOverrideBoost)
	E(JumpMaxDistanceMultiplierBoost)
	E(HalveWeaponDamageBoost)
	E(UnlockSpellBoost)
	E(SourceAdvantageBoost)
	E(ProficiencyBonusBoost)
	E(ProficiencyBoost)
	E(IncreaseMaxHPBoost)
	E(ActionResourceBlockBoost)
	E(StatusImmunityBoost)
	E(UseBoosts)
	E(TemporaryHPBoost)
	E(WeightBoost)
	E(FactionOverrideBoost)
	E(ActionResourceMultiplierBoost)
	E(InitiativeBoost)
	E(DarkvisionRangeBoost)
	E(DarkvisionRangeMinBoost)
	E(DarkvisionRangeOverrideBoost)
	E(AddTagBoost)
	E(IgnoreDamageThresholdMinBoost)
	E(SkillBoost)
	E(WeaponDamageBoost)
	E(NullifyAbilityBoost)
	E(RerollBoost)
	E(DownedStatusBoost)
	E(WeaponEnchantmentBoost)
	E(GuaranteedChanceRollOutcomeBoost)
	E(AttributeBoost)
	E(GameplayLightBoost)
	E(DualWieldingBoost)
	E(SavantBoost)
	E(MinimumRollResultBoost)
	E(CharacterWeaponDamageBoost)
	E(ProjectileDeflectBoost)
	E(AbilityOverrideMinimumBoost)
	E(ACOverrideMinimumBoost)
	E(FallDamageMultiplierBoost)

	E(Max)
END_ENUM()


BEGIN_ENUM_NS(ecl, GameState, uint32_t)
	EV(Unknown, 0)
	E(Init)
	E(InitMenu)
	E(InitNetwork)
	E(InitConnection)
	E(Idle)
	E(LoadMenu)
	E(Menu)
	E(Exit)
	E(SwapLevel)
	EV(LoadLevel, 10)
	E(LoadModule)
	E(LoadSession)
	E(LoadGMCampaign)
	E(UnloadLevel)
	E(UnloadModule)
	E(UnloadSession)
	E(Paused)
	E(PrepareRunning)
	E(Running)
	EV(Disconnect, 20)
	E(Join)
	E(Save)
	E(StartLoading)
	E(StopLoading)
	E(StartServer)
	E(Movie)
	E(Installation)
	E(GameMasterPause)
	E(ModReceiving)
	EV(Lobby, 30)
	E(BuildStory)
	E(Unknown32)
	E(Unknown33)
	E(AnalyticsSessionEnd)
END_ENUM_NS()


BEGIN_ENUM_NS(esv, GameState, uint32_t)
	EV(Unknown, 0)
	E(Uninitialized)
	E(Init)
	E(Idle)
	E(Exit)
	E(LoadLevel)
	E(LoadModule)
	E(LoadGMCampaign)
	E(LoadSession)
	E(UnloadLevel)
	EV(UnloadModule, 10)
	E(UnloadSession)
	E(Sync)
	E(Paused)
	E(Running)
	E(Save)
	E(Disconnect)
	E(GameMasterPause)
	E(BuildStory)
	E(ReloadStory)
END_ENUM_NS()


BEGIN_ENUM(NetMessage, uint32_t)
	EV(NETMSG_HANDSHAKE, 1)
	EV(NETMSG_HOST_WELCOME, 2)
	EV(NETMSG_HOST_REFUSE, 3)
	EV(NETMSG_HOST_REFUSEPLAYER, 4)
	EV(NETMSG_CLIENT_JOINED, 8)
	EV(NETMSG_CLIENT_LEFT, 9)
	EV(NETMSG_HOST_LEFT, 5)
	EV(NETMSG_CLIENT_CONNECT, 6)
	EV(NETMSG_CLIENT_ACCEPT, 7)

	EV(NETMSG_PLAYER_CONNECT, 10)
	EV(NETMSG_PLAYER_DISCONNECT, 11)
	EV(NETMSG_PLAYER_JOINED, 13)
	EV(NETMSG_PLAYER_ACCEPT, 12)
	EV(NETMSG_PLAYER_LEFT, 14)

	EV(NETMSG_VOICEDATA, 20)
	EV(NETMSG_SKIPMOVIE_RESULT, 21)
	EV(NETMSG_MIC_DISABLED, 22)
	EV(NETMSG_CHAT, 251)

	EV(NETMSG_PEER_ACTIVATE, 117)
	EV(NETMSG_PEER_DEACTIVATE, 118)
	EV(NETMSG_MODULE_LOAD, 258)
	EV(NETMSG_MODULE_LOADED, 259)
	EV(NETMSG_SESSION_LOAD, 261)
	EV(NETMSG_SESSION_LOADED, 262)
	EV(NETMSG_SESSION_UNLOADED, 263)
	EV(NETMSG_LEVEL_LOAD, 264)
	EV(NETMSG_LEVEL_CREATED, 265)
	EV(NETMSG_LEVEL_LOADED, 266)
	EV(NETMSG_LOAD_START, 267)
	EV(NETMSG_LOAD_STARTED, 268)
	EV(NETMSG_LEVEL_INSTANTIATE_SWAP, 269)
	EV(NETMSG_LEVEL_SWAP_READY, 270)
	EV(NETMSG_LEVEL_SWAP_COMPLETE, 271)
	EV(NETMSG_LEVEL_START, 272)

	EV(NETMSG_CHARACTER_CREATE, 28)
	EV(NETMSG_CHARACTER_DESTROY, 29)
	EV(NETMSG_CHARACTER_CONFIRMATION, 30)
	EV(NETMSG_CHARACTER_ACTIVATE, 31)
	EV(NETMSG_CHARACTER_DEACTIVATE, 32)
	EV(NETMSG_CHARACTER_ASSIGN, 33)
	EV(NETMSG_CHARACTER_CHANGE_OWNERSHIP, 274)
	EV(NETMSG_CHARACTER_STEERING, 34)
	EV(NETMSG_CHARACTER_MOVEMENT_FALLING, 306)
	EV(NETMSG_CHARACTER_ACTION, 35)
	EV(NETMSG_CHARACTER_ACTION_DATA, 36)
	EV(NETMSG_CHARACTER_ACTION_REQUEST_RESULT, 37)
	EV(NETMSG_CHARACTER_STATUS, 38)
	EV(NETMSG_CHARACTER_STATUS_LIFETIME, 39)
	EV(NETMSG_CHARACTER_DIALOG, 42)
	EV(NETMSG_CHARACTER_USE_MOVEMENT, 44)
	EV(NETMSG_CHARACTER_AOO, 45)
	EV(NETMSG_CHARACTER_UPDATE, 40)
	EV(NETMSG_CHARACTER_CONTROL, 41)
	EV(NETMSG_CHARACTER_BOOST, 46)
	EV(NETMSG_CHARACTER_TRANSFORM, 47)
	EV(NETMSG_CHARACTER_PICKPOCKET, 49)
	EV(NETMSG_CHARACTER_OFFSTAGE, 50)
	EV(NETMSG_CHARACTER_IN_DIALOG, 53)
	EV(NETMSG_CHARACTER_ANIMATION_SET_UPDATE, 254)
	EV(NETMSG_CHARACTER_LOOT, 51)
	EV(NETMSG_CHARACTER_ITEM_USED, 52)
	EV(NETMSG_CHARACTER_UNSHEATHING, 43)
	EV(NETMSG_CHARACTER_BEHAVIOR, 54)

	EV(NETMSG_PARTY_CREATE, 57)
	EV(NETMSG_PARTY_DESTROY, 58)
	EV(NETMSG_PARTYCREATEGROUP, 304)
	EV(NETMSG_PARTYGROUP, 59)
	EV(NETMSG_PARTYORDER, 60)
	EV(NETMSG_PARTYUPDATE, 61)
	EV(NETMSG_PARTYUSER, 62)
	EV(NETMSG_PARTY_UNLOCKED_RECIPE, 171)
	EV(NETMSG_PARTY_NPC_DATA, 253)
	EV(NETMSG_PARTY_SPLIT_NOTIFICATION, 172)
	EV(NETMSG_PARTY_MERGE_NOTIFICATION, 173)

	EV(NETMSG_PROJECTILE_CREATE, 92)
	EV(NETMSG_PROJECTILE_UPDATE, 93)

	EV(NETMSG_DISCOVERED_PORTALS, 286)
	EV(NETMSG_MULTIPLE_TARGET_OPERATION, 328)

	EV(NETMSG_TURNBASED_FINISHTEAM, 100)
	EV(NETMSG_TURNBASED_SETTEAM, 101)
	EV(NETMSG_TURNBASED_FLEECOMBATRESULT, 102)
	EV(NETMSG_TURNBASED_FLEE_REQUEST, 103)
	EV(NETMSG_TURNBASED_ENDTURN_REQUEST, 104)
	EV(NETMSG_TURNBASED_STARTTURN_CONFIRMATION, 105)
	EV(NETMSG_TURNBASED_SKIP_START_DELAY, 106)

	EV(NETMSG_UI_FORCETURNBASED_ENTERED, 107)
	EV(NETMSG_UI_FORCETURNBASED_LEFT, 108)
	EV(NETMSG_UI_FORCETURNBASED_TURN_STARTED, 109)
	EV(NETMSG_UI_FORCETURNBASED_TURN_ENDED, 110)

	EV(NETMSG_ITEM_CREATE, 65)
	EV(NETMSG_ITEM_DESTROY, 66)
	EV(NETMSG_ITEM_ACTIVATE, 67)
	EV(NETMSG_ITEM_DEACTIVATE, 68)
	EV(NETMSG_ITEM_DESTINATION, 69)
	EV(NETMSG_ITEM_UPDATE, 70)
	EV(NETMSG_ITEM_USE_REMOTELY, 71)
	EV(NETMSG_ITEM_MOVE_TO_INVENTORY, 73)
	EV(NETMSG_ITEM_MOVE_TO_WORLD, 72)
	EV(NETMSG_ITEM_ACTION, 74)
	EV(NETMSG_ITEM_STATUS, 75)
	EV(NETMSG_ITEM_STATUS_LIFETIME, 76)
	EV(NETMSG_ITEM_TRANSFORM, 77)
	EV(NETMSG_ITEM_CONFIRMATION, 78)
	EV(NETMSG_ITEM_OFFSTAGE, 79)
	EV(NETMSG_ITEM_MOVED_INFORM, 80)
	EV(NETMSG_ITEM_MOVE_UUID, 81)

	EV(NETMSG_EGG_CREATE, 94)
	EV(NETMSG_EGG_DESTROY, 95)

	EV(NETMSG_INVENTORY_CREATE, 82)
	EV(NETMSG_INVENTORY_CREATE_AND_OPEN, 83)
	EV(NETMSG_INVENTORY_DESTROY, 84)
	EV(NETMSG_INVENTORY_VIEW_CREATE, 85)
	EV(NETMSG_INVENTORY_VIEW_DESTROY, 86)
	EV(NETMSG_INVENTORY_VIEW_UPDATE_ITEMS, 87)
	EV(NETMSG_INVENTORY_VIEW_UPDATE_PARENTS, 88)
	EV(NETMSG_INVENTORY_VIEW_SORT, 89)
	EV(NETMSG_INVENTORY_ITEM_UPDATE, 90)
	EV(NETMSG_INVENTORY_LOCKSTATE_SYNC, 91)

	EV(NETMSG_SURFACE_CREATE, 24)
	EV(NETMSG_SURFACE_META, 25)

	EV(NETMSG_DARKNESSTILE_UPDATE, 26)
	EV(NETMSG_GAMEACTION, 27)
	EV(NETMSG_GAMEOVER, 167)
	EV(NETMSG_ACT_OVER, 168)

	EV(NETMSG_SPELL_LEARN, 119)
	EV(NETMSG_SPELL_REMOVE_LEARNED, 120)
	EV(NETMSG_SPELL_PREPARE, 121)
	EV(NETMSG_SPELL_SHEATH, 122)
	EV(NETMSG_SPELL_CANCEL, 123)
	EV(NETMSG_SPELL_START, 124)
	EV(NETMSG_SPELL_END, 125)

	EV(NETMSG_GAMECONTROL_UPDATE_S2C, 129)
	EV(NETMSG_GAMECONTROL_UPDATE_C2S, 130)
	EV(NETMSG_GAMECONTROL_PRICETAG, 131)

	EV(NETMSG_DIFFICULTY_CHANGED, 273)
	EV(NETMSG_REALTIME_MULTIPLAY, 292)
	EV(NETMSG_CHARACTER_ERROR, 135)
	EV(NETMSG_SHOW_ERROR, 324)
	EV(NETMSG_FACTION_RELATION, 137)
	EV(NETMSG_FACTION_CLEAR, 138)
	EV(NETMSG_REQUESTAUTOSAVE, 255)
	EV(NETMSG_SAVEGAME, 256)
	EV(NETMSG_SAVEGAMEHANDSHAKE, 257)

	EV(NETMSG_EFFECT_CREATE, 126)
	EV(NETMSG_EFFECT_FORGET, 127)
	EV(NETMSG_EFFECT_DESTROY, 128)

	EV(NETMSG_CACHETEMPLATE, 139)
	EV(NETMSG_OVERHEADTEXT, 140)
	EV(NETMSG_COMBATLOG, 141)
	EV(NETMSG_COMBATLOGITEMINTERACTION, 142)
	EV(NETMSG_COMBATLOGENTRIES, 143)
	EV(NETMSG_SHOW_ENTER_REGION_UI_MESSAGE, 152)
	EV(NETMSG_CHARACTER_TELEPORT, 48)
	EV(NETMSG_SCREEN_FADE, 144)
	EV(NETMSG_SCREEN_FADE_DONE, 145)
	EV(NETMSG_OPEN_CUSTOM_BOOK_UI_MESSAGE, 146)
	EV(NETMSG_CLOSE_CUSTOM_BOOK_UI_MESSAGE, 147)
	EV(NETMSG_OPEN_MESSAGE_BOX_MESSAGE, 148)
	EV(NETMSG_CLOSED_MESSAGE_BOX_MESSAGE, 149)
	EV(NETMSG_OPEN_WAYPOINT_UI_MESSAGE, 150)
	EV(NETMSG_CLOSE_UI_MESSAGE, 151)
	EV(NETMSG_OPEN_CRAFT_UI_MESSAGE, 283)

	EV(NETMSG_JOURNAL_RESET, 153)
	EV(NETMSG_TELEPORT_WAYPOINT, 290)
	EV(NETMSG_QUEST_STEP, 154)
	EV(NETMSG_QUEST_CATEGORY_UPDATE, 155)
	EV(NETMSG_QUEST_PROGRESS, 156)
	EV(NETMSG_QUESTS_LOADED, 157)
	EV(NETMSG_JOURNALRECIPE_UPDATE, 159)
	EV(NETMSG_TROPHY_UPDATE, 158)
	EV(NETMSG_MARKER_UI_UPDATE, 161)
	EV(NETMSG_MARKER_UI_CREATE, 160)
	EV(NETMSG_QUEST_TRACK, 162)
	EV(NETMSG_JOURNALDIALOGLOG_UPDATE, 276)
	EV(NETMSG_UI_QUESTSELECTED, 163)
	EV(NETMSG_MYSTERY_ADVANCED, 164)
	EV(NETMSG_MYSTERY_DISABLED, 165)
	EV(NETMSG_NOTIFICATION, 166)
	EV(NETMSG_REGISTER_WAYPOINT, 169)
	EV(NETMSG_UNLOCK_WAYPOINT, 285)
	EV(NETMSG_LOCK_WAYPOINT, 287)
	EV(NETMSG_FLAG_UPDATE, 170)
	EV(NETMSG_LIGHTING_OVERRIDE, 249)
	EV(NETMSG_ATMOSPHERE_OVERRIDE, 250)
	EV(NETMSG_CAMERA_ACTIVATE, 245)
	EV(NETMSG_CAMERA_ROTATE, 246)
	EV(NETMSG_CAMERA_TARGET, 247)
	EV(NETMSG_CAMERA_MODE, 248)
	EV(NETMSG_SHROUD_UPDATE, 63)
	EV(NETMSG_SECRET_REGION_UNLOCK, 64)
	EV(NETMSG_PLAYSOUND, 132)
	EV(NETMSG_PLAYMOVIE, 133)
	EV(NETMSG_TRADE_ACTION, 244)
	EV(NETMSG_ACHIEVEMENT_UNLOCKED_MESSAGE, 277)
	EV(NETMSG_SAVEGAME_LOAD_FAIL, 278)
	EV(NETMSG_SERVER_COMMAND, 279)
	EV(NETMSG_SERVER_NOTIFICATION, 280)
	EV(NETMSG_GAMETIME_SYNC, 252)
	EV(NETMSG_ITEM_ENGRAVE, 281)
	EV(NETMSG_STORY_ELEMENT_UI, 282)
	EV(NETMSG_ACHIEVEMENT_PROGRESS_MESSAGE, 284)
	EV(NETMSG_TELEPORT_ACK, 303)
	EV(NETMSG_PLAY_HUD_SOUND, 134)
	EV(NETMSG_COMBINE_RESULT, 288)
	EV(NETMSG_UNLOCK_ITEM, 289)
	EV(NETMSG_DIALOG_STATE_MESSAGE, 174)
	EV(NETMSG_DIALOG_NODE_MESSAGE, 175)
	EV(NETMSG_DIALOG_ANSWER_MESSAGE, 176)
	EV(NETMSG_DIALOG_ANSWER_HIGHLIGHT_MESSAGE, 177)
	EV(NETMSG_DIALOG_HISTORY_MESSAGE, 178)
	EV(NETMSG_DIALOG_LISTEN, 293)
	EV(NETMSG_DIALOG_ACTORJOINS_MESSAGE, 179)
	EV(NETMSG_DIALOG_ACTORLEAVES_MESSAGE, 180)
	EV(NETMSG_DIALOG_REPLACESPEAKER_MESSAGE, 181)
	EV(NETMSG_DIALOG_INVALID_ANSWER, 294)
	EV(NETMSG_DIALOG_SUGGESTANSWER_MESSAGE, 182)
	EV(NETMSG_LOBBY_DATAUPDATE, 297)
	EV(NETMSG_LOBBY_USERUPDATE, 298)
	EV(NETMSG_LOBBY_STARTGAME, 299)
	EV(NETMSG_CAMERA_SPLINE, 305)
	EV(NETMSG_GM_SPAWN, 184)
	EV(NETMSG_GM_DELETE, 185)
	EV(NETMSG_FACTION_SET, 136)
	EV(NETMSG_GM_ITEM_CHANGE, 186)
	EV(NETMSG_GM_DRAW_SURFACE, 187)
	EV(NETMSG_GM_TOGGLE_OVERVIEWMAP, 188)
	EV(NETMSG_GM_TOGGLE_VIGNETTE, 189)
	EV(NETMSG_GM_DAMAGE, 190)
	EV(NETMSG_GM_HEAL, 193)
	EV(NETMSG_GM_EXPORT, 191)
	EV(NETMSG_GM_REMOVE_EXPORTED, 192)
	EV(NETMSG_GM_ADD_EXPERIENCE, 194)
	EV(NETMSG_GM_TOGGLE_PAUSE, 195)
	EV(NETMSG_GM_TOGGLE_PEACE, 223)
	EV(NETMSG_GM_CHANGE_LEVEL, 201)
	EV(NETMSG_GM_TRAVEL_TO_DESTINATION, 205)
	EV(NETMSG_GM_STOP_TRAVELING, 206)
	EV(NETMSG_GM_POSSESS, 218)
	EV(NETMSG_GM_CHANGE_NAME, 219)
	EV(NETMSG_GM_SET_INTERESTED_CHARACTER, 225)
	EV(NETMSG_GM_DUPLICATE, 220)
	EV(NETMSG_GM_ITEM_USE, 221)
	EV(NETMSG_MODULES_DOWNLOAD, 260)
	EV(NETMSG_NET_ENTITY_CREATE, 115)
	EV(NETMSG_NET_ENTITY_DESTROY, 116)
	EV(NETMSG_GM_VIGNETTE_ANSWER, 202)
	EV(NETMSG_GM_POSITION_SYNC, 203)
	EV(NETMSG_GM_TELEPORT, 204)
	EV(NETMSG_UPDATE_CHARACTER_TAGS, 300)
	EV(NETMSG_UPDATE_ITEM_TAGS, 301)
	EV(NETMSG_GM_CAMPAIGN_SAVE, 207)
	EV(NETMSG_GM_SYNC_ASSETS, 211)
	EV(NETMSG_GM_ASSETS_PENDING_SYNCS_INFO, 212)
	EV(NETMSG_GM_SYNC_SCENES, 208)
	EV(NETMSG_GM_SYNC_OVERVIEW_MAPS, 209)
	EV(NETMSG_GM_SYNC_VIGNETTES, 210)
	EV(NETMSG_GM_SYNC_NOTES, 238)
	EV(NETMSG_GM_REORDER_ELEMENTS, 213)
	EV(NETMSG_GM_SET_START_POINT, 214)
	EV(NETMSG_GM_CONFIGURE_CAMPAIGN, 215)
	EV(NETMSG_GM_LOAD_CAMPAIGN, 216)
	EV(NETMSG_GM_REQUEST_CAMPAIGN_DATA, 217)
	EV(NETMSG_GM_MAKE_TRADER, 224)
	EV(NETMSG_GM_GIVE_REWARD, 226)
	EV(NETMSG_GM_CREATE_ITEM, 230)
	EV(NETMSG_GM_SET_LIGHTING, 231)
	EV(NETMSG_GM_SET_ATMOSPHERE, 232)
	EV(NETMSG_GM_SOUND_PLAYBACK, 233)
	EV(NETMSG_GM_CHANGE_SCENE_NAME, 234)
	EV(NETMSG_GM_CHANGE_SCENE_PATH, 235)
	EV(NETMSG_GM_EDIT_ITEM, 236)
	EV(NETMSG_GM_UI_OPEN_STICKY, 237)
	EV(NETMSG_GM_HOST, 222)
	EV(NETMSG_GM_SET_STATUS, 227)
	EV(NETMSG_GM_REMOVE_STATUS, 228)
	EV(NETMSG_GM_CLEAR_STATUSES, 229)
	EV(NETMSG_GM_MAKE_FOLLOWER, 239)
	EV(NETMSG_GM_DEACTIVATE, 240)
	EV(NETMSG_GM_INVENTORY_OPERATION, 241)
	EV(NETMSG_GM_SET_REPUTATION, 242)
	EV(NETMSG_GM_REQUEST_CHARACTERS_REROLL, 243)
	EV(NETMSG_GM_JOURNAL_UPDATE, 326)
	EV(NETMSG_MUSIC_EVENT, 296)
	EV(NETMSG_MUSIC_STATE, 295)
	EV(NETMSG_RUNECRAFT, 275)
	EV(NETMSG_PAUSE, 308)
	EV(NETMSG_UNPAUSE, 309)
	EV(NETMSG_READYCHECK, 307)
	EV(NETMSG_SET_CHARACTER_ARCHETYPE, 310)
	EV(NETMSG_DIPLOMACY, 311)
	EV(NETMSG_TRIGGER_CREATE, 312)
	EV(NETMSG_TRIGGER_DESTROY, 313)
	EV(NETMSG_TRIGGER_UPDATE, 314)
	EV(NETMSG_PING_BEACON, 315)
	EV(NETMSG_CUSTOM_STATS_DEFINITION_CREATE, 316)
	EV(NETMSG_CUSTOM_STATS_DEFINITION_REMOVE, 317)
	EV(NETMSG_CUSTOM_STATS_DEFINITION_UPDATE, 318)
	EV(NETMSG_CUSTOM_STATS_CREATE, 319)
	EV(NETMSG_CUSTOM_STATS_UPDATE, 320)
	EV(NETMSG_GIVE_REWARD, 321)
	EV(NETMSG_LOAD_GAME_WITH_ADDONS, 322)
	EV(NETMSG_LOAD_GAME_WITH_ADDONS_FAIL, 323)
	EV(NETMSG_CLIENT_GAME_SETTINGS, 325)
	EV(NETMSG_DLC_UPDATE, 329)
	EV(NETMSG_TIMELINE_HANDSHAKE, 330)
	EV(NETMSG_TIMELINE_ACTOR_HANDSHAKE, 331)
	EV(NETMSG_TIMELINE_NODECOMPLETED, 332)
	EV(NETMSG_TIMELINE_JOIN_FINALIZE, 333)
	EV(NETMSG_FORCE_TURN_BASED_TOGGLE_REQUEST, 335)
	EV(NETMSG_SYNC_CONCENTRATION_COMPONENT, 339)
	EV(NETMSG_CHARACTER_REQUEST_WEAPON_SET_SWITCH, 340)
	EV(NETMSG_REQUESTED_ROLL, 336)
	EV(NETMSG_PASSIVE_ROLL_SEQUENCE, 337)
	EV(NETMSG_CHARACTER_PATHING, 338)
	EV(NETMSG_CHARACTER_CREATION_ABORT, 341)
	EV(NETMSG_CHARACTER_CREATION_READY, 342)
	EV(NETMSG_CHARACTER_CREATION_UPDATE, 343)
	EV(NETMSG_LEVEL_UP_UPDATE, 344)
	EV(NETMSG_RESPEC_UPDATE, 345)
	EV(NETMSG_CHARACTER_CREATION_LEVELUP, 346)
	EV(NETMSG_CHARACTER_CREATION_RESPEC, 347)
	EV(NETMSG_UI_INTERACTION_STOPPED, 349)
	EV(NETMSG_PASSIVE_TOGGLE, 350)
	EV(NETMSG_DUALWIELDING_TOGGLE, 351)
	EV(NETMSG_UI_COMBINE_OPEN, 348)
	EV(NETMSG_SNEAKING_CONES_VISIBLE_TOGGLE, 352)
	EV(NETMSG_HOTBAR_SLOT_SET, 353)
	EV(NETMSG_HOTBAR_COLUMN_SET, 354)
	EV(NETMSG_PARTY_PRESET_SAVE, 355)
	EV(NETMSG_PARTY_PRESET_LOAD, 356)
	EV(NETMSG_PARTY_PRESET_LEVELUP, 357)
	EV(NETMSG_PARTY_PRESET_SPELL, 358)

	EV(NETMSG_SCRIPT_EXTENDER, 400)
END_ENUM()

BEGIN_ENUM(StatsFunctorActionId, uint8_t)
	EV(CustomDescription, 0)
	EV(ApplyStatus, 1)
	EV(SurfaceChange, 2)
	EV(Resurrect, 3)
	EV(Sabotage, 4)
	EV(Summon, 5)
	EV(Force, 6)
	EV(Douse, 7)
	EV(SwapPlaces, 8)
	EV(Equalize, 9)
	EV(Pickup, 10)
	EV(CreateSurface, 11)
	EV(CreateConeSurface, 12)
	EV(RemoveStatus, 13)
	EV(DealDamage, 14)
	EV(ExecuteWeaponFunctors, 15)
	EV(RegainHitPoints, 16)
	EV(TeleportSource, 17)
	EV(SetStatusDuration, 18)
	EV(UseSpell, 19)
	EV(UseActionResource, 20)
	EV(UseAttack, 21)
	EV(CreateExplosion, 22)
	EV(BreakConcentration, 23)
	EV(ApplyEquipmentStatus, 24)
	EV(RestoreResource, 25)
	EV(Spawn, 26)
	EV(Stabilize, 27)
	EV(Unlock, 28)
	EV(ResetCombatTurn, 29)
	EV(RemoveAuraByChildStatus, 30)
	EV(Extender, 64)
END_ENUM()

BEGIN_BITMASK(StatsPropertyContext, uint32_t)
	EV(Target, 0x1)
	EV(AOE, 0x2)
	EV(Cast, 0x4)
	EV(Equip, 0x8)
	EV(Ground, 0x10)
	EV(LeaveAttackRange, 0x20)
	EV(AttackedInMeleeRange, 0x40)
	EV(AttackingInMeleeRange, 0x80)
	EV(ProficiencyChanged, 0x100)
	EV(StatusRemovedTimeOut, 0x200)
	EV(StatusRemovedConditions, 0x400)
	EV(StatusRemovedExternal, 0x800)
	EV(MoveStarted, 0x1000)
	EV(AiOnly, 0x2000)
	EV(AiIgnore, 0x4000)
	EV(Attack, 0x8000)
	EV(Attacked, 0x10000)
	EV(Damage, 0x20000)
	EV(Heal, 0x40000)
	EV(StatusRemovedDeath, 0x80000)
	EV(ObscurityChanged, 0x100000)
	EV(ShortRest, 0x200000)
END_ENUM()

BEGIN_BITMASK(StatAttributeFlags, uint64_t)
	EV(SlippingImmunity, 0x1)
	EV(Torch, 0x2)
	EV(Arrow, 0x4)
	EV(Unbreakable, 0x8)
	EV(Unrepairable, 0x10)
	EV(Unstorable, 0x20)
	EV(Grounded, 0x40)
	EV(Floating, 0x80)
	EV(EMPTY, 0x100)
	EV(IgnoreClouds, 0x200)
	EV(LootableWhenEquipped, 0x400)
	EV(PickpocketableWhenEquipped, 0x800)
	EV(LoseDurabilityOnCharacterHit, 0x1000)
	EV(ThrownImmunity, 0x2000)
	EV(InvisibilityImmunity, 0x4000)
	EV(InvulnerableAndInteractive, 0x8000)
	EV(Backstab, 0x10000)
	EV(BackstabImmunity, 0x20000)
	EV(EnableObscurityEvents, 0x40000)
	EV(ObscurityWithoutSneaking, 0x80000)
	EV(FloatingWhileMoving, 0x100000)
END_ENUM()

BEGIN_BITMASK(RequirementType, uint32_t)
	EV(None, 0)
	EV(Level, 1)
	EV(Strength, 2)
	EV(Dexterity, 3)
	EV(Intelligence, 4)
	EV(Constitution, 5)
	EV(Wisdom, 6)
	EV(PainReflection, 8)
	EV(Ranged, 9)
	EV(Reflexes, 10)
	EV(Vitality, 11)
	EV(Sourcery, 12)
	EV(Telekinesis, 13)
	EV(Necromancy, 15)
	EV(Summoning, 16)
	EV(Sneaking, 17)
	EV(Pickpocket, 18)
	EV(Loremaster, 19)
	EV(Barter, 20)
	EV(Charm, 21)
	EV(Intimidate, 22)
	EV(Reason, 23)
	EV(Persuasion, 24)
	EV(Combat, 25)
	EV(TurnBased, 26)
	EV(Immobile, 27)
	EV(Tag, 28)
END_ENUM()


BEGIN_ENUM(SurfaceChange, uint8_t)
	EV(None, 0)
	EV(Ignite, 1)
	EV(Douse, 2)
	EV(Electrify, 3)
	EV(Deelectrify, 4)
	EV(Freeze, 5)
	EV(Melt, 6)
	EV(Vaporize, 7)
	EV(Condense, 8)
END_ENUM()

BEGIN_ENUM(WeaponType, uint8_t)
	EV(None, 0)
	EV(Sword, 1)
	EV(Club, 2)
	EV(Axe, 3)
	EV(Staff, 4)
	EV(Bow, 5)
	EV(Crossbow, 6)
	EV(Spear, 7)
	EV(Knife, 8)
	EV(Wand, 9)
	EV(Arrow, 10)
	EV(Rifle, 11)
	EV(Sentinel, 12)
END_ENUM()

BEGIN_ENUM(DealDamageWeaponType, uint8_t)
	EV(None, 0)
	EV(MainWeapon, 1)
	EV(OffhandWeapon, 2)
	EV(MainMeleeWeapon, 3)
	EV(OffhandMeleeWeapon, 4)
	EV(MainRangedWeapon, 5)
	EV(OffhandRangedWeapon, 6)
	EV(SourceWeapon, 7)
	EV(UnarmedDamage, 8)
	EV(Throw, 9)
END_ENUM()

BEGIN_ENUM(DealDamageWeaponDamageType, uint8_t)
	EV(None, 0)
	EV(MainWeaponDamageType, 1)
	EV(OffhandWeaponDamageType, 2)
	EV(MainMeleeWeaponDamageType, 3)
	EV(OffhandMeleeWeaponDamageType, 4)
	EV(MainRangedWeaponDamageType, 5)
	EV(OffhandRangedWeaponDamageType, 6)
	EV(SourceWeaponDamageType, 7)
END_ENUM()

BEGIN_ENUM(ExecuteWeaponFunctorsType, uint8_t)
	EV(MainHand, 0)
	EV(OffHand, 1)
	EV(BothHands, 2)
	EV(Undefined, 3)
END_ENUM()

BEGIN_ENUM(ForceFunctorOrigin, uint8_t)
	EV(OriginToEntity, 0)
	EV(OriginToTarget, 1)
	EV(TargetToEntity, 2)
	EV(Undefined, 3)
END_ENUM()

BEGIN_ENUM(ForceFunctorAggression, uint8_t)
	EV(Aggressive, 0)
	EV(Friendly, 1)
	EV(Undefined, 2)
END_ENUM()


BEGIN_ENUM(ArmorType, uint32_t)
	EV(None, 0)
	EV(Cloth, 1)
	EV(Padded, 2)
	EV(Leather, 3)
	EV(StuddedLeather, 4)
	EV(Hide, 5)
	EV(ChainShirt, 6)
	EV(ScaleMail, 7)
	EV(BreastPlate, 8)
	EV(HalfPlate, 9)
	EV(RingMail, 10)
	EV(ChainMail, 11)
	EV(Splint, 12)
	EV(Plate, 13)
	EV(Sentinel, 14)
END_ENUM()


BEGIN_ENUM(HandednessType, uint32_t)
	EV(Any, 0)
	EV(One, 1)
	EV(Two, 2)
END_ENUM()

BEGIN_ENUM(EquipmentStatsType, uint32_t)
	EV(Weapon, 0)
	EV(Armor, 1)
	EV(Shield, 2)
END_ENUM()

BEGIN_BITMASK_NS(esv, StatusFlags0, uint8_t)
	EV(KeepAlive, 1)
	EV(IsOnSourceSurface, 2)
	EV(IsFromItem, 4)
	EV(Channeled, 8)
	EV(IsLifeTimeSet, 0x10)
	EV(InitiateCombat, 0x20)
	EV(Influence, 0x80)
END_ENUM_NS()


BEGIN_BITMASK_NS(esv, StatusFlags1, uint8_t)
	EV(BringIntoCombat, 1)
	EV(IsHostileAct, 2)
	EV(IsInvulnerable, 8)
	EV(IsResistingDeath, 0x10)
END_ENUM_NS()


BEGIN_BITMASK_NS(esv, StatusFlags2, uint8_t)
	EV(ForceStatus, 1)
	EV(ForceFailStatus, 2)
	EV(RequestClientSync2, 4)
	EV(RequestClientSync, 8)
	EV(RequestDelete, 0x20)
	EV(RequestDeleteAtTurnEnd, 0x40)
	EV(Started, 0x80)
END_ENUM_NS()


BEGIN_BITMASK_NS(esv, StatusMaterialApplyFlags, uint8_t)
	EV(ApplyOnBody, 1)
	EV(ApplyOnArmor, 2)
	EV(ApplyOnWeapon, 4)
	EV(ApplyOnWings, 8)
	EV(ApplyOnHorns, 0x10)
	EV(ApplyOnOverhead, 0x20)
END_ENUM_NS()


BEGIN_ENUM(StatusType, uint32_t)
	EV(DYING, 1)
	EV(DESTROYING, 2)
	EV(HEAL, 3)
	EV(KNOCKED_DOWN, 4)
	EV(SUMMONING, 5)
	EV(HEALING, 6)
	EV(TELEPORT_FALLING, 7)
	EV(BOOST, 8)
	EV(COMBAT, 9)
	EV(REACTION, 10)
	EV(STORY_FROZEN, 11)
	EV(SNEAKING, 12)
	EV(UNLOCK, 13)
	EV(FEAR, 14)
	EV(SITTING, 15)
	EV(LYING, 16)
	EV(SMELLY, 17)
	EV(CLEAN, 18)
	EV(INFECTIOUS_DISEASED, 19)
	EV(INVISIBLE, 20)
	EV(ROTATE, 21)
	EV(ENCUMBERED, 22)
	EV(IDENTIFY, 23)
	EV(REPAIR, 24)
	EV(MATERIAL, 25)
	EV(WIND_WALKER, 26)
	EV(DECAYING_TOUCH, 27)
	EV(UNHEALABLE, 28)
	EV(SPIRIT_VISION, 29)
	EV(SPIRIT, 30)
	EV(FORCE_MOVE, 31)
	EV(CLIMBING, 32)
	EV(INCAPACITATED, 33)
	EV(INSURFACE, 34)
	EV(POLYMORPHED, 35)
	EV(HEAL_SHARING, 36)
	EV(HEAL_SHARING_CASTER, 37)
	EV(EXTRA_TURN, 38)
	EV(ACTIVE_DEFENSE, 39)
	EV(CONSTRAINED, 40)
	EV(EFFECT, 41)
	EV(DEACTIVATED, 42)
	EV(DOWNED, 43)
END_ENUM()


BEGIN_ENUM(CauseType, uint8_t)
	EV(None, 0)
	EV(SurfaceMove, 1)
	EV(SurfaceCreate, 2)
	EV(SurfaceStatus, 3)
	EV(StatusEnter, 4)
	EV(StatusTick, 5)
	EV(Attack, 6)
	EV(Offhand, 7)
	EV(GM, 8)
END_ENUM()


BEGIN_ENUM(DeathType, uint8_t)
	EV(None, 0)
	EV(Acid, 1)
	EV(Chasm, 2)
	EV(DoT, 3)
	EV(Electrocution, 4)
	EV(Explode, 5)
	EV(Falling, 6)
	EV(Incinerate, 7)
	EV(KnockedDown, 8)
	EV(Lifetime, 9)
	EV(Necrotic, 10)
	EV(Physical, 11)
	EV(Psychic, 12)
	EV(Radiant, 13)
	EV(CinematicDeath, 14)
	EV(Sentinel, 15)
END_ENUM()


BEGIN_ENUM(DamageType, uint8_t)
	EV(None, 0)
	EV(Slashing, 1)
	EV(Piercing, 2)
	EV(Bludgeoning, 3)
	EV(Acid, 4)
	EV(Thunder, 5)
	EV(Necrotic, 6)
	EV(Fire, 7)
	EV(Lightning, 8)
	EV(Cold, 9)
	EV(Psychic, 10)
	EV(Poison, 11)
	EV(Radiant, 12)
	EV(Force, 13)
	EV(Sentinel, 14)
END_ENUM()


BEGIN_ENUM(HitType, uint32_t)
	EV(Melee, 0)
	EV(Magic, 1)
	EV(Ranged, 2)
	EV(WeaponDamage, 3)
	EV(Surface, 4)
	EV(DoT, 5)
	EV(Reflected, 6)
END_ENUM()


BEGIN_ENUM(ItemSlot, uint8_t)
	EV(Helmet, 0)
	EV(Breast, 1)
	EV(Cloak, 2)
	EV(MeleeMainWeapon, 3)
	EV(MeleeOffhandWeapon, 4)
	EV(RangedMainWeapon, 5)
	EV(RangedOffhandWeapon, 6)
	EV(Ring, 7)
	EV(Belt, 8)
	EV(Boots, 9)
	EV(Gloves, 10)
	EV(Amulet, 11)
	EV(Ring2, 12)
	EV(Wings, 13)
	EV(Horns, 14)
	EV(Overhead, 15)
	EV(MainWeapon, 16)
	EV(OffhandWeapon, 17)
	EV(Sentinel, 18)
END_ENUM()


BEGIN_ENUM(ItemSlot32, uint32_t)
	EV(Helmet, 0)
	EV(Breast, 1)
	EV(Cloak, 2)
	EV(MeleeMainWeapon, 3)
	EV(MeleeOffhandWeapon, 4)
	EV(RangedMainWeapon, 5)
	EV(RangedOffhandWeapon, 6)
	EV(Ring, 7)
	EV(Belt, 8)
	EV(Boots, 9)
	EV(Gloves, 10)
	EV(Amulet, 11)
	EV(Ring2, 12)
	EV(Wings, 13)
	EV(Horns, 14)
	EV(Overhead, 15)
	EV(MainWeapon, 16)
	EV(OffhandWeapon, 17)
	EV(Sentinel, 18)
END_ENUM()


BEGIN_BITMASK(StatCharacterFlags, uint8_t)
	EV(IsPlayer, 1)
	EV(InParty, 2)
	EV(IsSneaking, 4)
	EV(Invisible, 8)
	EV(Blind, 16)
	EV(DrinkedPotion, 32)
	EV(EquipmentValidated, 64)
END_ENUM()


BEGIN_BITMASK(HitFlag, uint32_t)
	EV(Hit, 1)
	EV(Blocked, 2)
	EV(Dodged, 4)
	EV(Missed, 8)
	EV(CriticalHit, 0x10)
	EV(Backstab, 0x20)
	EV(FromSetHP, 0x40)
	EV(DontCreateBloodSurface, 0x80)
	EV(Reflection, 0x200)
	EV(NoDamageOnOwner, 0x400)
	EV(FromShacklesOfPain, 0x800)
	EV(DamagedMagicArmor, 0x1000)
	EV(DamagedPhysicalArmor, 0x2000)
	EV(DamagedVitality, 0x4000)
	EV(Flanking, 0x8000)
	EV(PropagatedFromOwner, 0x10000)
	EV(Surface, 0x20000)
	EV(DoT, 0x40000)
	EV(ProcWindWalker, 0x80000)
	EV(CounterAttack, 0x100000)
	EV(Poisoned, 0x200000)
	EV(Burning, 0x400000)
	EV(Bleeding, 0x800000)
	// Custom flags
	EV(NoEvents, 0x80000000)
END_ENUM()


BEGIN_ENUM(StatusHealType, uint8_t)
	EV(None, 0)
	EV(Vitality, 1)
	EV(PhysicalArmor, 2)
	EV(MagicArmor, 3)
	EV(AllArmor, 4)
	EV(All, 5)
	EV(Source, 6)
END_ENUM()


BEGIN_ENUM(HealEffect, uint32_t)
	EV(None, 0)
	EV(ResistDeath, 1)
	EV(Heal, 2)
	EV(Behavior, 3)
	EV(Unknown4, 4)
	EV(Sitting, 5)
	EV(Surface, 6)
	EV(Lifesteal, 7)
	EV(NegativeDamage, 8)
	EV(Unknown9, 9)
	EV(Script, 10)
	EV(HealSharing, 11)
	EV(Necromantic, 12)
	EV(HealSharingReflected, 13)
END_ENUM()


// Persistent flags: 0x2414170022110
// AI flags: 0x4000070000060
BEGIN_BITMASK_NS(esv, CharacterFlags, uint64_t)
	EV(IsPlayer, 0x01)
	EV(Multiplayer, 0x02)
	EV(InParty, 0x04)
	EV(HostControl, 0x08)
	EV(Activated, 0x10)
	EV(OffStage, 0x20)
	EV(Dead, 0x40)
	EV(HasOwner, 0x80)
	EV(InDialog, 0x100)
	EV(Summon, 0x200)
	EV(CannotDie, 0x800)
	EV(CharacterControl, 0x2000)
	EV(Loaded, 0x4000)
	EV(InArena, 0x10000)
	EV(CharacterCreationFinished, 0x200000)
	EV(Floating, 0x400000)
	EV(SpotSneakers, 0x1000000)
	EV(Temporary, 0x2000000)
	EV(WalkThrough, 0x10000000)
	EV(CoverAmount, 0x20000000)
	EV(CanShootThrough, 0x40000000)
	EV(PartyFollower, 0x400000000)
	EV(Totem, 0x2000000000)
	EV(NoRotate, 0x8000000000)
	EV(Deactivated, 0x80000000000)
	EV(IsHuge, 0x200000000000)
	EV(MadePlayer, 0x1000000000000)
	EV(LevelTransitionPending, 0x20000000000000)
	EV(RegisteredForAutomatedDialog, 0x40000000000000)
END_ENUM_NS()


BEGIN_BITMASK_NS(esv, CharacterFlags2, uint8_t)
	EV(Global, 0x01)
	EV(HasOsirisDialog, 0x02)
	EV(HasDefaultDialog, 0x04)
	EV(TreasureGeneratedForTrader, 0x10)
	EV(Trader, 0x20)
	EV(Resurrected, 0x40)
END_ENUM_NS()


BEGIN_BITMASK_NS(esv, CharacterFlags3, uint8_t)
	EV(IsPet, 0x01)
	EV(IsSpectating, 0x02)
	EV(NoReptuationEffects, 0x04)
	EV(HasWalkSpeedOverride, 0x08)
	EV(HasRunSpeedOverride, 0x10)
	EV(IsGameMaster, 0x20)
	EV(IsPossessed, 0x40)
	EV(ManuallyLeveled, 0x80)
END_ENUM_NS()

BEGIN_BITMASK_NS(esv, ItemFlags, uint64_t)
	EV(Activated, 0x01)
	EV(OffStage, 0x02)
	EV(CanBePickedUp, 0x04)
	EV(CanBeMoved, 0x08)
	EV(WalkOn, 0x10)
	EV(WalkThrough, 0x20)
	EV(NoCover, 0x40)
	EV(CanShootThrough, 0x80)
	EV(CanUse, 0x100)
	EV(InteractionDisabled, 0x200)
	EV(Destroyed, 0x800)
	EV(LoadedTemplate, 0x4000)
	EV(IsDoor, 0x8000)
	EV(StoryItem, 0x20000)
	EV(Summon, 0x100000)
	EV(FreezeGravity, 0x1000000)
	EV(ForceSync, 0x2000000)
	EV(IsLadder, 0x20000000)
	EV(PositionChanged, 0x400000000)
	EV(Totem, 0x800000000)
	EV(Destroy, 0x2000000000)
	EV(GMFolding, 0x4000000000)
	EV(Sticky, 0x10000000000)
	EV(DoorFlag, 0x20000000000)
	EV(Floating, 0x40000000000)
	EV(IsSurfaceBlocker, 0x80000000000)
	EV(IsSurfaceCloudBlocker, 0x100000000000)
	EV(SourceContainer, 0x1000000000000)
	EV(Frozen, 0x2000000000000)
	EV(TeleportOnUse, 8000000000000)
	EV(PinnedContainer, 0x20000000000000)
END_ENUM_NS()

BEGIN_BITMASK_NS(esv, ItemFlags2, uint8_t)
	EV(UnsoldGenerated, 0x01)
	EV(IsKey, 0x02)
	EV(Global, 0x04)
	EV(CanConsume, 0x08)
	EV(TreasureGenerated, 0x10)
	EV(UnEquipLocked, 0x20)
	EV(UseRemotely, 0x40)
END_ENUM_NS()

BEGIN_BITMASK(AIFlags, uint8_t)
	EV(CanNotUse, 0x01)
	EV(IgnoreSelf, 0x02)
	EV(IgnoreDebuff, 0x04)
	EV(IgnoreBuff, 0x08)
	EV(StatusIsSecondary, 0x10)
	EV(IgnoreControl, 0x20)
	EV(CanNotTargetFrozen, 0x40)
END_ENUM()

BEGIN_ENUM(IngredientType, int)
	EV(None, 0)
	EV(Object, 1)
	EV(Category, 2)
	EV(Property, 3)
END_ENUM()

BEGIN_ENUM(IngredientTransformType, int)
	EV(None, 0)
	EV(Consume, 1)
	EV(Transform, 2)
	EV(Boost, 3)
	EV(Poison, 4)
END_ENUM()

BEGIN_ENUM(ItemDataRarity, uint8_t)
	EV(Common, 0)
	EV(Unique, 1)
	EV(Uncommon, 2)
	EV(Rare, 3)
	EV(Epic, 4)
	EV(Legendary, 5)
	EV(Divine, 6)
	EV(Sentinel, 7)
END_ENUM()

BEGIN_ENUM(RecipeCategory, int)
	EV(Common, 0)
	EV(Weapons, 1)
	EV(Potions, 2)
	EV(Grenades, 3)
	EV(Arrows, 4)
	EV(Armour, 5)
	EV(Food, 6)
	EV(Objects, 7)
	EV(Runes, 8)
	EV(Grimoire, 9)
END_ENUM()

BEGIN_ENUM(CraftingStationType, int)
	EV(None, 0)
	EV(Anvil, 1)
	EV(Oven, 2)
	EV(Wetstone, 3)
	EV(Well, 4)
	EV(BoilingPot, 5)
	EV(Beehive, 6)
	EV(SpinningWheel, 7)
	EV(Cauldron, 8)
	EV(Misc1, 9)
	EV(Misc2, 10)
	EV(Misc3, 11)
	EV(Misc4, 12)
END_ENUM()

BEGIN_ENUM(ShroudType, uint8_t)
	EV(Shroud, 0)
	EV(Sight, 1)
	EV(Sneak, 2)
	EV(RegionMask, 3)
END_ENUM()

BEGIN_ENUM(BoostType, uint8_t)
	EV(AC, 0x0)
	EV(Ability, 0x1)
	EV(RollBonus, 0x2)
	EV(Advantage, 0x3)
	EV(ActionResource, 0x4)
	EV(CriticalHit, 0x5)
	EV(AbilityFailedSavingThrow, 0x6)
	EV(Resistance, 0x7)
	EV(WeaponDamageResistance, 0x8)
	EV(ProficiencyBonusOverride, 0x9)
	EV(ActionResourceOverride, 0xA)
	EV(AddProficiencyToAC, 0xB)
	EV(JumpMaxDistanceMultiplier, 0xC)
	EV(AddProficiencyToDamage, 0xD)
	EV(ActionResourceConsumeMultiplier, 0xE)
	EV(BlockVerbalComponent, 0xF)
	EV(BlockSomaticComponent, 0x10)
	EV(HalveWeaponDamage, 0x11)
	EV(UnlockSpell, 0x13)
	EV(SourceAdvantageOnAttack, 0x14)
	EV(ProficiencyBonus, 0x15)
	EV(BlockSpellCast, 0x16)
	EV(Proficiency, 0x17)
	EV(SourceAllyAdvantageOnAttack, 0x18)
	EV(IncreaseMaxHP, 0x19)
	EV(ActionResourceBlock, 0x1A)
	EV(StatusImmunity, 0x1B)
	EV(UseBoosts, 0x1C)
	EV(CannotHarmCauseEntity, 0x1D)
	EV(TemporaryHP, 0x1E)
	EV(Weight, 0x1F)
	EV(FactionOverride, 0x20)
	EV(ActionResourceMultiplier, 0x21)
	EV(BlockRegainHP, 0x22)
	EV(Initiative, 0x23)
	EV(DarkvisionRange, 0x24)
	EV(DarkvisionRangeMin, 0x25)
	EV(DarkvisionRangeOverride, 0x26)
	EV(Tag, 0x27)
	EV(IgnoreDamageThreshold, 0x28)
	EV(Skill, 0x29)
	EV(WeaponDamage, 0x2A)
	EV(NullifyAbilityScore, 0x2B)
	EV(IgnoreFallDamage, 0x2C)
	EV(Reroll, 0x2D)
	EV(DownedStatus, 0x2E)
	EV(Invulnerable, 0x2F)
	EV(WeaponEnchantment, 0x30)
	EV(GuaranteedChanceRollOutcome, 0x31)
	EV(Attribute, 0x32)
	EV(IgnoreLeaveAttackRange, 0x33)
	EV(GameplayLight, 0x34)
	EV(DialogueBlock, 0x35)
	EV(DualWielding, 0x36)
	EV(Savant, 0x37)
	EV(MinimumRollResult, 0x38)
	EV(Lootable, 0x39)
	EV(CharacterWeaponDamage, 0x3A)
	EV(ProjectileDeflect, 0x3B)
	EV(AbilityOverrideMinimum, 0x3C)
	EV(ACOverrideMinimum, 0x3D)
	EV(FallDamageMultiplier, 0x3E)
END_ENUM()

BEGIN_ENUM(GameActionType, int)
	EV(RainAction, 1)
	EV(StormAction, 2)
	EV(WallAction, 4)
	EV(TornadoAction, 6)
	EV(PathAction, 7)
	EV(GameObjectMoveAction, 8)
	EV(StatusDomeAction, 9)
END_ENUM()

BEGIN_ENUM(SkillType, uint32_t)
	EV(Zone, 0x1)
	EV(MultiStrike, 0x2)
	EV(Path, 0x3)
	EV(Projectile, 0x4)
	EV(ProjectileStrike, 0x5)
	EV(Rain, 0x6)
	EV(Rush, 0x7)
	EV(Shout, 0x8)
	EV(Storm, 0x9)
	EV(Target, 0xA)
	EV(Teleportation, 0xB)
	EV(Tornado, 0xC)
	EV(Wall, 0xD)
	EV(Dome, 0xE)
	EV(Throw, 0xF)
END_ENUM()


BEGIN_ENUM(SurfaceType, uint32_t)
	EV(None, 0)
	EV(Water, 1)
	EV(WaterElectrified, 2)
	EV(WaterFrozen, 3)
	EV(Blood, 4)
	EV(BloodElectrified, 5)
	EV(BloodFrozen, 6)
	EV(Poison, 7)
	EV(Oil, 8)
	EV(Lava, 9)
	EV(Grease, 10)
	EV(GreaseFrozen, 11)
	EV(Web, 12)
	EV(Deepwater, 13)
	EV(Vines, 14)
	EV(Fire, 15)
	EV(Acid, 16)
	EV(RockSpikes, 17)
	EV(BlackPowder, 18)
	EV(BlackRain, 19)
	EV(AlienOil, 20)
	EV(Mud, 21)
	EV(Alcohol, 22)
	EV(InvisibleWeb, 23)
	EV(BloodSilver, 24)
	EV(Chasm, 25)
	EV(CausticBrine, 27)
	EV(DeepWaterRunning, 28)
	EV(Ash, 29)
	EV(WaterCloud, 30)
	EV(WaterCloudElectrified, 31)
	EV(PoisonCloud, 32)
	EV(ExplosionCloud, 33)
	EV(ShockwaveCloud, 34)
	EV(DaggersCloud, 35)
	EV(DaggersCloudElectrified, 36)
	EV(BloodCloud, 37)
	EV(StinkingCloud, 38)
	EV(DarknessCloud, 39)
	EV(FogCloud, 40)
	EV(ConfusionCloud, 41)
	EV(SporeWhiteCloud, 42)
	EV(SporeGreenCloud, 43)
	EV(SporeBlackCloud, 44)
	EV(PotionAnimalSpeakingCloud, 45)
	EV(PotionHillGiantStrengthCloud, 46)
	EV(PotionHealingCloud, 47)
	EV(PotionHealingGreaterCloud, 48)
	EV(PotionHealingSuperiorCloud, 49)
	EV(PotionHealingSupremeCloud, 50)
	EV(PotionInvisibilityCloud, 51)
	EV(PotionSpeedCloud, 52)
	EV(PotionVitalityCloud, 53)
	EV(PotionAntitoxinCloud, 54)
	EV(PotionResistanceAcidCloud, 55)
	EV(PotionResistanceColdCloud, 56)
	EV(PotionResistanceFireCloud, 57)
	EV(PotionResistanceForceCloud, 58)
	EV(PotionResistanceLightningCloud, 59)
	EV(PotionResistancePoisonCloud, 60)
	EV(SporePinkCloud, 61)
	EV(Sentinel, 62)
END_ENUM()


BEGIN_ENUM(SurfaceLayer, uint32_t)
	EV(Ground, 0)
	EV(Cloud, 1)
	EV(None, 2)
END_ENUM()


BEGIN_ENUM(SurfaceActionType, uint32_t)
	EV(CreateSurfaceAction, 1)
	EV(CreatePuddleAction, 2)
	EV(ExtinguishFireAction, 3)
	EV(ZoneAction, 4)
	EV(TransformSurfaceAction, 5)
	EV(ChangeSurfaceOnPathAction, 6)
	EV(RectangleSurfaceAction, 7)
	EV(PolygonSurfaceAction, 8)
	EV(SwapSurfaceAction, 9)
END_ENUM()


BEGIN_ENUM(SurfaceTransformActionType, uint32_t)
	E(None)
	E(Ignite)
	E(Douse)
	E(Electrify)
	E(Deelectrify)
	E(Freeze)
	E(Melt)
	E(Vaporize)
	E(Condense)
END_ENUM()


BEGIN_BITMASK(ESurfaceFlag, uint64_t)
	// AI grid painted flags
	EV(MovementBlock, 0x1)
	EV(ProjectileBlock, 0x4)

	// Guessed flags
	EV(HasCharacter, 0x10)
	EV(HasItem, 0x80)
	EV(HasInteractableObject, 0x100)
	EV(GroundSurfaceBlock, 0x200)
	EV(CloudSurfaceBlock, 0x400)
	EV(Occupied, 0x1000)
	EV(SurfaceExclude, 0x10000)

	// --- BASE TYPE START
	EV(Fire, 0x1000000)
	EV(Water, 0x2000000)
	EV(Blood, 0x4000000)
	EV(Poison, 0x8000000)
	EV(Oil, 0x10000000)
	EV(Lava, 0x20000000)
	EV(Source, 0x40000000)
	EV(Web, 0x80000000)
	EV(Deepwater, 0x100000000)
	EV(Sulfurium, 0x200000000)
	// UNUSED = 0x400000000
	// --- BASE TYPE END


	// --- CLOUD TYPE START
	EV(FireCloud, 0x800000000)
	EV(WaterCloud, 0x1000000000)
	EV(BloodCloud, 0x2000000000)
	EV(PoisonCloud, 0x4000000000)
	EV(SmokeCloud, 0x8000000000)
	EV(ExplosionCloud, 0x10000000000)
	EV(FrostCloud, 0x20000000000)
	EV(Deathfog, 0x40000000000)
	EV(ShockwaveCloud, 0x80000000000)
	// UNUSED = 0x100000000000
	// UNUSED = 0x200000000000
	// --- CLOUD TYPE END

	EV(Blessed, 0x400000000000)
	EV(Cursed, 0x800000000000)
	EV(Purified, 0x1000000000000)
	// ??? = 0x2000000000000

	// --- SURFACE ADJ START
	EV(CloudBlessed, 0x4000000000000)
	EV(CloudCursed, 0x8000000000000)
	EV(CloudPurified, 0x10000000000000)
	// UNUSED = 0x20000000000000
	// --- SURFACE ADJ END

	// --- GROUND MOD START
	EV(Electrified, 0x40000000000000)
	EV(Frozen, 0x80000000000000)
	EV(CloudElectrified, 0x100000000000000)
	// --- GROUND MOD END

	// --- CLOUD MOD START
	EV(ElectrifiedDecay, 0x200000000000000)
	EV(SomeDecay, 0x400000000000000)
	// UNUSED = 0x800000000000000
	// --- CLOUD MOD END

	// AI grid painted flags
	EV(Irreplaceable, 0x4000000000000000)
	EV(IrreplaceableCloud, 0x800000000000000)
END_ENUM()
