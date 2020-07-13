#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameCommon {

class MultiModeLabel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameCommon", "MultiModeLabel"));
	}

	template <typename T = Il2CppString*> T& mText() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& Title() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& Modes() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& DefaultMode() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& IntTag() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& modeCache() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConfigureModeView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = Il2CppString*> T get_Text() {
		return ((T (*)(MultiModeLabel*))(Il2CppBase() + 0x49F3C84))(this);
	}
	template <typename T = void> T set_Text(Il2CppString* value) {
		return ((T (*)(MultiModeLabel*, Il2CppString*))(Il2CppBase() + 0x49F3C8C))(this, value);
	}
	template <typename T = int32_t> T get_Mode() {
		return ((T (*)(MultiModeLabel*))(Il2CppBase() + 0x49F3D44))(this);
	}
	template <typename T = void> T set_Mode(int32_t value) {
		return ((T (*)(MultiModeLabel*, int32_t))(Il2CppBase() + 0x49F3D4C))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(MultiModeLabel*))(Il2CppBase() + 0x49F3FB4))(this);
	}
	template <typename T = void> T ConfigureModeView(int32_t mode) {
		return ((T (*)(MultiModeLabel*, int32_t))(Il2CppBase() + 0x49F3E00))(this, mode);
	}

};

}
