#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PropertySheetFactory
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PropertySheetFactory"));
	}

	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& m_Sheets() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Get() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_Get() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Release() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = uintptr_t> T Get(Il2CppString* shaderName) {
		return ((T (*)(PropertySheetFactory*, Il2CppString*))(Il2CppBase() + 0x4CDDAC0))(this, shaderName);
	}
	template <typename T = uintptr_t> T Get_1(uintptr_t shader) {
		return ((T (*)(PropertySheetFactory*, uintptr_t))(Il2CppBase() + 0x4CDDB80))(this, shader);
	}
	template <typename T = void> T Release() {
		return ((T (*)(PropertySheetFactory*))(Il2CppBase() + 0x4CDDED4))(this);
	}

};

}
