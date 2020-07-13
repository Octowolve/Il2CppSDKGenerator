#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE {

class AICmdFollowSWSPath
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE", "AICmd_FollowSWSPath"));
	}

	template <typename T = uintptr_t> T& m_Path() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_State() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Popped() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T Init(uintptr_t inParam) {
		return ((T (*)(AICmdFollowSWSPath*, uintptr_t))(Il2CppBase() + 0x4CE951C))(this, inParam);
	}
	template <typename T = uintptr_t> T State() {
		return ((T (*)(AICmdFollowSWSPath*))(Il2CppBase() + 0x4CE9620))(this);
	}
	template <typename T = void> T Popped() {
		return ((T (*)(AICmdFollowSWSPath*))(Il2CppBase() + 0x4CE9708))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_State() {
		return ((T (*)(AICmdFollowSWSPath*))(Il2CppBase() + 0x4CE97DC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Popped() {
		return ((T (*)(AICmdFollowSWSPath*))(Il2CppBase() + 0x4CE97E4))(this);
	}

};

}
