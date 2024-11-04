BEGIN_ENUM(LuaTypeId, uint32_t)
	EV(Unknown, 0)
	EV(Void, 1)
	EV(Boolean, 2)
	EV(Integer, 3)
	EV(Float, 4)
	EV(String, 5)
	EV(Object, 6)
	EV(Array, 7)
	EV(Set, 8)
	EV(Map, 9)
	EV(Tuple, 10)
	EV(Enumeration, 11)
	EV(Function, 12)
	EV(Any, 13)
	EV(Nullable, 14)
	EV(Module, 15)
	EV(Variant, 16)
END_ENUM()

BEGIN_ENUM(PathRootType, int)
	EV(Root, 0)
	EV(Data, 1)
	EV(Public, 2)
	EV(LocalAppData, 3)
	EV(UserProfile, 4)
	EV(Localization, 5)
	EV(Bin, 6)
	EV(Bin2, 7)
	EV(Mods, 8)
	EV(Projects, 9)
	EV(Public2, 10)
	EV(GameMod, 11)
	EV(EngineMod, 12)
	EV(Scripts, 13)
	EV(WorkingDir, 14)
	EV(Debug, 15)
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

BEGIN_ENUM_NS(ecl, GameState, ClientGameState, uint32_t)
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
	E(UnloadLevel)
	E(UnloadModule)
	E(UnloadSession)
	E(Paused)
	E(PrepareRunning)
	E(Running)
	E(Disconnect)
	EV(Join, 20)
	E(Save)
	E(StartLoading)
	E(StopLoading)
	E(StartServer)
	E(Movie)
	E(Installation)
	E(ModReceiving)
	E(Lobby)
	E(BuildStory)
	EV(GeneratePsoCache, 32)
	E(LoadPsoCache)
	E(AnalyticsSessionEnd)
END_ENUM_NS()


BEGIN_ENUM_NS(esv, GameState, ServerGameState, uint32_t)
	EV(Unknown, 0)
	E(Uninitialized)
	E(Init)
	E(Idle)
	E(Exit)
	E(LoadLevel)
	E(LoadModule)
	E(LoadSession)
	E(UnloadLevel)
	E(UnloadModule)
	EV(UnloadSession, 10)
	E(Sync)
	E(Paused)
	E(Running)
	E(Save)
	E(Disconnect)
	E(BuildStory)
	E(ReloadStory)
END_ENUM_NS()


BEGIN_ENUM(ResourceBankType, uint32_t)
	EV(Visual, 0)
	EV(VisualSet, 1)
	EV(Animation, 2)
	EV(AnimationSet, 3)
	EV(Texture, 4)
	EV(Material, 5)
	EV(Physics, 6)
	EV(Effect, 7)
	EV(Script, 8)
	EV(Sound, 9)
	EV(Lighting, 10)
	EV(Atmosphere, 11)
	EV(AnimationBlueprint, 12)
	EV(MeshProxy, 13)
	EV(MaterialSet, 14)
	EV(BlendSpace, 15)
	EV(FCurve, 16)
	EV(Timeline, 17)
	EV(Dialog, 18)
	EV(VoiceBark, 19)
	EV(TileSet, 20)
	EV(IKRig, 21)
	EV(Skeleton, 22)
	EV(VirtualTexture, 23)
	EV(TerrainBrush, 24)
	EV(ColorList, 25)
	EV(CharacterVisual, 26)
	EV(MaterialPreset, 27)
	EV(SkinPreset, 28)
	EV(ClothCollider, 29)
	EV(DiffusionProfile, 30)
	EV(LightCookie, 31)
	EV(TimelineScene, 32)
	EV(SkeletonMirrorTable, 33)
	EV(Sentinel, 34)
END_ENUM()


BEGIN_BITMASK(AnimationSetAnimationFlags, uint8_t)
	EV(AlwaysIgnore, 1)
	EV(NoFallback, 2)
END_ENUM()

BEGIN_ENUM(TextKeyType, uint8_t)
	EV(Sound, 1)
	EV(Effect, 2)
	EV(FootStep, 3)
	EV(Attach, 4)
	EV(WeaponEffect, 6)
	EV(Genome, 7)
	EV(Attack, 8)
	EV(Ragdoll, 9)
	EV(VisualCullFlag, 10)
	EV(FloatData, 11)
	EV(Foley, 12)
	EV(Vocal, 13)
	EV(FootMove, 14)
	EV(React, 15)
END_ENUM()

BEGIN_ENUM_NS(aspk, PropertyType, EffectPropertyType, uint8_t)
	EV(Boolean, 0)
	EV(Integer, 1)
	EV(IntegerRange, 2)
	EV(ColorARGBKeyFrame, 3)
	EV(Float, 4)
	EV(FloatRange, 5)
	EV(FloatKeyFrame, 6)
	EV(String, 7)
	EV(Vector3, 8)
	EV(FixedFunction, 9)
	EV(FixedString, 10)
	EV(Base, 11)
END_ENUM_NS()

BEGIN_BITMASK(AppliedMaterialFlags, uint8_t)
	EV(Instantiated, 1)
	EV(IsOverlay, 2)
	EV(OverlayOriginalMapsSet, 4)
END_ENUM()

BEGIN_ENUM(AIBoundType, uint8_t)
	EV(Move, 0)
	EV(Hit, 1)
	EV(Stand, 2)
END_ENUM()

BEGIN_ENUM(AIShapeType, uint8_t)
	EV(None, 0)
	EV(Box, 1)
	EV(Cylinder, 2)
END_ENUM()

