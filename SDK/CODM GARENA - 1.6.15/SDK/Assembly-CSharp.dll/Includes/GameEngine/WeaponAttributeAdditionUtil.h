#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class WeaponAttributeAdditionUtil
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "WeaponAttributeAdditionUtil"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> static T& m_Attribute2PropertyArray() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> static T& m_IsInited() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPropertyFromAttribute() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Int2FloatAddition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Float2IntAddition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = uintptr_t> static T GetPropertyFromAttribute(int32_t attribute) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x2EB446C))(0, attribute);
	}
	template <typename T = void> static T Init() {
		return ((T (*)(void *))(Il2CppBase() + 0x2EB46AC))(0);
	}
	template <typename T = float> static T Int2FloatAddition(int32_t intValue) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x2EB4EBC))(0, intValue);
	}
	template <typename T = int32_t> static T Float2IntAddition(float floatValue) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x2EB4FA0))(0, floatValue);
	}

};

}
