#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.DuelGame {

class DuelGame
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.DuelGame", "DuelGame"));
	}

	template <typename T = float> T& m_MlkGameUavCd() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = float> T& m_MlkGameUavTime() {
		return *(T*)((uintptr_t)this + 0x1A4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CopyProperties() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T CopyProperties(uintptr_t inFrom, bool includeParent) {
		return ((T (*)(DuelGame*, uintptr_t, bool))(Il2CppBase() + 0x2B396EC))(this, inFrom, includeParent);
	}
	template <typename T = uintptr_t> T get_DataType() {
		return ((T (*)(DuelGame*))(Il2CppBase() + 0x2B3981C))(this);
	}
	template <typename T = float> T get_MlkGameUavCd() {
		return ((T (*)(DuelGame*))(Il2CppBase() + 0x2B398D8))(this);
	}
	template <typename T = float> T get_MlkGameUavTime() {
		return ((T (*)(DuelGame*))(Il2CppBase() + 0x2B398E0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_CopyProperties(uintptr_t P0, bool P1) {
		return ((T (*)(DuelGame*, uintptr_t, bool))(Il2CppBase() + 0x2B398E8))(this, P0, P1);
	}

};

}
