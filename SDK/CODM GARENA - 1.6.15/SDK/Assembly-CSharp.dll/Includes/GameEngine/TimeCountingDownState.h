#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class TimeCountingDownState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "TimeCountingDownState"));
	}

	template <typename T = float> T& mCountingDuration() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& mDestState() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& mElapsedTime() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& mIsButtonDown() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckIsButtonDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCountDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCountingDownDuration() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T BeginState() {
		return ((T (*)(TimeCountingDownState*))(Il2CppBase() + 0x3435DA8))(this);
	}
	template <typename T = void> T CheckIsButtonDown() {
		return ((T (*)(TimeCountingDownState*))(Il2CppBase() + 0x3435E74))(this);
	}
	template <typename T = void> T Tick(float DeltaTime) {
		return ((T (*)(TimeCountingDownState*, float))(Il2CppBase() + 0x3435FE4))(this, DeltaTime);
	}
	template <typename T = void> T EndState() {
		return ((T (*)(TimeCountingDownState*))(Il2CppBase() + 0x34360DC))(this);
	}
	template <typename T = void> T OnCountDown() {
		return ((T (*)(TimeCountingDownState*))(Il2CppBase() + 0x343618C))(this);
	}
	template <typename T = float> T GetCountingDownDuration() {
		return ((T (*)(TimeCountingDownState*))(Il2CppBase() + 0x34362A4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_BeginState() {
		return ((T (*)(TimeCountingDownState*))(Il2CppBase() + 0x3436344))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(TimeCountingDownState*, float))(Il2CppBase() + 0x343634C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_EndState() {
		return ((T (*)(TimeCountingDownState*))(Il2CppBase() + 0x3436354))(this);
	}

};

}
