#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HardPointSignboardHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HardPointSignboardHUD"));
	}

	template <typename T = uintptr_t> T& m_Signboard() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = int32_t> T& m_AreaID() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& m_HPManager() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T Start() {
		return ((T (*)(HardPointSignboardHUD*))(Il2CppBase() + 0x474D1B8))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(HardPointSignboardHUD*))(Il2CppBase() + 0x474D4A8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(HardPointSignboardHUD*))(Il2CppBase() + 0x474D900))(this);
	}

};

}
