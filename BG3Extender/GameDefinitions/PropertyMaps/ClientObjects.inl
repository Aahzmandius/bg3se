BEGIN_CLS(ecl::PlayerCustomData)
P(PickpocketTarget)
P(LootTarget)
P(ArmorOptionState)
P(CachedTension)
P(QuestSelected)
P(MemorizedSpells)
END_CLS()


BEGIN_CLS(ecl::StatusMachine)
P(Statuses)
END_CLS()


BEGIN_CLS(ecl::Character)
INHERIT(BaseComponent)
P(Entity)

P(Flags)
P_BITMASK(Flags)
P_RO(Level)

P(SurfacePathInfluences)
P(Template)
P(OriginalTemplate)
P(StatusManager)
P(PlayerData)
P(ClothVisual)
P(Owner)
P(InUseByCharacter)
P(ObscurementIndicationEffect)
P(FollowCharacter)
P(DialogEffect)
P(Light)
P(OwnerUserID)
P(ReservedUserID)
P(LastTick)
P(SneakCheck)
P(Flags2)
P_BITMASK(Flags2)
P(Flags3)
P_BITMASK(Flags3)
P(field_120)
P(field_130)
P(OffstageVisibilityVisualLoaded)
P(IsInvisible)
END_CLS()
