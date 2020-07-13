#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StringValidator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StringValidator"));
	}

	template <typename T = char> static T& CHAR_VALIDATE_FAIL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = char> T& m_LastAddedChar() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& m_MaxLength() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& m_MinLength() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix1_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnValidate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckNameLength() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = char> T OnValidate(Il2CppString* text, int32_t charIndex, char addedChar) {
		return ((T (*)(StringValidator*, Il2CppString*, int32_t, char))(Il2CppBase() + 0x3F2D574))(this, text, charIndex, addedChar);
	}
	template <typename T = bool> T CheckNameLength(Il2CppString* name, bool lastCheck) {
		return ((T (*)(StringValidator*, Il2CppString*, bool))(Il2CppBase() + 0x3F2D75C))(this, name, lastCheck);
	}

};

}
