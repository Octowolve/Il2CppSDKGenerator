#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP {

class PvpCommonTipsManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP", "PvpCommonTipsManager"));
	}

	template <typename T = uintptr_t> static T& _instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& TipsList() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& TempData() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddTipsData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveTipsData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetNextTipsData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsExistTypeInList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsNeedForceChangeTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = uintptr_t> static T get_Instance() {
		return ((T (*)(void *))(Il2CppBase() + 0x2ADBDA8))(0);
	}
	template <typename T = void> T AddTipsData(uintptr_t type, Il2CppString* text, Il2CppString* image, int32_t duration, Il2CppString* extraText) {
		return ((T (*)(PvpCommonTipsManager*, uintptr_t, Il2CppString*, Il2CppString*, int32_t, Il2CppString*))(Il2CppBase() + 0x2ADD440))(this, type, text, image, duration, extraText);
	}
	template <typename T = void> T RemoveTipsData(uintptr_t type) {
		return ((T (*)(PvpCommonTipsManager*, uintptr_t))(Il2CppBase() + 0x2ADBEBC))(this, type);
	}
	template <typename T = bool> T GetNextTipsData(uintptr_t* tipsData) {
		return ((T (*)(PvpCommonTipsManager*, uintptr_t*))(Il2CppBase() + 0x2ADC23C))(this, tipsData);
	}
	template <typename T = bool> T IsExistTypeInList(uintptr_t type) {
		return ((T (*)(PvpCommonTipsManager*, uintptr_t))(Il2CppBase() + 0x2ADD7CC))(this, type);
	}
	template <typename T = bool> T IsNeedForceChangeTips(uintptr_t data) {
		return ((T (*)(PvpCommonTipsManager*, uintptr_t))(Il2CppBase() + 0x2ADC0AC))(this, data);
	}

};

}
