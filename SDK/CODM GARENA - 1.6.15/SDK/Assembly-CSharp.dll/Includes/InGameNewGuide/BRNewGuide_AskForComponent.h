#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace InGameNewGuide {

class BRNewGuideAskForComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "InGameNewGuide", "BRNewGuide_AskForComponent"));
	}

	template <typename T = Il2CppVector3> T& m_EffectPos() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Check() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetInterface() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T ShowEffect() {
		return ((T (*)(BRNewGuideAskForComponent*))(Il2CppBase() + 0x4996DA4))(this);
	}
	template <typename T = bool> T Check() {
		return ((T (*)(BRNewGuideAskForComponent*))(Il2CppBase() + 0x499709C))(this);
	}
	template <typename T = uintptr_t> T GetInterface(uintptr_t ID) {
		return ((T (*)(BRNewGuideAskForComponent*, uintptr_t))(Il2CppBase() + 0x4997284))(this, ID);
	}
	template <typename T = void> T xLuaBaseProxy_ShowEffect() {
		return ((T (*)(BRNewGuideAskForComponent*))(Il2CppBase() + 0x4997430))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_Check() {
		return ((T (*)(BRNewGuideAskForComponent*))(Il2CppBase() + 0x4997438))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetInterface(uintptr_t P0) {
		return ((T (*)(BRNewGuideAskForComponent*, uintptr_t))(Il2CppBase() + 0x4997440))(this, P0);
	}

};

}
