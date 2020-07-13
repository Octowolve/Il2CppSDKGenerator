#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WeaponPutDownStateUAV
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponPutDownState_UAV"));
	}

	template <typename T = float> T& m_PutDownTimeElapse() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& m_PutDownAnimTime() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T BeginState() {
		return ((T (*)(WeaponPutDownStateUAV*))(Il2CppBase() + 0x4584350))(this);
	}
	template <typename T = void> T EndState() {
		return ((T (*)(WeaponPutDownStateUAV*))(Il2CppBase() + 0x4584460))(this);
	}
	template <typename T = void> T Tick(float DeltaTime) {
		return ((T (*)(WeaponPutDownStateUAV*, float))(Il2CppBase() + 0x4584534))(this, DeltaTime);
	}
	template <typename T = void> T xLuaBaseProxy_BeginState() {
		return ((T (*)(WeaponPutDownStateUAV*))(Il2CppBase() + 0x458480C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_EndState() {
		return ((T (*)(WeaponPutDownStateUAV*))(Il2CppBase() + 0x4584814))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(WeaponPutDownStateUAV*, float))(Il2CppBase() + 0x458481C))(this, P0);
	}

};

}
