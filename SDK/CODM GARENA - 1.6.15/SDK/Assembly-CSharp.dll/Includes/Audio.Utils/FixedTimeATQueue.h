#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Audio.Utils {

class FixedTimeATQueue
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Audio.Utils", "FixedTimeATQueue"));
	}

	template <typename T = float> T& mMaxProcessTime() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& mCurProcStartTime() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Term() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginProcessCmd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsContinueProcess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T Init(float fMaxProcessTime) {
		return ((T (*)(FixedTimeATQueue*, float))(Il2CppBase() + 0x450A980))(this, fMaxProcessTime);
	}
	template <typename T = void> T Term() {
		return ((T (*)(FixedTimeATQueue*))(Il2CppBase() + 0x450AA2C))(this);
	}
	template <typename T = void> T BeginProcessCmd() {
		return ((T (*)(FixedTimeATQueue*))(Il2CppBase() + 0x450AAC4))(this);
	}
	template <typename T = bool> T IsContinueProcess() {
		return ((T (*)(FixedTimeATQueue*))(Il2CppBase() + 0x450AB70))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Term() {
		return ((T (*)(FixedTimeATQueue*))(Il2CppBase() + 0x450AC40))(this);
	}
	template <typename T = void> T xLuaBaseProxy_BeginProcessCmd() {
		return ((T (*)(FixedTimeATQueue*))(Il2CppBase() + 0x450AC44))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsContinueProcess() {
		return ((T (*)(FixedTimeATQueue*))(Il2CppBase() + 0x450AC48))(this);
	}

};

}
