#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class FireGroupEndState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "FireGroupEndState"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCountingDownDuration() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T BeginState() {
		return ((T (*)(FireGroupEndState*))(Il2CppBase() + 0x51BF350))(this);
	}
	template <typename T = void> T PlayAnim() {
		return ((T (*)(FireGroupEndState*))(Il2CppBase() + 0x51BF40C))(this);
	}
	template <typename T = float> T GetCountingDownDuration() {
		return ((T (*)(FireGroupEndState*))(Il2CppBase() + 0x51BF528))(this);
	}
	template <typename T = void> T EndState() {
		return ((T (*)(FireGroupEndState*))(Il2CppBase() + 0x51BF608))(this);
	}
	template <typename T = void> T xLuaBaseProxy_BeginState() {
		return ((T (*)(FireGroupEndState*))(Il2CppBase() + 0x51BF728))(this);
	}
	template <typename T = float> T xLuaBaseProxy_GetCountingDownDuration() {
		return ((T (*)(FireGroupEndState*))(Il2CppBase() + 0x51BF730))(this);
	}
	template <typename T = void> T xLuaBaseProxy_EndState() {
		return ((T (*)(FireGroupEndState*))(Il2CppBase() + 0x51BF738))(this);
	}

};

}
