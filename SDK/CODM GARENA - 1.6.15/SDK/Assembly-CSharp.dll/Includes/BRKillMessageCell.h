#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BRKillMessageCell
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BRKillMessageCell"));
	}

	template <typename T = uintptr_t> T& KnockDown() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BindJoin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BindKill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T BindJoin(uintptr_t data) {
		return ((T (*)(BRKillMessageCell*, uintptr_t))(Il2CppBase() + 0x52F2FF0))(this, data);
	}
	template <typename T = void> T ResetUI() {
		return ((T (*)(BRKillMessageCell*))(Il2CppBase() + 0x52F30AC))(this);
	}
	template <typename T = void> T BindKill(uintptr_t data) {
		return ((T (*)(BRKillMessageCell*, uintptr_t))(Il2CppBase() + 0x52F3198))(this, data);
	}
	template <typename T = void> T xLuaBaseProxy_BindJoin(uintptr_t P0) {
		return ((T (*)(BRKillMessageCell*, uintptr_t))(Il2CppBase() + 0x52F32C4))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_BindKill(uintptr_t P0) {
		return ((T (*)(BRKillMessageCell*, uintptr_t))(Il2CppBase() + 0x52F32CC))(this, P0);
	}

};

}
