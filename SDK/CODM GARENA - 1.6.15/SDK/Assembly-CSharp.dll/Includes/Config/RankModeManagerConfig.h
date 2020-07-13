#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class RankModeManagerConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "RankModeManagerConfig"));
	}

	template <typename T = Il2CppList<int32_t>*> static T& RankModeList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppDictionary<int32_t, Il2CppString*>*> static T& BrTabDic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = Il2CppDictionary<int32_t, Il2CppString*>*> static T& BrTabChildDic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = int32_t> static T& BrDefaultChildIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = Il2CppDictionary<int32_t, Il2CppString*>*> static T& MpTabDic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = Il2CppDictionary<int32_t, Il2CppString*>*> static T& MpTabChildDic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = int32_t> static T& MpDefaultChildIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = Il2CppDictionary<int32_t, Il2CppString*>*> static T& ZbTabDic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = Il2CppDictionary<int32_t, Il2CppString*>*> static T& ZbTabChildDic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = int32_t> static T& ZbDefaultChildIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = int32_t> T& ModeType() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& LOCID_Name_RankMode() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& RankTabs() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& LOCID_Name_RankTab() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& RankTabChilds() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& LOCID_Name_RankTabChild() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRankTabList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetDefaultIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}

	template <typename T = void> static T SetRankTabList() {
		return ((T (*)(void *))(Il2CppBase() + 0x30D717C))(0);
	}
	template <typename T = void> static T SetDefaultIndex() {
		return ((T (*)(void *))(Il2CppBase() + 0x30D7B80))(0);
	}
	template <typename T = int32_t> T get_ModeType() {
		return ((T (*)(RankModeManagerConfig*))(Il2CppBase() + 0x30D7B48))(this);
	}
	template <typename T = void> T set_ModeType(int32_t value) {
		return ((T (*)(RankModeManagerConfig*, int32_t))(Il2CppBase() + 0x30D8000))(this, value);
	}
	template <typename T = Il2CppString*> T get_LOCID_Name_RankMode() {
		return ((T (*)(RankModeManagerConfig*))(Il2CppBase() + 0x30D8008))(this);
	}
	template <typename T = void> T set_LOCID_Name_RankMode(Il2CppString* value) {
		return ((T (*)(RankModeManagerConfig*, Il2CppString*))(Il2CppBase() + 0x30D8010))(this, value);
	}
	template <typename T = Il2CppString*> T get_Name_RankMode() {
		return ((T (*)(RankModeManagerConfig*))(Il2CppBase() + 0x30D8018))(this);
	}
	template <typename T = int32_t> T get_RankTabs() {
		return ((T (*)(RankModeManagerConfig*))(Il2CppBase() + 0x30D7B50))(this);
	}
	template <typename T = void> T set_RankTabs(int32_t value) {
		return ((T (*)(RankModeManagerConfig*, int32_t))(Il2CppBase() + 0x30D8028))(this, value);
	}
	template <typename T = Il2CppString*> T get_LOCID_Name_RankTab() {
		return ((T (*)(RankModeManagerConfig*))(Il2CppBase() + 0x30D8030))(this);
	}
	template <typename T = void> T set_LOCID_Name_RankTab(Il2CppString* value) {
		return ((T (*)(RankModeManagerConfig*, Il2CppString*))(Il2CppBase() + 0x30D8038))(this, value);
	}
	template <typename T = Il2CppString*> T get_Name_RankTab() {
		return ((T (*)(RankModeManagerConfig*))(Il2CppBase() + 0x30D7B58))(this);
	}
	template <typename T = int32_t> T get_RankTabChilds() {
		return ((T (*)(RankModeManagerConfig*))(Il2CppBase() + 0x30D7B68))(this);
	}
	template <typename T = void> T set_RankTabChilds(int32_t value) {
		return ((T (*)(RankModeManagerConfig*, int32_t))(Il2CppBase() + 0x30D8040))(this, value);
	}
	template <typename T = Il2CppString*> T get_LOCID_Name_RankTabChild() {
		return ((T (*)(RankModeManagerConfig*))(Il2CppBase() + 0x30D8048))(this);
	}
	template <typename T = void> T set_LOCID_Name_RankTabChild(Il2CppString* value) {
		return ((T (*)(RankModeManagerConfig*, Il2CppString*))(Il2CppBase() + 0x30D8050))(this, value);
	}
	template <typename T = Il2CppString*> T get_Name_RankTabChild() {
		return ((T (*)(RankModeManagerConfig*))(Il2CppBase() + 0x30D7B70))(this);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(RankModeManagerConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x30D8058))(this, bytes, position);
	}

};

}
