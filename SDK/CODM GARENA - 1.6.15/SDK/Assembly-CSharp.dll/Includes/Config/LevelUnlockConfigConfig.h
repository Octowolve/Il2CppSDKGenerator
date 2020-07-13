#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class LevelUnlockConfigConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "LevelUnlockConfigConfig"));
	}

	template <typename T = uintptr_t> T& PractMode() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& EUnlockMode() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& EUnlockType() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& Seq_no() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& Pract_mode() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& UnlockMode() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& Level() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& UnlockType() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& UnlockLoadoutIndex() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& UnlockID() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& Number() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& Duration() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppString*> T& UnLockDesc() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& Show() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& Milestone() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppString*> T& LOCID_UnlockText() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& GoPos() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& Icon() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = float> T& Pos_x() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = float> T& Pos_y() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = float> T& Pos_z() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& f__am$cache1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = void*> static T& f__am$cache2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = void*> static T& f__am$cache3() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = void*> static T& f__am$cache4() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = void*> static T& f__am$cache5() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = void*> static T& f__am$cache6() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = void*> static T& f__am$cache7() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PostInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsReachLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetUnlockItemListAtLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMileStoneUnlockList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetNextUnlockConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsLoadoutSlotUnlock() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSlotUnlockLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSystemUnlock() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_IsSystemUnlock() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SystemUnlockLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsGameModeUnlock() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetGameModeUnlockLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsLoadoutUnlock() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLoadoutUnlockLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsCompositeUnlock() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCompositeUnlockLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBRModeUnlockLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetZMModeUnlockLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}

	template <typename T = void> T PostInit() {
		return ((T (*)(LevelUnlockConfigConfig*))(Il2CppBase() + 0x3770C10))(this);
	}
	template <typename T = bool> static T IsReachLevel(int32_t level, uintptr_t mode) {
		return ((T (*)(void *, int32_t, uintptr_t))(Il2CppBase() + 0x3770CDC))(0, level, mode);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T GetUnlockItemListAtLevel(int32_t level, uintptr_t mode) {
		return ((T (*)(void *, int32_t, uintptr_t))(Il2CppBase() + 0x3770E2C))(0, level, mode);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T GetMileStoneUnlockList() {
		return ((T (*)(void *))(Il2CppBase() + 0x3771578))(0);
	}
	template <typename T = uintptr_t> static T GetNextUnlockConfig(int32_t level) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x37717B4))(0, level);
	}
	template <typename T = bool> static T IsLoadoutSlotUnlock(uintptr_t squadType, uintptr_t pos, int32_t loadoutIdx, uintptr_t* unlockLevel) {
		return ((T (*)(void *, uintptr_t, uintptr_t, int32_t, uintptr_t*))(Il2CppBase() + 0x3771A7C))(0, squadType, pos, loadoutIdx, unlockLevel);
	}
	template <typename T = int32_t> static T GetSlotUnlockLevel(uintptr_t squadType, uintptr_t pos, int32_t loadoutIdx, uintptr_t* mode) {
		return ((T (*)(void *, uintptr_t, uintptr_t, int32_t, uintptr_t*))(Il2CppBase() + 0x3771B6C))(0, squadType, pos, loadoutIdx, mode);
	}
	template <typename T = bool> static T IsSystemUnlock(uintptr_t systemType, uintptr_t* levelNeed) {
		return ((T (*)(void *, uintptr_t, uintptr_t*))(Il2CppBase() + 0x3771E2C))(0, systemType, levelNeed);
	}
	template <typename T = bool> static T IsSystemUnlock_1(uintptr_t systemType) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x377217C))(0, systemType);
	}
	template <typename T = int32_t> static T SystemUnlockLevel(uintptr_t systemType, uintptr_t* mode) {
		return ((T (*)(void *, uintptr_t, uintptr_t*))(Il2CppBase() + 0x3771F00))(0, systemType, mode);
	}
	template <typename T = bool> static T IsGameModeUnlock(uintptr_t gameMode) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x377224C))(0, gameMode);
	}
	template <typename T = int32_t> static T GetGameModeUnlockLevel(uintptr_t mode) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x37722EC))(0, mode);
	}
	template <typename T = bool> static T IsLoadoutUnlock(uintptr_t squadType, int32_t loadoutIndex) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x377238C))(0, squadType, loadoutIndex);
	}
	template <typename T = int32_t> static T GetLoadoutUnlockLevel(uintptr_t squadType, int32_t loadoutIndex) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x3772440))(0, squadType, loadoutIndex);
	}
	template <typename T = bool> static T IsCompositeUnlock(int32_t compositeId) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x37726C4))(0, compositeId);
	}
	template <typename T = int32_t> static T GetCompositeUnlockLevel(int32_t compositeId, uintptr_t* mode) {
		return ((T (*)(void *, int32_t, uintptr_t*))(Il2CppBase() + 0x377278C))(0, compositeId, mode);
	}
	template <typename T = int32_t> static T GetBRModeUnlockLevel() {
		return ((T (*)(void *))(Il2CppBase() + 0x3772A10))(0);
	}
	template <typename T = int32_t> static T GetZMModeUnlockLevel() {
		return ((T (*)(void *))(Il2CppBase() + 0x3772C00))(0);
	}
	template <typename T = int32_t> T get_Seq_no() {
		return ((T (*)(LevelUnlockConfigConfig*))(Il2CppBase() + 0x3772DF0))(this);
	}
	template <typename T = void> T set_Seq_no(int32_t value) {
		return ((T (*)(LevelUnlockConfigConfig*, int32_t))(Il2CppBase() + 0x3772DF8))(this, value);
	}
	template <typename T = int32_t> T get_Pract_mode() {
		return ((T (*)(LevelUnlockConfigConfig*))(Il2CppBase() + 0x3770CC4))(this);
	}
	template <typename T = void> T set_Pract_mode(int32_t value) {
		return ((T (*)(LevelUnlockConfigConfig*, int32_t))(Il2CppBase() + 0x3772E00))(this, value);
	}
	template <typename T = int32_t> T get_UnlockMode() {
		return ((T (*)(LevelUnlockConfigConfig*))(Il2CppBase() + 0x3770CCC))(this);
	}
	template <typename T = void> T set_UnlockMode(int32_t value) {
		return ((T (*)(LevelUnlockConfigConfig*, int32_t))(Il2CppBase() + 0x3772E08))(this, value);
	}
	template <typename T = int32_t> T get_Level() {
		return ((T (*)(LevelUnlockConfigConfig*))(Il2CppBase() + 0x3771480))(this);
	}
	template <typename T = void> T set_Level(int32_t value) {
		return ((T (*)(LevelUnlockConfigConfig*, int32_t))(Il2CppBase() + 0x3772E10))(this, value);
	}
	template <typename T = int32_t> T get_UnlockType() {
		return ((T (*)(LevelUnlockConfigConfig*))(Il2CppBase() + 0x3770CD4))(this);
	}
	template <typename T = void> T set_UnlockType(int32_t value) {
		return ((T (*)(LevelUnlockConfigConfig*, int32_t))(Il2CppBase() + 0x3772E18))(this, value);
	}
	template <typename T = int32_t> T get_UnlockLoadoutIndex() {
		return ((T (*)(LevelUnlockConfigConfig*))(Il2CppBase() + 0x3771E24))(this);
	}
	template <typename T = void> T set_UnlockLoadoutIndex(int32_t value) {
		return ((T (*)(LevelUnlockConfigConfig*, int32_t))(Il2CppBase() + 0x3772E20))(this, value);
	}
	template <typename T = int32_t> T get_UnlockID() {
		return ((T (*)(LevelUnlockConfigConfig*))(Il2CppBase() + 0x3771490))(this);
	}
	template <typename T = void> T set_UnlockID(int32_t value) {
		return ((T (*)(LevelUnlockConfigConfig*, int32_t))(Il2CppBase() + 0x3772E28))(this, value);
	}
	template <typename T = int32_t> T get_Number() {
		return ((T (*)(LevelUnlockConfigConfig*))(Il2CppBase() + 0x3771570))(this);
	}
	template <typename T = void> T set_Number(int32_t value) {
		return ((T (*)(LevelUnlockConfigConfig*, int32_t))(Il2CppBase() + 0x3772E30))(this, value);
	}
	template <typename T = int32_t> T get_Duration() {
		return ((T (*)(LevelUnlockConfigConfig*))(Il2CppBase() + 0x3772E38))(this);
	}
	template <typename T = void> T set_Duration(int32_t value) {
		return ((T (*)(LevelUnlockConfigConfig*, int32_t))(Il2CppBase() + 0x3772E40))(this, value);
	}
	template <typename T = Il2CppString*> T get_UnLockDesc() {
		return ((T (*)(LevelUnlockConfigConfig*))(Il2CppBase() + 0x3772E48))(this);
	}
	template <typename T = void> T set_UnLockDesc(Il2CppString* value) {
		return ((T (*)(LevelUnlockConfigConfig*, Il2CppString*))(Il2CppBase() + 0x3772E50))(this, value);
	}
	template <typename T = int32_t> T get_Show() {
		return ((T (*)(LevelUnlockConfigConfig*))(Il2CppBase() + 0x3771488))(this);
	}
	template <typename T = void> T set_Show(int32_t value) {
		return ((T (*)(LevelUnlockConfigConfig*, int32_t))(Il2CppBase() + 0x3772E58))(this, value);
	}
	template <typename T = int32_t> T get_Milestone() {
		return ((T (*)(LevelUnlockConfigConfig*))(Il2CppBase() + 0x3772E60))(this);
	}
	template <typename T = void> T set_Milestone(int32_t value) {
		return ((T (*)(LevelUnlockConfigConfig*, int32_t))(Il2CppBase() + 0x3772E68))(this, value);
	}
	template <typename T = Il2CppString*> T get_LOCID_UnlockText() {
		return ((T (*)(LevelUnlockConfigConfig*))(Il2CppBase() + 0x3772E70))(this);
	}
	template <typename T = void> T set_LOCID_UnlockText(Il2CppString* value) {
		return ((T (*)(LevelUnlockConfigConfig*, Il2CppString*))(Il2CppBase() + 0x3772E78))(this, value);
	}
	template <typename T = Il2CppString*> T get_UnlockText() {
		return ((T (*)(LevelUnlockConfigConfig*))(Il2CppBase() + 0x3771558))(this);
	}
	template <typename T = int32_t> T get_GoPos() {
		return ((T (*)(LevelUnlockConfigConfig*))(Il2CppBase() + 0x3771568))(this);
	}
	template <typename T = void> T set_GoPos(int32_t value) {
		return ((T (*)(LevelUnlockConfigConfig*, int32_t))(Il2CppBase() + 0x3772E80))(this, value);
	}
	template <typename T = int32_t> T get_Icon() {
		return ((T (*)(LevelUnlockConfigConfig*))(Il2CppBase() + 0x3771498))(this);
	}
	template <typename T = void> T set_Icon(int32_t value) {
		return ((T (*)(LevelUnlockConfigConfig*, int32_t))(Il2CppBase() + 0x3772E88))(this, value);
	}
	template <typename T = float> T get_Pos_x() {
		return ((T (*)(LevelUnlockConfigConfig*))(Il2CppBase() + 0x3772E90))(this);
	}
	template <typename T = void> T set_Pos_x(float value) {
		return ((T (*)(LevelUnlockConfigConfig*, float))(Il2CppBase() + 0x3772E98))(this, value);
	}
	template <typename T = float> T get_Pos_y() {
		return ((T (*)(LevelUnlockConfigConfig*))(Il2CppBase() + 0x3772EA0))(this);
	}
	template <typename T = void> T set_Pos_y(float value) {
		return ((T (*)(LevelUnlockConfigConfig*, float))(Il2CppBase() + 0x3772EA8))(this, value);
	}
	template <typename T = float> T get_Pos_z() {
		return ((T (*)(LevelUnlockConfigConfig*))(Il2CppBase() + 0x3772EB0))(this);
	}
	template <typename T = void> T set_Pos_z(float value) {
		return ((T (*)(LevelUnlockConfigConfig*, float))(Il2CppBase() + 0x3772EB8))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(LevelUnlockConfigConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x3772EC0))(this, bytes, position);
	}
	template <typename T = bool> static T GetUnlockItemListAtLevelm__0(uintptr_t it) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x37731B4))(0, it);
	}
	template <typename T = bool> static T GetMileStoneUnlockListm__1(uintptr_t it) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x37731E4))(0, it);
	}
	template <typename T = int32_t> static T GetMileStoneUnlockListm__2(uintptr_t a, uintptr_t b) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x37731EC))(0, a, b);
	}
	template <typename T = bool> static T SystemUnlockLevelm__3(uintptr_t it) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x377322C))(0, it);
	}
	template <typename T = bool> static T GetLoadoutUnlockLevelm__4(uintptr_t it) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x377325C))(0, it);
	}
	template <typename T = bool> static T GetCompositeUnlockLevelm__5(uintptr_t it) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x377328C))(0, it);
	}
	template <typename T = bool> static T GetBRModeUnlockLevelm__6(uintptr_t it) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x37732BC))(0, it);
	}
	template <typename T = bool> static T GetZMModeUnlockLevelm__7(uintptr_t it) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x37732FC))(0, it);
	}
	template <typename T = void> T xLuaBaseProxy_PostInit() {
		return ((T (*)(LevelUnlockConfigConfig*))(Il2CppBase() + 0x377333C))(this);
	}

};

}
