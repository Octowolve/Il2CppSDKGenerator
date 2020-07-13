#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class EasyItemAnimFlyX
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "EasyItemAnimFlyX"));
	}

	template <typename T = uintptr_t> T& m_Tween() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Stop() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Play() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Prepare() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShutDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T Init(uintptr_t obj) {
		return ((T (*)(EasyItemAnimFlyX*, uintptr_t))(Il2CppBase() + 0x46F6228))(this, obj);
	}
	template <typename T = void> T Stop() {
		return ((T (*)(EasyItemAnimFlyX*))(Il2CppBase() + 0x46F6558))(this);
	}
	template <typename T = void> T Play() {
		return ((T (*)(EasyItemAnimFlyX*))(Il2CppBase() + 0x46F6670))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(EasyItemAnimFlyX*))(Il2CppBase() + 0x46F6784))(this);
	}
	template <typename T = void> T Prepare() {
		return ((T (*)(EasyItemAnimFlyX*))(Il2CppBase() + 0x46F68A0))(this);
	}
	template <typename T = void> T ShutDown() {
		return ((T (*)(EasyItemAnimFlyX*))(Il2CppBase() + 0x46F69B4))(this);
	}

};

}
