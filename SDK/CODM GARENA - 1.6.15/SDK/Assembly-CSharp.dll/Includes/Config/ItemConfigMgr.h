#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class ItemConfigMgr
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "ItemConfigMgr"));
	}

	template <typename T = uintptr_t> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> T& m_CacheItemConfigDic() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_CacheFlags() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetItemConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddToCacheDic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Clear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitCacheItemList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearCacheFlag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetItemConf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddToCacheItemType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = uintptr_t> static T GetItemConfig(int32_t id) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x376795C))(0, id);
	}
	template <typename T = void> T AddToCacheDic(uintptr_t config) {
		return ((T (*)(ItemConfigMgr*, uintptr_t))(Il2CppBase() + 0x3767C68))(this, config);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(ItemConfigMgr*))(Il2CppBase() + 0x3767E20))(this);
	}
	template <typename T = void> T InitCacheItemList() {
		return ((T (*)(ItemConfigMgr*))(Il2CppBase() + 0x3767810))(this);
	}
	template <typename T = void> T ClearCacheFlag() {
		return ((T (*)(ItemConfigMgr*))(Il2CppBase() + 0x3767F20))(this);
	}
	template <typename T = uintptr_t> T GetItemConf(int32_t id) {
		return ((T (*)(ItemConfigMgr*, int32_t))(Il2CppBase() + 0x3767A80))(this, id);
	}
	template <typename T = void> T AddToCacheItemType(uintptr_t type) {
		return ((T (*)(ItemConfigMgr*, uintptr_t))(Il2CppBase() + 0x3768040))(this, type);
	}

};

}
