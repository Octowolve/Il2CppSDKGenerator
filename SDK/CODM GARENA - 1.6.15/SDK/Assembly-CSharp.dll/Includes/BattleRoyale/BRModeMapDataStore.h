#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRModeMapDataStore
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRModeMapDataStore"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& m_ModeList() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_MapList() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsMapOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = Il2CppList<uintptr_t>*> T get_ModeList() {
		return ((T (*)(BRModeMapDataStore*))(Il2CppBase() + 0x1AB1998))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_MapList() {
		return ((T (*)(BRModeMapDataStore*))(Il2CppBase() + 0x1AB1A6C))(this);
	}
	template <typename T = bool> T IsMapOpen(int32_t mapId) {
		return ((T (*)(BRModeMapDataStore*, int32_t))(Il2CppBase() + 0x1AB1BAC))(this, mapId);
	}

};

}
