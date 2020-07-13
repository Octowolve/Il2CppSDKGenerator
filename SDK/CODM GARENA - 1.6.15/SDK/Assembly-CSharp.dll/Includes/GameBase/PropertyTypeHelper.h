#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class PropertyTypeHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "PropertyTypeHelper"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> static T& Names() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& Enums() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPropertyType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = uintptr_t> static T GetPropertyType(Il2CppString* propName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x2DBD9A4))(0, propName);
	}

};

}
