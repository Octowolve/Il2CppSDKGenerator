#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class CarePackageManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "CarePackageManager"));
	}

	template <typename T = Il2CppDictionary<uint32_t, uintptr_t>*> T& m_CarePackageMap() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& CreateCallBack() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& DestoryCallBack() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& f__mg$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Shutdown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Clear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateCarePackage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateCarePackageMovement() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateDeadReplayCarePackage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateCarePackage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveCarePackage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Contains() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Find() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DeadReplayCommonDestory() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateFakeCarePackage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}

	template <typename T = Il2CppDictionary<uint32_t, uintptr_t>*> T get_CarePackageMap() {
		return ((T (*)(CarePackageManager*))(Il2CppBase() + 0x3C5B5C0))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(CarePackageManager*))(Il2CppBase() + 0x3C5B5C8))(this);
	}
	template <typename T = void> T Shutdown() {
		return ((T (*)(CarePackageManager*))(Il2CppBase() + 0x3C5B9A0))(this);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(CarePackageManager*))(Il2CppBase() + 0x3C5B66C))(this);
	}
	template <typename T = bool> T CreateCarePackage(uintptr_t content) {
		return ((T (*)(CarePackageManager*, uintptr_t))(Il2CppBase() + 0x3C5C060))(this, content);
	}
	template <typename T = void> T UpdateCarePackageMovement(uintptr_t content) {
		return ((T (*)(CarePackageManager*, uintptr_t))(Il2CppBase() + 0x3C5C8C4))(this, content);
	}
	template <typename T = bool> T CreateDeadReplayCarePackage(uintptr_t carePackageInfo) {
		return ((T (*)(CarePackageManager*, uintptr_t))(Il2CppBase() + 0x3C5CB1C))(this, carePackageInfo);
	}
	template <typename T = void> T UpdateCarePackage(uintptr_t content) {
		return ((T (*)(CarePackageManager*, uintptr_t))(Il2CppBase() + 0x3C5D0B8))(this, content);
	}
	template <typename T = void> T RemoveCarePackage(uint32_t actorID, bool silentRemove) {
		return ((T (*)(CarePackageManager*, uint32_t, bool))(Il2CppBase() + 0x3C5BA44))(this, actorID, silentRemove);
	}
	template <typename T = bool> T Contains(uint32_t actorID) {
		return ((T (*)(CarePackageManager*, uint32_t))(Il2CppBase() + 0x3C5C530))(this, actorID);
	}
	template <typename T = uintptr_t> T Find(uint32_t actorID) {
		return ((T (*)(CarePackageManager*, uint32_t))(Il2CppBase() + 0x3C5D3A8))(this, actorID);
	}
	template <typename T = void> static T DeadReplayCommonDestory(uint32_t actorID) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x3C5D4A4))(0, actorID);
	}
	template <typename T = void> T CreateFakeCarePackage(Il2CppVector3 postion) {
		return ((T (*)(CarePackageManager*, Il2CppVector3))(Il2CppBase() + 0x3C5C60C))(this, postion);
	}
	template <typename T = void> T xLuaBaseProxy_Reset() {
		return ((T (*)(CarePackageManager*))(Il2CppBase() + 0x3C5D5F8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Shutdown() {
		return ((T (*)(CarePackageManager*))(Il2CppBase() + 0x3C5D600))(this);
	}

};

}
