#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace InGameNewGuide {

class MPNewGuideCommonItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "InGameNewGuide", "MPNewGuide_CommonItem"));
	}

	template <typename T = Il2CppString*> T& m_CurFireSprite() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Check() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = bool> T Check() {
		return ((T (*)(MPNewGuideCommonItem*))(Il2CppBase() + 0x316B60C))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_Check() {
		return ((T (*)(MPNewGuideCommonItem*))(Il2CppBase() + 0x316B7DC))(this);
	}

};

}
