#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PropertySheet
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PropertySheet"));
	}

	template <typename T = uintptr_t> T& properties() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& material() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearKeywords() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EnableKeyword() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DisableKeyword() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Release() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = uintptr_t> T get_properties() {
		return ((T (*)(PropertySheet*))(Il2CppBase() + 0x4CDD6D4))(this);
	}
	template <typename T = void> T set_properties(uintptr_t value) {
		return ((T (*)(PropertySheet*, uintptr_t))(Il2CppBase() + 0x4CDD6CC))(this, value);
	}
	template <typename T = uintptr_t> T get_material() {
		return ((T (*)(PropertySheet*))(Il2CppBase() + 0x4CDD6DC))(this);
	}
	template <typename T = void> T set_material(uintptr_t value) {
		return ((T (*)(PropertySheet*, uintptr_t))(Il2CppBase() + 0x4CDD6C4))(this, value);
	}
	template <typename T = void> T ClearKeywords() {
		return ((T (*)(PropertySheet*))(Il2CppBase() + 0x4CDD6E4))(this);
	}
	template <typename T = void> T EnableKeyword(Il2CppString* keyword) {
		return ((T (*)(PropertySheet*, Il2CppString*))(Il2CppBase() + 0x4CDD7A4))(this, keyword);
	}
	template <typename T = void> T DisableKeyword(Il2CppString* keyword) {
		return ((T (*)(PropertySheet*, Il2CppString*))(Il2CppBase() + 0x4CDD86C))(this, keyword);
	}
	template <typename T = void> T Release() {
		return ((T (*)(PropertySheet*))(Il2CppBase() + 0x4CDD934))(this);
	}

};

}
