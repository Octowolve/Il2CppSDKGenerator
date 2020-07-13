#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ADebugImplement
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ADebugImplement"));
	}

	template <typename T = uintptr_t> T& fileStream() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_writeToFile() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_formatMessage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Log() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LogError() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LogException() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = void> T init() {
		return ((T (*)(ADebugImplement*))(Il2CppBase() + 0x450B170))(this);
	}
	template <typename T = void> T writeToFile(Il2CppString* log) {
		return ((T (*)(ADebugImplement*, Il2CppString*))(Il2CppBase() + 0x450B208))(this, log);
	}
	template <typename T = Il2CppString*> T formatMessage(uintptr_t message) {
		return ((T (*)(ADebugImplement*, uintptr_t))(Il2CppBase() + 0x450B2A8))(this, message);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(ADebugImplement*))(Il2CppBase() + 0x450B424))(this);
	}
	template <typename T = void> T Log(uintptr_t message) {
		return ((T (*)(ADebugImplement*, uintptr_t))(Il2CppBase() + 0x450B4BC))(this, message);
	}
	template <typename T = void> T LogError(uintptr_t message) {
		return ((T (*)(ADebugImplement*, uintptr_t))(Il2CppBase() + 0x450B5C4))(this, message);
	}
	template <typename T = void> T LogException(uintptr_t exception) {
		return ((T (*)(ADebugImplement*, uintptr_t))(Il2CppBase() + 0x450B6CC))(this, exception);
	}
	template <typename T = void> T xLuaBaseProxy_OnDisable() {
		return ((T (*)(ADebugImplement*))(Il2CppBase() + 0x450B7EC))(this);
	}

};

}
