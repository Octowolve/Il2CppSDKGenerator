#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ModeMatching {

class PVPModePlayerListView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ModeMatching", "PVPModePlayerListView"));
	}

	template <typename T = uintptr_t> T& animator() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& m_shootoutRoot() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& m_FFARoot() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& m_NormalRoot() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& m_1V1Root() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& m_2V2Root() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& SingleRoot() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& SameCampRoot() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& FXRootAnimator() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& m_GuarderContainer() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& m_TraitorContainer() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& m_BackgroundSprite() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& LeftPlayers() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& RightPlayers() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& AllPlayes() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& ShootoutPlayes() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& Left1V1Players() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& Right1V1Players() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& Left2V2Players() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& Right2V2Players() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& SinglePlayers() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> T& m_SelfItem() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& SameCampPlayers() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = uintptr_t> T& m_LabelTitle() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& m_LabelSubTitle() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = uintptr_t> T& m_MapIcon() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& VNG_18() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = uintptr_t> T& Fx() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& mapInfoRoot() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = uintptr_t> T& minimapTexture() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& mapDescLabel() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& FlagPointList() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = Il2CppVector3> T& SinglePlayerMapInfoPosOffset() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetMapName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetModeName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetMapIcon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowRoot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetFFAPlayersData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetShootoutPlayerData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLeftPlayersData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRightPlayersData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLeft1V1PlayersData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRight1V1PlayersData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLeft2V2PlayersData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRight2V2PlayersData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSinglePlayersData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSinglePlayersMapInfoPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSameCampPlayersData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPlayersData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSelfItemProgress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}

	template <typename T = void> T SetMapName(Il2CppString* text) {
		return ((T (*)(PVPModePlayerListView*, Il2CppString*))(Il2CppBase() + 0x3304E74))(this, text);
	}
	template <typename T = void> T SetModeName(Il2CppString* text) {
		return ((T (*)(PVPModePlayerListView*, Il2CppString*))(Il2CppBase() + 0x3304F68))(this, text);
	}
	template <typename T = void> T SetMapIcon(Il2CppString* icon) {
		return ((T (*)(PVPModePlayerListView*, Il2CppString*))(Il2CppBase() + 0x3304D2C))(this, icon);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(PVPModePlayerListView*))(Il2CppBase() + 0x330B398))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(PVPModePlayerListView*))(Il2CppBase() + 0x330B440))(this);
	}
	template <typename T = void> T ShowRoot(bool IsTrain, bool SameCamp, bool IsSingle, bool Is1V1, bool Is2V2, bool IsCommonPVP, bool Is3v3) {
		return ((T (*)(PVPModePlayerListView*, bool, bool, bool, bool, bool, bool, bool))(Il2CppBase() + 0x3306F1C))(this, IsTrain, SameCamp, IsSingle, Is1V1, Is2V2, IsCommonPVP, Is3v3);
	}
	template <typename T = void> T SetFFAPlayersData(Il2CppList<uintptr_t>* matchPlayerInfos) {
		return ((T (*)(PVPModePlayerListView*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x3307438))(this, matchPlayerInfos);
	}
	template <typename T = void> T SetShootoutPlayerData(Il2CppList<uintptr_t>* matchPlayerInfos) {
		return ((T (*)(PVPModePlayerListView*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x33074EC))(this, matchPlayerInfos);
	}
	template <typename T = void> T SetLeftPlayersData(Il2CppList<uintptr_t>* matchPlayerInfos) {
		return ((T (*)(PVPModePlayerListView*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x3307870))(this, matchPlayerInfos);
	}
	template <typename T = void> T SetRightPlayersData(Il2CppList<uintptr_t>* matchPlayerInfos) {
		return ((T (*)(PVPModePlayerListView*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x3307924))(this, matchPlayerInfos);
	}
	template <typename T = void> T SetLeft1V1PlayersData(Il2CppList<uintptr_t>* matchPlayerInfos) {
		return ((T (*)(PVPModePlayerListView*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x33075A0))(this, matchPlayerInfos);
	}
	template <typename T = void> T SetRight1V1PlayersData(Il2CppList<uintptr_t>* matchPlayerInfos) {
		return ((T (*)(PVPModePlayerListView*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x3307654))(this, matchPlayerInfos);
	}
	template <typename T = void> T SetLeft2V2PlayersData(Il2CppList<uintptr_t>* matchPlayerInfos) {
		return ((T (*)(PVPModePlayerListView*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x3307708))(this, matchPlayerInfos);
	}
	template <typename T = void> T SetRight2V2PlayersData(Il2CppList<uintptr_t>* matchPlayerInfos) {
		return ((T (*)(PVPModePlayerListView*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x33077BC))(this, matchPlayerInfos);
	}
	template <typename T = void> T SetSinglePlayersData(Il2CppList<uintptr_t>* matchPlayerInfos) {
		return ((T (*)(PVPModePlayerListView*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x33072D0))(this, matchPlayerInfos);
	}
	template <typename T = void> T SetSinglePlayersMapInfoPos() {
		return ((T (*)(PVPModePlayerListView*))(Il2CppBase() + 0x330C3B0))(this);
	}
	template <typename T = void> T SetSameCampPlayersData(Il2CppList<uintptr_t>* matchPlayerInfos) {
		return ((T (*)(PVPModePlayerListView*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x3307384))(this, matchPlayerInfos);
	}
	template <typename T = void> T SetPlayersData(Il2CppList<uintptr_t>* matchPlayerInfos, uintptr_t viewList) {
		return ((T (*)(PVPModePlayerListView*, Il2CppList<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x330B5D4))(this, matchPlayerInfos, viewList);
	}
	template <typename T = void> T SetSelfItemProgress(float progress, bool showPercent) {
		return ((T (*)(PVPModePlayerListView*, float, bool))(Il2CppBase() + 0x3305860))(this, progress, showPercent);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(PVPModePlayerListView*))(Il2CppBase() + 0x330C700))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(PVPModePlayerListView*))(Il2CppBase() + 0x330C708))(this);
	}

};

}
