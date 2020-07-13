#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class PlayerGameStatDataStore
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "PlayerGameStatDataStore"));
	}

	template <typename T = uintptr_t> T& m_GameStatData() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_ExpInfo() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> T get_GameStatData() {
		return ((T (*)(PlayerGameStatDataStore*))(Il2CppBase() + 0x3A94C50))(this);
	}
	template <typename T = void> T set_GameStatData(uintptr_t value) {
		return ((T (*)(PlayerGameStatDataStore*, uintptr_t))(Il2CppBase() + 0x3A94D1C))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_ExpInfo() {
		return ((T (*)(PlayerGameStatDataStore*))(Il2CppBase() + 0x3A94C48))(this);
	}
	template <typename T = void> T set_ExpInfo(Il2CppList<uintptr_t>* value) {
		return ((T (*)(PlayerGameStatDataStore*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x3A94D24))(this, value);
	}
	template <typename T = uintptr_t> T get_PVPGameExpInfo() {
		return ((T (*)(PlayerGameStatDataStore*))(Il2CppBase() + 0x3A94D2C))(this);
	}
	template <typename T = int32_t> T get_Level() {
		return ((T (*)(PlayerGameStatDataStore*))(Il2CppBase() + 0x3A94E08))(this);
	}

};

}
