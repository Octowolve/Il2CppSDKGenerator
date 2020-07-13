#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace InGameNewGuide {

class PVENewGuideItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "InGameNewGuide", "PVENewGuideItem"));
	}

	template <typename T = uintptr_t> T& m_Config() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppString*> T& m_GuideText_2() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppString*> T& m_GuideText_3() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = bool> T get_NotifyAndSelfCheck() {
		return ((T (*)(PVENewGuideItem*))(Il2CppBase() + 0x3175E64))(this);
	}

};

}
