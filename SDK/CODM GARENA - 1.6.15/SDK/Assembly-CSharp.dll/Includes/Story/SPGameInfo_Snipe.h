#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Story {

class SPGameInfoSnipe
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Story", "SPGameInfo_Snipe"));
	}

	template <typename T = float> T& m_TotalTime() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = bool> T& m_IsFirstTick() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRadarCompAssetIDList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckEndGame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStartMatch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPrepareModeInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = int32_t> T get_TotalTime() {
		return ((T (*)(SPGameInfoSnipe*))(Il2CppBase() + 0x3F13FF0))(this);
	}
	template <typename T = bool> T get_ShowEnemyOnRadar() {
		return ((T (*)(SPGameInfoSnipe*))(Il2CppBase() + 0x3F14000))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetRadarCompAssetIDList() {
		return ((T (*)(SPGameInfoSnipe*))(Il2CppBase() + 0x3F14008))(this);
	}
	template <typename T = bool> T CheckEndGame() {
		return ((T (*)(SPGameInfoSnipe*))(Il2CppBase() + 0x3F1413C))(this);
	}
	template <typename T = void> T OnStartMatch() {
		return ((T (*)(SPGameInfoSnipe*))(Il2CppBase() + 0x3F1446C))(this);
	}
	template <typename T = Il2CppString*> T GetPrepareModeInfo() {
		return ((T (*)(SPGameInfoSnipe*))(Il2CppBase() + 0x3F14520))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(SPGameInfoSnipe*, float))(Il2CppBase() + 0x3F14668))(this, deltaTime);
	}
	template <typename T = Il2CppList<uintptr_t>*> T xLuaBaseProxy_GetRadarCompAssetIDList() {
		return ((T (*)(SPGameInfoSnipe*))(Il2CppBase() + 0x3F14848))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_CheckEndGame() {
		return ((T (*)(SPGameInfoSnipe*))(Il2CppBase() + 0x3F14850))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnStartMatch() {
		return ((T (*)(SPGameInfoSnipe*))(Il2CppBase() + 0x3F14854))(this);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_GetPrepareModeInfo() {
		return ((T (*)(SPGameInfoSnipe*))(Il2CppBase() + 0x3F14858))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(SPGameInfoSnipe*, float))(Il2CppBase() + 0x3F14860))(this, P0);
	}

};

}
