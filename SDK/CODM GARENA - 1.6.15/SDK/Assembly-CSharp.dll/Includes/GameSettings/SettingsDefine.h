#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameSettings {

class SettingsDefine
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameSettings", "SettingsDefine"));
	}

	template <typename T = uintptr_t> static T& SliderEnabledColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& SliderDisabledColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = float> static T& ToggleLowValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = float> static T& ToggleMidValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = float> static T& ToggleHighValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = int32_t> static T& UpdatePhraseDragIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = int32_t> static T& UpdatePhraseConfigClickIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = int32_t> static T& UpdatePhraseEditingIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = int32_t> static T& UpdatePhraseEditResultIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = int32_t> static T& UpdatePhraseEditSwapIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = int32_t> static T& PhraseMaxCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}

	template <typename T = bool> static T get_IsClosePerspective() {
		return ((T (*)(void *))(Il2CppBase() + 0x257130C))(0);
	}
	template <typename T = void> static T set_IsClosePerspective(bool value) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x25713E8))(0, value);
	}

};

}
