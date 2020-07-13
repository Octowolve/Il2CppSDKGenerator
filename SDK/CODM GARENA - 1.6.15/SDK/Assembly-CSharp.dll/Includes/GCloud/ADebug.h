#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud {

class ADebug
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud", "ADebug"));
	}

	template <typename T = uintptr_t> static T& implement() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& Level() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Log() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LogEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LogError() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LogException() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LogHex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = void> static T Log(uintptr_t message) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2A6CF98))(0, message);
	}
	template <typename T = void> static T LogEvent(uintptr_t message) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2A6D100))(0, message);
	}
	template <typename T = void> static T LogError(uintptr_t message) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2A6D268))(0, message);
	}
	template <typename T = void> static T LogException(uintptr_t exception) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2A6D3D0))(0, exception);
	}
	template <typename T = void> static T LogHex(Il2CppString* prefix, Il2CppArray<uintptr_t>* data, int32_t len) {
		return ((T (*)(void *, Il2CppString*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x2A6D538))(0, prefix, data, len);
	}

};

}
