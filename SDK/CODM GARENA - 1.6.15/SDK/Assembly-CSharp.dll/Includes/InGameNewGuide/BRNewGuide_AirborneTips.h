#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace InGameNewGuide {

class BRNewGuideAirborneTips
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "InGameNewGuide", "BRNewGuide_AirborneTips"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Check() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetInterface() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Exit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T OnEvent(uintptr_t Msg) {
		return ((T (*)(BRNewGuideAirborneTips*, uintptr_t))(Il2CppBase() + 0x4995EA0))(this, Msg);
	}
	template <typename T = bool> T Check() {
		return ((T (*)(BRNewGuideAirborneTips*))(Il2CppBase() + 0x499602C))(this);
	}
	template <typename T = uintptr_t> T GetInterface(uintptr_t ID) {
		return ((T (*)(BRNewGuideAirborneTips*, uintptr_t))(Il2CppBase() + 0x49961A4))(this, ID);
	}
	template <typename T = void> T Exit() {
		return ((T (*)(BRNewGuideAirborneTips*))(Il2CppBase() + 0x4996314))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnEvent(uintptr_t P0) {
		return ((T (*)(BRNewGuideAirborneTips*, uintptr_t))(Il2CppBase() + 0x49963D4))(this, P0);
	}
	template <typename T = bool> T xLuaBaseProxy_Check() {
		return ((T (*)(BRNewGuideAirborneTips*))(Il2CppBase() + 0x49963DC))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetInterface(uintptr_t P0) {
		return ((T (*)(BRNewGuideAirborneTips*, uintptr_t))(Il2CppBase() + 0x49963E4))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Exit() {
		return ((T (*)(BRNewGuideAirborneTips*))(Il2CppBase() + 0x49963EC))(this);
	}

};

}
