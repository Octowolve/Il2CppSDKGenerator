#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE {

class PVEAIActionPlayAnim
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE", "PVEAIAction_PlayAnim"));
	}

	template <typename T = uintptr_t> T& AnimName() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& AnimLength() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TryExeCmd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T OnEnter() {
		return ((T (*)(PVEAIActionPlayAnim*))(Il2CppBase() + 0x436FBC0))(this);
	}
	template <typename T = bool> T TryExeCmd() {
		return ((T (*)(PVEAIActionPlayAnim*))(Il2CppBase() + 0x436FC64))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnEnter() {
		return ((T (*)(PVEAIActionPlayAnim*))(Il2CppBase() + 0x436FD98))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_TryExeCmd() {
		return ((T (*)(PVEAIActionPlayAnim*))(Il2CppBase() + 0x436FD9C))(this);
	}

};

}
