#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class PositionIndicator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "PositionIndicator"));
	}

	template <typename T = uintptr_t> T& m_OwnerPawn() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = uintptr_t> T get_OwnerPawn() {
		return ((T (*)(PositionIndicator*))(Il2CppBase() + 0x170BBF8))(this);
	}
	template <typename T = void> T PreInit() {
		return ((T (*)(PositionIndicator*))(Il2CppBase() + 0x170BD54))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PreInit() {
		return ((T (*)(PositionIndicator*))(Il2CppBase() + 0x170BE64))(this);
	}

};

}
