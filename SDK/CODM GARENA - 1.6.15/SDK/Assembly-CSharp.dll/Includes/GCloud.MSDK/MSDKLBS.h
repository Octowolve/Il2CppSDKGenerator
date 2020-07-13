#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud.MSDK {

class MSDKLBS
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud.MSDK", "MSDKLBS"));
	}

	template <typename T = void*> static T& LBSLocationRetEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& LBSRelationRetEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = void*> static T& LBSIPInfoRetEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = void*> static T& LBSRetEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_add_LBSLocationRetEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_remove_LBSLocationRetEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_add_LBSRelationRetEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_remove_LBSRelationRetEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_add_LBSIPInfoRetEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_remove_LBSIPInfoRetEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_add_LBSRetEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_remove_LBSRetEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLocation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearLocation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetNearby() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetIPInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLBSLocationRet() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLBSRelationRet() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLBSIPInfoRet() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLBSBaseRet() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}

	template <typename T = void> static T getLocationAdapter() {
		return ((T (*)(void *))(Il2CppBase() + 0x46CA084))(0);
	}
	template <typename T = void> static T getNearbyAdapter() {
		return ((T (*)(void *))(Il2CppBase() + 0x46CA154))(0);
	}
	template <typename T = void> static T clearLocationAdapter() {
		return ((T (*)(void *))(Il2CppBase() + 0x46CA220))(0);
	}
	template <typename T = void> static T getIPInfoAdapter() {
		return ((T (*)(void *))(Il2CppBase() + 0x46CA2F0))(0);
	}
	template <typename T = void> static T add_LBSLocationRetEvent(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x46CA3BC))(0, value);
	}
	template <typename T = void> static T remove_LBSLocationRetEvent(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x46CA5BC))(0, value);
	}
	template <typename T = void> static T add_LBSRelationRetEvent(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x46CA7BC))(0, value);
	}
	template <typename T = void> static T remove_LBSRelationRetEvent(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x46CA9B4))(0, value);
	}
	template <typename T = void> static T add_LBSIPInfoRetEvent(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x46CABAC))(0, value);
	}
	template <typename T = void> static T remove_LBSIPInfoRetEvent(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x46CADA4))(0, value);
	}
	template <typename T = void> static T add_LBSRetEvent(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x46CAF9C))(0, value);
	}
	template <typename T = void> static T remove_LBSRetEvent(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x46CB194))(0, value);
	}
	template <typename T = void> static T GetLocation() {
		return ((T (*)(void *))(Il2CppBase() + 0x46CB38C))(0);
	}
	template <typename T = void> static T ClearLocation() {
		return ((T (*)(void *))(Il2CppBase() + 0x46CB618))(0);
	}
	template <typename T = void> static T GetNearby() {
		return ((T (*)(void *))(Il2CppBase() + 0x46CB8A4))(0);
	}
	template <typename T = void> static T GetIPInfo() {
		return ((T (*)(void *))(Il2CppBase() + 0x46CBB30))(0);
	}
	template <typename T = void> static T OnLBSLocationRet(Il2CppString* json) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x46CBDBC))(0, json);
	}
	template <typename T = void> static T OnLBSRelationRet(Il2CppString* json) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x46CC190))(0, json);
	}
	template <typename T = void> static T OnLBSIPInfoRet(Il2CppString* json) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x46CC564))(0, json);
	}
	template <typename T = void> static T OnLBSBaseRet(Il2CppString* json) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x46CC938))(0, json);
	}

};

}
