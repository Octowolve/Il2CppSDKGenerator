#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class UIControlUtils
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "UIControlUtils"));
	}

	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> static T& mStopwatchs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Create() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Copy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DiagnosticStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DiagnosticPrint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = uintptr_t> static T Create(uintptr_t assetID, uintptr_t parent) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x1B6ED88))(0, assetID, parent);
	}
	template <typename T = uintptr_t> static T Copy(uintptr_t original, uintptr_t parent) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x1B6EA0C))(0, original, parent);
	}
	template <typename T = void> static T DiagnosticStart(Il2CppString* tag) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x3AD485C))(0, tag);
	}
	template <typename T = void> static T DiagnosticPrint(Il2CppString* tag) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x3AD4A8C))(0, tag);
	}

};

}
