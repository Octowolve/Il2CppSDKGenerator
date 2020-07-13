#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FrontEnd {

class PerkTypeColorChange
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FrontEnd", "PerkTypeColorChange"));
	}

	template <typename T = uintptr_t> T& m_Material() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(PerkTypeColorChange*))(Il2CppBase() + 0x3841AE8))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(PerkTypeColorChange*))(Il2CppBase() + 0x3841B8C))(this);
	}
	template <typename T = void> T ChangeColor(uintptr_t perkType) {
		return ((T (*)(PerkTypeColorChange*, uintptr_t))(Il2CppBase() + 0x3841D88))(this, perkType);
	}

};

}
