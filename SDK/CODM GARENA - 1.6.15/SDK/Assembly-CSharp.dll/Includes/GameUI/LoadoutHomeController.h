#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class LoadoutHomeController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "LoadoutHomeController"));
	}

	template <typename T = bool> static T& bM4Equipped() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> static T& bOpticEquipped() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1);
	}
	template <typename T = bool> static T& bLathelEquipped() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2);
	}
	template <typename T = bool> static T& bWeaponUpgradeIntroduced() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3);
	}
	template <typename T = bool> static T& bFromWeaponPromotionView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> T& mView() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& f__am$cache1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& f__am$cache2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& f__am$cache3() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& f__am$cache4() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& f__am$cache5() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& f__am$cache6() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& f__am$cache7() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& f__am$cache8() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& f__am$cache9() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& f__am$cacheA() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_T_LoadoutAndWeapon_1_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_T_Lathel_1_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_T_LoadoutHomeController_Go() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyUpdateReddotData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSuiteDetailBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}

	template <typename T = void> T T_LoadoutAndWeapon_1_Init() {
		return ((T (*)(LoadoutHomeController*))(Il2CppBase() + 0x1A4494C))(this);
	}
	template <typename T = void> T T_Lathel_1_Init() {
		return ((T (*)(LoadoutHomeController*))(Il2CppBase() + 0x1A44EAC))(this);
	}
	template <typename T = void> T T_LoadoutHomeController_Go() {
		return ((T (*)(LoadoutHomeController*))(Il2CppBase() + 0x1A45684))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(LoadoutHomeController*))(Il2CppBase() + 0x1A462E8))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(LoadoutHomeController*))(Il2CppBase() + 0x1A463BC))(this);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(LoadoutHomeController*))(Il2CppBase() + 0x1A46504))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(LoadoutHomeController*))(Il2CppBase() + 0x1A465E0))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(LoadoutHomeController*))(Il2CppBase() + 0x1A467B0))(this);
	}
	template <typename T = void> T OnNotifyUpdateReddotData(uintptr_t message) {
		return ((T (*)(LoadoutHomeController*, uintptr_t))(Il2CppBase() + 0x1A4690C))(this, message);
	}
	template <typename T = void> T OnSuiteDetailBtnClick() {
		return ((T (*)(LoadoutHomeController*))(Il2CppBase() + 0x1A469F4))(this);
	}
	template <typename T = void> T T_LoadoutAndWeapon_1_Initm__0(uintptr_t tutorialType, Il2CppArray<uintptr_t>* info) {
		return ((T (*)(LoadoutHomeController*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1A46C0C))(this, tutorialType, info);
	}
	template <typename T = void> T T_LoadoutAndWeapon_1_Initm__1(uintptr_t tutorialType, Il2CppArray<uintptr_t>* info) {
		return ((T (*)(LoadoutHomeController*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1A46DF8))(this, tutorialType, info);
	}
	template <typename T = void> T T_LoadoutAndWeapon_1_Initm__2(uintptr_t tutorialType, Il2CppArray<uintptr_t>* info) {
		return ((T (*)(LoadoutHomeController*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1A46FE8))(this, tutorialType, info);
	}
	template <typename T = void> T T_LoadoutAndWeapon_1_Initm__3(uintptr_t tutorialType, Il2CppArray<uintptr_t>* info) {
		return ((T (*)(LoadoutHomeController*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1A471D8))(this, tutorialType, info);
	}
	template <typename T = void> static T T_LoadoutAndWeapon_1_Initm__4(uintptr_t tutorialType, Il2CppArray<uintptr_t>* info) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1A47338))(0, tutorialType, info);
	}
	template <typename T = void> T T_LoadoutAndWeapon_1_Initm__5(uintptr_t tutorialType, Il2CppArray<uintptr_t>* info) {
		return ((T (*)(LoadoutHomeController*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1A475A4))(this, tutorialType, info);
	}
	template <typename T = void> T T_LoadoutAndWeapon_1_Initm__6(uintptr_t tutorialType, Il2CppArray<uintptr_t>* info) {
		return ((T (*)(LoadoutHomeController*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1A476F4))(this, tutorialType, info);
	}
	template <typename T = void> T T_Lathel_1_Initm__7(uintptr_t tutorialType, Il2CppArray<uintptr_t>* info) {
		return ((T (*)(LoadoutHomeController*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1A47880))(this, tutorialType, info);
	}
	template <typename T = void> T T_Lathel_1_Initm__8(uintptr_t tutorialType, Il2CppArray<uintptr_t>* info) {
		return ((T (*)(LoadoutHomeController*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1A47B38))(this, tutorialType, info);
	}
	template <typename T = void> static T T_Lathel_1_Initm__9(uintptr_t tutorialType, Il2CppArray<uintptr_t>* info) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1A47CD8))(0, tutorialType, info);
	}
	template <typename T = void> T T_Lathel_1_Initm__A(uintptr_t tutorialType, Il2CppArray<uintptr_t>* info) {
		return ((T (*)(LoadoutHomeController*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1A47F44))(this, tutorialType, info);
	}
	template <typename T = void> T T_Lathel_1_Initm__B(uintptr_t tutorialType, Il2CppArray<uintptr_t>* info) {
		return ((T (*)(LoadoutHomeController*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1A48094))(this, tutorialType, info);
	}
	template <typename T = void> static T T_Lathel_1_Initm__C(uintptr_t tutorialType, Il2CppArray<uintptr_t>* info) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1A4834C))(0, tutorialType, info);
	}
	template <typename T = void> T T_Lathel_1_Initm__D(uintptr_t tutorialType, Il2CppArray<uintptr_t>* info) {
		return ((T (*)(LoadoutHomeController*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1A485B8))(this, tutorialType, info);
	}
	template <typename T = void> static T T_Lathel_1_Initm__E(uintptr_t tutorialType, Il2CppArray<uintptr_t>* info) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1A48708))(0, tutorialType, info);
	}
	template <typename T = void> T T_Lathel_1_Initm__F(uintptr_t tutorialType, Il2CppArray<uintptr_t>* info) {
		return ((T (*)(LoadoutHomeController*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1A48974))(this, tutorialType, info);
	}
	template <typename T = void> static T T_LoadoutHomeController_Gom__10() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A48B00))(0);
	}
	template <typename T = void> static T T_LoadoutAndWeapon_1_Initm__11() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A48BFC))(0);
	}
	template <typename T = void> static T T_Lathel_1_Initm__12() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A48CF8))(0);
	}
	template <typename T = void> static T T_Lathel_1_Initm__13() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A48E38))(0);
	}
	template <typename T = void> static T T_Lathel_1_Initm__14() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A48F34))(0);
	}
	template <typename T = void> static T T_Lathel_1_Initm__15() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A49074))(0);
	}
	template <typename T = void> static T T_Lathel_1_Initm__16() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A49170))(0);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(LoadoutHomeController*))(Il2CppBase() + 0x1A4926C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(LoadoutHomeController*))(Il2CppBase() + 0x1A49274))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(LoadoutHomeController*))(Il2CppBase() + 0x1A49278))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(LoadoutHomeController*))(Il2CppBase() + 0x1A4927C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(LoadoutHomeController*))(Il2CppBase() + 0x1A49280))(this);
	}

};

}
