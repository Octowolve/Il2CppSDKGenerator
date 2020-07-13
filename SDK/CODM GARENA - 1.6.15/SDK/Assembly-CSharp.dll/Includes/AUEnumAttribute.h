#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AUEnumAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AUEnumAttribute"));
	}

	template <typename T = Il2CppString*> T& title() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& info() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& index() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_getEnumInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_getEnumInfosUIEX() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_getEnumTitles() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_getEnumTitlesInfos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_getEnumInfos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_getEnumIndexs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_getEnumInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = Il2CppArray<uintptr_t>*> static T getEnumInfo(uintptr_t inType) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3250CF4))(0, inType);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T getEnumInfosUIEX(uintptr_t inType) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x32510F0))(0, inType);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T getEnumTitles(uintptr_t inType) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x32513DC))(0, inType);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T getEnumTitlesInfos(uintptr_t inType) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3251674))(0, inType);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T getEnumInfos(uintptr_t inType) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3251990))(0, inType);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T getEnumIndexs(uintptr_t inType) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3251C28))(0, inType);
	}
	template <typename T = bool> static T getEnumInfo_1(uintptr_t inType, Il2CppString* name, uintptr_t* title, uintptr_t* info) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x3251EC8))(0, inType, name, title, info);
	}

};

}
