#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class BRGameCureTeammatesButton
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "BRGameCureTeammatesButton"));
	}

	template <typename T = uint32_t> T& m_TeammatePlayerID() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uint32_t> T get_TeammatePlayerID() {
		return ((T (*)(BRGameCureTeammatesButton*))(Il2CppBase() + 0x2D8E1C8))(this);
	}
	template <typename T = void> T set_TeammatePlayerID(uint32_t value) {
		return ((T (*)(BRGameCureTeammatesButton*, uint32_t))(Il2CppBase() + 0x2D8E1D0))(this, value);
	}

};

}
