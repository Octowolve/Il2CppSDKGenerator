#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LogicalComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LogicalComponent"));
	}

	template <typename T = bool> T& IsTickEnabled() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreTick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Destroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Shutdown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T Init() {
		return ((T (*)(LogicalComponent*))(Il2CppBase() + 0x434F9F4))(this);
	}
	template <typename T = void> T PreTick(float deltaTime) {
		return ((T (*)(LogicalComponent*, float))(Il2CppBase() + 0x434FA8C))(this, deltaTime);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(LogicalComponent*, float))(Il2CppBase() + 0x434FB2C))(this, deltaTime);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(LogicalComponent*))(Il2CppBase() + 0x434FBCC))(this);
	}
	template <typename T = void> T Destroy() {
		return ((T (*)(LogicalComponent*))(Il2CppBase() + 0x434FC64))(this);
	}
	template <typename T = void> T Shutdown() {
		return ((T (*)(LogicalComponent*))(Il2CppBase() + 0x434FCFC))(this);
	}

};

}
