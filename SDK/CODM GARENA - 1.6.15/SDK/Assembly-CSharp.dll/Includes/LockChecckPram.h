#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LockChecckPram
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LockChecckPram"));
	}

	template <typename T = uintptr_t> T& LockStateType() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& LockTime() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& mLifeTime() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> static T& TotalLifeTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& Limit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = bool> T& IsStartCount() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLimitTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateCheckTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LockCheckTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = float> static T GetLimitTime() {
		return ((T (*)(void *))(Il2CppBase() + 0x434EAFC))(0);
	}
	template <typename T = void> T UpdateCheckTime(float deltaTime) {
		return ((T (*)(LockChecckPram*, float))(Il2CppBase() + 0x434EC0C))(this, deltaTime);
	}
	template <typename T = bool> T IsStart() {
		return ((T (*)(LockChecckPram*))(Il2CppBase() + 0x434EE50))(this);
	}
	template <typename T = void> T LockCheckTime(float time) {
		return ((T (*)(LockChecckPram*, float))(Il2CppBase() + 0x434EF28))(this, time);
	}

};

}
