#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class LoadingGameTipsConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "LoadingGameTipsConfig"));
	}

	template <typename T = uintptr_t> T& m_ModeCategory() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& ModeCategoryStr() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& LevelStartShow() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& LevelEndShow() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& LOCID_TipsContent() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PostInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLoadingInfosByModeCategory() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLoadingInfoByModeCategory() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = uintptr_t> T get_ModeCategory() {
		return ((T (*)(LoadingGameTipsConfig*))(Il2CppBase() + 0x3774900))(this);
	}
	template <typename T = void> T PostInit() {
		return ((T (*)(LoadingGameTipsConfig*))(Il2CppBase() + 0x3774908))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T GetLoadingInfosByModeCategory(uintptr_t modeCategory) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3774A20))(0, modeCategory);
	}
	template <typename T = uintptr_t> static T GetLoadingInfoByModeCategory(uintptr_t modeCategory) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3774D30))(0, modeCategory);
	}
	template <typename T = Il2CppString*> T get_ModeCategoryStr() {
		return ((T (*)(LoadingGameTipsConfig*))(Il2CppBase() + 0x3774A18))(this);
	}
	template <typename T = void> T set_ModeCategoryStr(Il2CppString* value) {
		return ((T (*)(LoadingGameTipsConfig*, Il2CppString*))(Il2CppBase() + 0x3774E68))(this, value);
	}
	template <typename T = int32_t> T get_LevelStartShow() {
		return ((T (*)(LoadingGameTipsConfig*))(Il2CppBase() + 0x3774D20))(this);
	}
	template <typename T = void> T set_LevelStartShow(int32_t value) {
		return ((T (*)(LoadingGameTipsConfig*, int32_t))(Il2CppBase() + 0x3774E70))(this, value);
	}
	template <typename T = int32_t> T get_LevelEndShow() {
		return ((T (*)(LoadingGameTipsConfig*))(Il2CppBase() + 0x3774D28))(this);
	}
	template <typename T = void> T set_LevelEndShow(int32_t value) {
		return ((T (*)(LoadingGameTipsConfig*, int32_t))(Il2CppBase() + 0x3774E78))(this, value);
	}
	template <typename T = Il2CppString*> T get_LOCID_TipsContent() {
		return ((T (*)(LoadingGameTipsConfig*))(Il2CppBase() + 0x3774E80))(this);
	}
	template <typename T = void> T set_LOCID_TipsContent(Il2CppString* value) {
		return ((T (*)(LoadingGameTipsConfig*, Il2CppString*))(Il2CppBase() + 0x3774E88))(this, value);
	}
	template <typename T = Il2CppString*> T get_TipsContent() {
		return ((T (*)(LoadingGameTipsConfig*))(Il2CppBase() + 0x3774E90))(this);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(LoadingGameTipsConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x3774EA0))(this, bytes, position);
	}
	template <typename T = void> T xLuaBaseProxy_PostInit() {
		return ((T (*)(LoadingGameTipsConfig*))(Il2CppBase() + 0x3775044))(this);
	}

};

}
