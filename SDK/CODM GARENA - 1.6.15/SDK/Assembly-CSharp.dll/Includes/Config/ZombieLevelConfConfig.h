#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class ZombieLevelConfConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "ZombieLevelConfConfig"));
	}

	template <typename T = uintptr_t> T& StarCond1() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& StarCond2() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& StarCond3() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& ChapterId() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& StoryOrder() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& LevelID() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& LOCID_Name() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppString*> T& LevelType() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& X() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& Y() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& MapID() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& ModifierCount() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& ModifierWhitelist() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& ModifierBlacklist() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& UnlockPreLevelId() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& NeedPassPreLevel() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& PreviewAssetID() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& StarsNeed() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& FireNeed() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppString*> T& Star1_cond_str() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& Star1_param() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = Il2CppString*> T& Star2_cond_str() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> T& Star2_param() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = Il2CppString*> T& Star3_cond_str() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = int32_t> T& Star3_param() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = int32_t> T& DropItemID() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = int32_t> T& RestrictUltId() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PostInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSingleZombieLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPrimaryKeyValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = uintptr_t> T get_StarCond1() {
		return ((T (*)(ZombieLevelConfConfig*))(Il2CppBase() + 0x414D910))(this);
	}
	template <typename T = void> T set_StarCond1(uintptr_t value) {
		return ((T (*)(ZombieLevelConfConfig*, uintptr_t))(Il2CppBase() + 0x414D918))(this, value);
	}
	template <typename T = uintptr_t> T get_StarCond2() {
		return ((T (*)(ZombieLevelConfConfig*))(Il2CppBase() + 0x414D920))(this);
	}
	template <typename T = void> T set_StarCond2(uintptr_t value) {
		return ((T (*)(ZombieLevelConfConfig*, uintptr_t))(Il2CppBase() + 0x414D928))(this, value);
	}
	template <typename T = uintptr_t> T get_StarCond3() {
		return ((T (*)(ZombieLevelConfConfig*))(Il2CppBase() + 0x414D930))(this);
	}
	template <typename T = void> T set_StarCond3(uintptr_t value) {
		return ((T (*)(ZombieLevelConfConfig*, uintptr_t))(Il2CppBase() + 0x414D938))(this, value);
	}
	template <typename T = void> T PostInit() {
		return ((T (*)(ZombieLevelConfConfig*))(Il2CppBase() + 0x414D940))(this);
	}
	template <typename T = bool> static T IsSingleZombieLevel(int32_t levelID) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x414DA84))(0, levelID);
	}
	template <typename T = int32_t> T GetPrimaryKeyValue() {
		return ((T (*)(ZombieLevelConfConfig*))(Il2CppBase() + 0x414DB88))(this);
	}
	template <typename T = int32_t> T get_ChapterId() {
		return ((T (*)(ZombieLevelConfConfig*))(Il2CppBase() + 0x414DC30))(this);
	}
	template <typename T = void> T set_ChapterId(int32_t value) {
		return ((T (*)(ZombieLevelConfConfig*, int32_t))(Il2CppBase() + 0x414DC38))(this, value);
	}
	template <typename T = int32_t> T get_StoryOrder() {
		return ((T (*)(ZombieLevelConfConfig*))(Il2CppBase() + 0x414DC40))(this);
	}
	template <typename T = void> T set_StoryOrder(int32_t value) {
		return ((T (*)(ZombieLevelConfConfig*, int32_t))(Il2CppBase() + 0x414DC48))(this, value);
	}
	template <typename T = int32_t> T get_LevelID() {
		return ((T (*)(ZombieLevelConfConfig*))(Il2CppBase() + 0x414DC28))(this);
	}
	template <typename T = void> T set_LevelID(int32_t value) {
		return ((T (*)(ZombieLevelConfConfig*, int32_t))(Il2CppBase() + 0x414DC50))(this, value);
	}
	template <typename T = Il2CppString*> T get_LOCID_Name() {
		return ((T (*)(ZombieLevelConfConfig*))(Il2CppBase() + 0x414DC58))(this);
	}
	template <typename T = void> T set_LOCID_Name(Il2CppString* value) {
		return ((T (*)(ZombieLevelConfConfig*, Il2CppString*))(Il2CppBase() + 0x414DC60))(this, value);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(ZombieLevelConfConfig*))(Il2CppBase() + 0x414DC68))(this);
	}
	template <typename T = Il2CppString*> T get_LevelType() {
		return ((T (*)(ZombieLevelConfConfig*))(Il2CppBase() + 0x414DC78))(this);
	}
	template <typename T = void> T set_LevelType(Il2CppString* value) {
		return ((T (*)(ZombieLevelConfConfig*, Il2CppString*))(Il2CppBase() + 0x414DC80))(this, value);
	}
	template <typename T = int32_t> T get_X() {
		return ((T (*)(ZombieLevelConfConfig*))(Il2CppBase() + 0x414DC88))(this);
	}
	template <typename T = void> T set_X(int32_t value) {
		return ((T (*)(ZombieLevelConfConfig*, int32_t))(Il2CppBase() + 0x414DC90))(this, value);
	}
	template <typename T = int32_t> T get_Y() {
		return ((T (*)(ZombieLevelConfConfig*))(Il2CppBase() + 0x414DC98))(this);
	}
	template <typename T = void> T set_Y(int32_t value) {
		return ((T (*)(ZombieLevelConfConfig*, int32_t))(Il2CppBase() + 0x414DCA0))(this, value);
	}
	template <typename T = int32_t> T get_MapID() {
		return ((T (*)(ZombieLevelConfConfig*))(Il2CppBase() + 0x414DCA8))(this);
	}
	template <typename T = void> T set_MapID(int32_t value) {
		return ((T (*)(ZombieLevelConfConfig*, int32_t))(Il2CppBase() + 0x414DCB0))(this, value);
	}
	template <typename T = int32_t> T get_ModifierCount() {
		return ((T (*)(ZombieLevelConfConfig*))(Il2CppBase() + 0x414DCB8))(this);
	}
	template <typename T = void> T set_ModifierCount(int32_t value) {
		return ((T (*)(ZombieLevelConfConfig*, int32_t))(Il2CppBase() + 0x414DCC0))(this, value);
	}
	template <typename T = int32_t> T get_ModifierWhitelist() {
		return ((T (*)(ZombieLevelConfConfig*))(Il2CppBase() + 0x414DCC8))(this);
	}
	template <typename T = void> T set_ModifierWhitelist(int32_t value) {
		return ((T (*)(ZombieLevelConfConfig*, int32_t))(Il2CppBase() + 0x414DCD0))(this, value);
	}
	template <typename T = int32_t> T get_ModifierBlacklist() {
		return ((T (*)(ZombieLevelConfConfig*))(Il2CppBase() + 0x414DCD8))(this);
	}
	template <typename T = void> T set_ModifierBlacklist(int32_t value) {
		return ((T (*)(ZombieLevelConfConfig*, int32_t))(Il2CppBase() + 0x414DCE0))(this, value);
	}
	template <typename T = int32_t> T get_UnlockPreLevelId() {
		return ((T (*)(ZombieLevelConfConfig*))(Il2CppBase() + 0x414DCE8))(this);
	}
	template <typename T = void> T set_UnlockPreLevelId(int32_t value) {
		return ((T (*)(ZombieLevelConfConfig*, int32_t))(Il2CppBase() + 0x414DCF0))(this, value);
	}
	template <typename T = int32_t> T get_NeedPassPreLevel() {
		return ((T (*)(ZombieLevelConfConfig*))(Il2CppBase() + 0x414DCF8))(this);
	}
	template <typename T = void> T set_NeedPassPreLevel(int32_t value) {
		return ((T (*)(ZombieLevelConfConfig*, int32_t))(Il2CppBase() + 0x414DD00))(this, value);
	}
	template <typename T = int32_t> T get_PreviewAssetID() {
		return ((T (*)(ZombieLevelConfConfig*))(Il2CppBase() + 0x414DD08))(this);
	}
	template <typename T = void> T set_PreviewAssetID(int32_t value) {
		return ((T (*)(ZombieLevelConfConfig*, int32_t))(Il2CppBase() + 0x414DD10))(this, value);
	}
	template <typename T = int32_t> T get_StarsNeed() {
		return ((T (*)(ZombieLevelConfConfig*))(Il2CppBase() + 0x414DD18))(this);
	}
	template <typename T = void> T set_StarsNeed(int32_t value) {
		return ((T (*)(ZombieLevelConfConfig*, int32_t))(Il2CppBase() + 0x414DD20))(this, value);
	}
	template <typename T = int32_t> T get_FireNeed() {
		return ((T (*)(ZombieLevelConfConfig*))(Il2CppBase() + 0x414DD28))(this);
	}
	template <typename T = void> T set_FireNeed(int32_t value) {
		return ((T (*)(ZombieLevelConfConfig*, int32_t))(Il2CppBase() + 0x414DD30))(this, value);
	}
	template <typename T = Il2CppString*> T get_Star1_cond_str() {
		return ((T (*)(ZombieLevelConfConfig*))(Il2CppBase() + 0x414DA6C))(this);
	}
	template <typename T = void> T set_Star1_cond_str(Il2CppString* value) {
		return ((T (*)(ZombieLevelConfConfig*, Il2CppString*))(Il2CppBase() + 0x414DD38))(this, value);
	}
	template <typename T = int32_t> T get_Star1_param() {
		return ((T (*)(ZombieLevelConfConfig*))(Il2CppBase() + 0x414DD40))(this);
	}
	template <typename T = void> T set_Star1_param(int32_t value) {
		return ((T (*)(ZombieLevelConfConfig*, int32_t))(Il2CppBase() + 0x414DD48))(this, value);
	}
	template <typename T = Il2CppString*> T get_Star2_cond_str() {
		return ((T (*)(ZombieLevelConfConfig*))(Il2CppBase() + 0x414DA74))(this);
	}
	template <typename T = void> T set_Star2_cond_str(Il2CppString* value) {
		return ((T (*)(ZombieLevelConfConfig*, Il2CppString*))(Il2CppBase() + 0x414DD50))(this, value);
	}
	template <typename T = int32_t> T get_Star2_param() {
		return ((T (*)(ZombieLevelConfConfig*))(Il2CppBase() + 0x414DD58))(this);
	}
	template <typename T = void> T set_Star2_param(int32_t value) {
		return ((T (*)(ZombieLevelConfConfig*, int32_t))(Il2CppBase() + 0x414DD60))(this, value);
	}
	template <typename T = Il2CppString*> T get_Star3_cond_str() {
		return ((T (*)(ZombieLevelConfConfig*))(Il2CppBase() + 0x414DA7C))(this);
	}
	template <typename T = void> T set_Star3_cond_str(Il2CppString* value) {
		return ((T (*)(ZombieLevelConfConfig*, Il2CppString*))(Il2CppBase() + 0x414DD68))(this, value);
	}
	template <typename T = int32_t> T get_Star3_param() {
		return ((T (*)(ZombieLevelConfConfig*))(Il2CppBase() + 0x414DD70))(this);
	}
	template <typename T = void> T set_Star3_param(int32_t value) {
		return ((T (*)(ZombieLevelConfConfig*, int32_t))(Il2CppBase() + 0x414DD78))(this, value);
	}
	template <typename T = int32_t> T get_DropItemID() {
		return ((T (*)(ZombieLevelConfConfig*))(Il2CppBase() + 0x414DD80))(this);
	}
	template <typename T = void> T set_DropItemID(int32_t value) {
		return ((T (*)(ZombieLevelConfConfig*, int32_t))(Il2CppBase() + 0x414DD88))(this, value);
	}
	template <typename T = int32_t> T get_RestrictUltId() {
		return ((T (*)(ZombieLevelConfConfig*))(Il2CppBase() + 0x414DD90))(this);
	}
	template <typename T = void> T set_RestrictUltId(int32_t value) {
		return ((T (*)(ZombieLevelConfConfig*, int32_t))(Il2CppBase() + 0x414DD98))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(ZombieLevelConfConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x414DDA0))(this, bytes, position);
	}
	template <typename T = void> T xLuaBaseProxy_PostInit() {
		return ((T (*)(ZombieLevelConfConfig*))(Il2CppBase() + 0x414E124))(this);
	}

};

}
