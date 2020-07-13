#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HTMLEngine {

class HtEngine
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HTMLEngine", "HtEngine"));
	}

	template <typename T = uintptr_t> static T& Device() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& Logger() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& LogLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& DefaultColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& LinkHoverColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = float> static T& LinkPressedFactor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = Il2CppString*> static T& LinkFunctionName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = Il2CppString*> static T& DefaultFontFace() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = int32_t> static T& DefaultFontSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& DefaultLinkColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDevice() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterLogger() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCompiler() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Log() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}

	template <typename T = void> static T RegisterDevice(uintptr_t device) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4765178))(0, device);
	}
	template <typename T = void> static T RegisterLogger(uintptr_t logger) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4765334))(0, logger);
	}
	template <typename T = uintptr_t> static T GetCompiler() {
		return ((T (*)(void *))(Il2CppBase() + 0x475D634))(0);
	}
	template <typename T = void> static T Log(uintptr_t level, Il2CppString* format, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x476543C))(0, level, format, args);
	}

};

}
