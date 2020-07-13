#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class LogHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "LogHelper"));
	}

	template <typename T = uintptr_t> static T& FunctionType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LockLog() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetLockLog() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsLockLog() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GeneralLog() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GeneralError() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = void> static T LockLog(uintptr_t state) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x24ACABC))(0, state);
	}
	template <typename T = void> static T ResetLockLog(uintptr_t state) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x24ACB80))(0, state);
	}
	template <typename T = bool> static T IsLockLog(uintptr_t state) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x24ACC44))(0, state);
	}
	template <typename T = void> static T GeneralLog(uintptr_t type, Il2CppString* msg, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x24ACD08))(0, type, msg, args);
	}
	template <typename T = void> static T GeneralError(uintptr_t type, Il2CppString* msg, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x24ACDD4))(0, type, msg, args);
	}

};

}