BEGIN_ENUM(OsiFunctionType, uint8_t)
	EV(Call, 0)
	EV(Query, 1)
	EV(Event, 2)
	EV(DB, 3)
	EV(Proc, 4)
END_ENUM()

BEGIN_BITMASK(DialogNodeFlags, uint16_t)
	EV(IsEndNode, 0x1)
	EV(IsOptional, 0x2)
	EV(IsExclusive, 0x4)
	EV(ShowOnlyOnce, 0x8)
	EV(IsGameplayNode, 0x10)
	EV(IsRootNode, 0x20)
	EV(SuppressSubtitle, 0x40)
	EV(IsGreetingNode, 0x80)
	EV(AllowGrouping, 0x100)
	EV(IsEndAllDialogs, 0x200)
END_ENUM()

BEGIN_BITMASK(VisualFlags, uint32_t)
	EV(CastShadow, 0x1)
	EV(ReceiveDecal, 0x2)
	EV(Reflecting, 0x4)
	EV(DisableLOD, 0x8)
	EV(DisableCulling, 0x10)
	EV(IsWall, 0x20)
	EV(IsShadowProxy, 0x40)
	EV(AllowReceiveDecalWhenAnimated, 0x80)
	EV(IsEffect, 0x100)
	EV(Unknown200, 0x200)
	EV(IsScenery, 0x400)
	EV(PlayingAttachedEffects, 0x800)
	EV(ShowMesh, 0x1000)
	EV(HasSkeleton, 0x2000)
	EV(ReceiveColorFromParent, 0x4000)
	EV(AllowTPose, 0x8000)
	EV(HasBlueprint, 0x10000)
	EV(SeeThrough, 0x20000)
	EV(PreparedDestroyed, 0x40000000)
	EV(PreparedDestroyed2, 0x40000000)
END_ENUM()

BEGIN_BITMASK(VisualCullFlags, uint16_t)
	EV(CullNonProxy, 0x02)
	EV(CullShadow, 0x04)
	EV(CullShadow2, 0x08)
	EV(CullShadow3, 0x10)
	EV(CullDecal, 0x80)
	EV(CullRenderView1, 0x200)
	EV(CullRenderView2, 0x400)
	EV(CullScenery, 0x800)
	EV(CullShadowProxy, 0x4000)
	EV(CullShadow4, 0x8000)
END_ENUM()

BEGIN_BITMASK(VisualAttachmentFlags, uint32_t)
	EV(ExcludeFromBounds, 0x01)
	EV(KeepRot, 0x04)
	EV(KeepScale, 0x08)
	EV(UseLocalTransform, 0x10)
	EV(InheritAnimations, 0x20)
	EV(VisualSet, 0x40)
	EV(SupportsVertexColorMask, 0x80)
	EV(Hair, 0x100)
	EV(EffectComponent_M, 0x200)
	EV(TextKeyEffect_M, 0x400)
	EV(DoNotUpdate, 0x800)
	EV(ParticleSystem, 0x1000)
	EV(HasSkeleton, 0x2000)
	EV(DestroyWithParent, 0x8000)
END_ENUM()

BEGIN_BITMASK(VisualObjectType, uint8_t)
	EV(Type01, 0x01)
	EV(Type02, 0x02)
	EV(Type04, 0x04)
	EV(Beard, 0x08)
	EV(Ears, 0x10)
	EV(Head, 0x20)
	EV(Horns, 0x40)
END_ENUM()

BEGIN_BITMASK(EffectFlags, uint16_t)
	EV(Forget, 0x1)
	EV(Pooled, 0x2)
	EV(Active, 0x4)
	EV(FullyInitialized, 0x8)
	EV(Playing, 0x10)
	EV(Stopped, 0x20)
	EV(FullyInitialized2, 0x200)
	EV(Interrupted, 0x400)
END_ENUM()

BEGIN_ENUM(StatsExpressionType, uint8_t)
	EV(Roll, 0)
	EV(Add, 1)
	EV(Subtract, 2)
	EV(Divide, 3)
	EV(Multiply, 4)
	EV(Max, 5)
	EV(ForEach, 6)
	EV(Placeholder, 7)
	EV(ResourceRoll, 8)
	EV(Variable, 9)
	EV(Negate, 10)
END_ENUM()

BEGIN_ENUM(StatsContextType, uint8_t)
	EV(Unspecified, 0)
	EV(Target, 1)
	EV(Owner, 2)
	EV(Cause, 3)
END_ENUM()

BEGIN_ENUM(StatsExpressionVariableData, uint8_t)
	EV(SpellCastingAbility, 0)
	EV(ProficiencyBonus, 1)
	EV(Level, 2)
	EV(SpellDC, 3)
	EV(WeaponActionDC, 4)
	EV(UnarmedMeleeAbility, 5)
	EV(CurrentHP, 6)
	EV(MaxHP, 7)
	EV(SpellPowerLevel, 8)
	EV(TadpolePowersCount, 9)
	EV(DamageDone, 10)
	EV(Sentinel, 11)
END_ENUM()

BEGIN_ENUM(StatsExpressionVariableDataType, uint8_t)
	EV(AbilityOverride, 0)
	EV(SavingThrow, 1)
	EV(StatusDuration, 2)
	EV(StatusStacks, 3)
	EV(CharacterData, 4)
	EV(LevelMapValue, 5)
	EV(ClassLevel, 6)
END_ENUM()

BEGIN_BITMASK(StatsExpressionVariableDataModifier, uint8_t)
	EV(Modifier, 1)
	EV(Flat, 2)
	EV(SavingThrow, 4)
	EV(DialogueCheck, 8)
	EV(Advantage, 0x10)
	EV(Disadvantage, 0x20)
END_ENUM()
