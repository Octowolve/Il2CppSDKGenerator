#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class LevelUpTasksConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "LevelUpTasksConfig"));
	}

	template <typename T = uintptr_t> T& RewardType() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& RewardList() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& Id() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& AwardType() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& Level() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& TaskId() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uint32_t> T& TaskValue() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& AwardId1() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& AwardNum1() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& Duration1() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& SpecialAward1() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& AwardId2() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& AwardNum2() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& Duration2() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& SpecialAward2() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& AwardId3() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& AwardNum3() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& Duration3() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = bool> T& SpecialAward3() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = int32_t> T& AwardId4() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& AwardNum4() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = int32_t> T& Duration4() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = bool> T& SpecialAward4() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = int32_t> T& AwardId5() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = int32_t> T& AwardNum5() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = int32_t> T& Duration5() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = bool> T& SpecialAward5() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = int32_t> T& ChapterId() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = Il2CppString*> T& LocId_ChapterName() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = Il2CppString*> T& ChapterName() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = float> T& X() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = float> T& Y() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = float> T& Z() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = float> T& CenterY() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = int32_t> T& RX() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = float> T& RY() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = int32_t> T& RZ() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PostInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPrimaryKeyValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T PostInit() {
		return ((T (*)(LevelUpTasksConfig*))(Il2CppBase() + 0x37739E4))(this);
	}
	template <typename T = int32_t> T GetPrimaryKeyValue() {
		return ((T (*)(LevelUpTasksConfig*))(Il2CppBase() + 0x3773D20))(this);
	}
	template <typename T = int32_t> T get_Id() {
		return ((T (*)(LevelUpTasksConfig*))(Il2CppBase() + 0x3773DC0))(this);
	}
	template <typename T = void> T set_Id(int32_t value) {
		return ((T (*)(LevelUpTasksConfig*, int32_t))(Il2CppBase() + 0x3773DC8))(this, value);
	}
	template <typename T = int32_t> T get_AwardType() {
		return ((T (*)(LevelUpTasksConfig*))(Il2CppBase() + 0x3773C78))(this);
	}
	template <typename T = void> T set_AwardType(int32_t value) {
		return ((T (*)(LevelUpTasksConfig*, int32_t))(Il2CppBase() + 0x3773DD0))(this, value);
	}
	template <typename T = int32_t> T get_Level() {
		return ((T (*)(LevelUpTasksConfig*))(Il2CppBase() + 0x3773DD8))(this);
	}
	template <typename T = void> T set_Level(int32_t value) {
		return ((T (*)(LevelUpTasksConfig*, int32_t))(Il2CppBase() + 0x3773DE0))(this, value);
	}
	template <typename T = int32_t> T get_TaskId() {
		return ((T (*)(LevelUpTasksConfig*))(Il2CppBase() + 0x3773DE8))(this);
	}
	template <typename T = void> T set_TaskId(int32_t value) {
		return ((T (*)(LevelUpTasksConfig*, int32_t))(Il2CppBase() + 0x3773DF0))(this, value);
	}
	template <typename T = uint32_t> T get_TaskValue() {
		return ((T (*)(LevelUpTasksConfig*))(Il2CppBase() + 0x3773DF8))(this);
	}
	template <typename T = void> T set_TaskValue(uint32_t value) {
		return ((T (*)(LevelUpTasksConfig*, uint32_t))(Il2CppBase() + 0x3773E00))(this, value);
	}
	template <typename T = int32_t> T get_AwardId1() {
		return ((T (*)(LevelUpTasksConfig*))(Il2CppBase() + 0x3773C80))(this);
	}
	template <typename T = void> T set_AwardId1(int32_t value) {
		return ((T (*)(LevelUpTasksConfig*, int32_t))(Il2CppBase() + 0x3773E08))(this, value);
	}
	template <typename T = int32_t> T get_AwardNum1() {
		return ((T (*)(LevelUpTasksConfig*))(Il2CppBase() + 0x3773C88))(this);
	}
	template <typename T = void> T set_AwardNum1(int32_t value) {
		return ((T (*)(LevelUpTasksConfig*, int32_t))(Il2CppBase() + 0x3773E10))(this, value);
	}
	template <typename T = int32_t> T get_Duration1() {
		return ((T (*)(LevelUpTasksConfig*))(Il2CppBase() + 0x3773C90))(this);
	}
	template <typename T = void> T set_Duration1(int32_t value) {
		return ((T (*)(LevelUpTasksConfig*, int32_t))(Il2CppBase() + 0x3773E18))(this, value);
	}
	template <typename T = bool> T get_SpecialAward1() {
		return ((T (*)(LevelUpTasksConfig*))(Il2CppBase() + 0x3773C98))(this);
	}
	template <typename T = void> T set_SpecialAward1(bool value) {
		return ((T (*)(LevelUpTasksConfig*, bool))(Il2CppBase() + 0x3773E20))(this, value);
	}
	template <typename T = int32_t> T get_AwardId2() {
		return ((T (*)(LevelUpTasksConfig*))(Il2CppBase() + 0x3773CA0))(this);
	}
	template <typename T = void> T set_AwardId2(int32_t value) {
		return ((T (*)(LevelUpTasksConfig*, int32_t))(Il2CppBase() + 0x3773E28))(this, value);
	}
	template <typename T = int32_t> T get_AwardNum2() {
		return ((T (*)(LevelUpTasksConfig*))(Il2CppBase() + 0x3773CA8))(this);
	}
	template <typename T = void> T set_AwardNum2(int32_t value) {
		return ((T (*)(LevelUpTasksConfig*, int32_t))(Il2CppBase() + 0x3773E30))(this, value);
	}
	template <typename T = int32_t> T get_Duration2() {
		return ((T (*)(LevelUpTasksConfig*))(Il2CppBase() + 0x3773CB0))(this);
	}
	template <typename T = void> T set_Duration2(int32_t value) {
		return ((T (*)(LevelUpTasksConfig*, int32_t))(Il2CppBase() + 0x3773E38))(this, value);
	}
	template <typename T = bool> T get_SpecialAward2() {
		return ((T (*)(LevelUpTasksConfig*))(Il2CppBase() + 0x3773CB8))(this);
	}
	template <typename T = void> T set_SpecialAward2(bool value) {
		return ((T (*)(LevelUpTasksConfig*, bool))(Il2CppBase() + 0x3773E40))(this, value);
	}
	template <typename T = int32_t> T get_AwardId3() {
		return ((T (*)(LevelUpTasksConfig*))(Il2CppBase() + 0x3773CC0))(this);
	}
	template <typename T = void> T set_AwardId3(int32_t value) {
		return ((T (*)(LevelUpTasksConfig*, int32_t))(Il2CppBase() + 0x3773E48))(this, value);
	}
	template <typename T = int32_t> T get_AwardNum3() {
		return ((T (*)(LevelUpTasksConfig*))(Il2CppBase() + 0x3773CC8))(this);
	}
	template <typename T = void> T set_AwardNum3(int32_t value) {
		return ((T (*)(LevelUpTasksConfig*, int32_t))(Il2CppBase() + 0x3773E50))(this, value);
	}
	template <typename T = int32_t> T get_Duration3() {
		return ((T (*)(LevelUpTasksConfig*))(Il2CppBase() + 0x3773CD0))(this);
	}
	template <typename T = void> T set_Duration3(int32_t value) {
		return ((T (*)(LevelUpTasksConfig*, int32_t))(Il2CppBase() + 0x3773E58))(this, value);
	}
	template <typename T = bool> T get_SpecialAward3() {
		return ((T (*)(LevelUpTasksConfig*))(Il2CppBase() + 0x3773CD8))(this);
	}
	template <typename T = void> T set_SpecialAward3(bool value) {
		return ((T (*)(LevelUpTasksConfig*, bool))(Il2CppBase() + 0x3773E60))(this, value);
	}
	template <typename T = int32_t> T get_AwardId4() {
		return ((T (*)(LevelUpTasksConfig*))(Il2CppBase() + 0x3773CE0))(this);
	}
	template <typename T = void> T set_AwardId4(int32_t value) {
		return ((T (*)(LevelUpTasksConfig*, int32_t))(Il2CppBase() + 0x3773E68))(this, value);
	}
	template <typename T = int32_t> T get_AwardNum4() {
		return ((T (*)(LevelUpTasksConfig*))(Il2CppBase() + 0x3773CE8))(this);
	}
	template <typename T = void> T set_AwardNum4(int32_t value) {
		return ((T (*)(LevelUpTasksConfig*, int32_t))(Il2CppBase() + 0x3773E70))(this, value);
	}
	template <typename T = int32_t> T get_Duration4() {
		return ((T (*)(LevelUpTasksConfig*))(Il2CppBase() + 0x3773CF0))(this);
	}
	template <typename T = void> T set_Duration4(int32_t value) {
		return ((T (*)(LevelUpTasksConfig*, int32_t))(Il2CppBase() + 0x3773E78))(this, value);
	}
	template <typename T = bool> T get_SpecialAward4() {
		return ((T (*)(LevelUpTasksConfig*))(Il2CppBase() + 0x3773CF8))(this);
	}
	template <typename T = void> T set_SpecialAward4(bool value) {
		return ((T (*)(LevelUpTasksConfig*, bool))(Il2CppBase() + 0x3773E80))(this, value);
	}
	template <typename T = int32_t> T get_AwardId5() {
		return ((T (*)(LevelUpTasksConfig*))(Il2CppBase() + 0x3773D00))(this);
	}
	template <typename T = void> T set_AwardId5(int32_t value) {
		return ((T (*)(LevelUpTasksConfig*, int32_t))(Il2CppBase() + 0x3773E88))(this, value);
	}
	template <typename T = int32_t> T get_AwardNum5() {
		return ((T (*)(LevelUpTasksConfig*))(Il2CppBase() + 0x3773D08))(this);
	}
	template <typename T = void> T set_AwardNum5(int32_t value) {
		return ((T (*)(LevelUpTasksConfig*, int32_t))(Il2CppBase() + 0x3773E90))(this, value);
	}
	template <typename T = int32_t> T get_Duration5() {
		return ((T (*)(LevelUpTasksConfig*))(Il2CppBase() + 0x3773D10))(this);
	}
	template <typename T = void> T set_Duration5(int32_t value) {
		return ((T (*)(LevelUpTasksConfig*, int32_t))(Il2CppBase() + 0x3773E98))(this, value);
	}
	template <typename T = bool> T get_SpecialAward5() {
		return ((T (*)(LevelUpTasksConfig*))(Il2CppBase() + 0x3773D18))(this);
	}
	template <typename T = void> T set_SpecialAward5(bool value) {
		return ((T (*)(LevelUpTasksConfig*, bool))(Il2CppBase() + 0x3773EA0))(this, value);
	}
	template <typename T = int32_t> T get_ChapterId() {
		return ((T (*)(LevelUpTasksConfig*))(Il2CppBase() + 0x3773EA8))(this);
	}
	template <typename T = void> T set_ChapterId(int32_t value) {
		return ((T (*)(LevelUpTasksConfig*, int32_t))(Il2CppBase() + 0x3773EB0))(this, value);
	}
	template <typename T = Il2CppString*> T get_LocId_ChapterName() {
		return ((T (*)(LevelUpTasksConfig*))(Il2CppBase() + 0x3773EB8))(this);
	}
	template <typename T = void> T set_LocId_ChapterName(Il2CppString* value) {
		return ((T (*)(LevelUpTasksConfig*, Il2CppString*))(Il2CppBase() + 0x3773EC0))(this, value);
	}
	template <typename T = Il2CppString*> T get_ChapterName() {
		return ((T (*)(LevelUpTasksConfig*))(Il2CppBase() + 0x3773EC8))(this);
	}
	template <typename T = void> T set_ChapterName(Il2CppString* value) {
		return ((T (*)(LevelUpTasksConfig*, Il2CppString*))(Il2CppBase() + 0x3773ED0))(this, value);
	}
	template <typename T = float> T get_X() {
		return ((T (*)(LevelUpTasksConfig*))(Il2CppBase() + 0x3773ED8))(this);
	}
	template <typename T = void> T set_X(float value) {
		return ((T (*)(LevelUpTasksConfig*, float))(Il2CppBase() + 0x3773EE0))(this, value);
	}
	template <typename T = float> T get_Y() {
		return ((T (*)(LevelUpTasksConfig*))(Il2CppBase() + 0x3773EE8))(this);
	}
	template <typename T = void> T set_Y(float value) {
		return ((T (*)(LevelUpTasksConfig*, float))(Il2CppBase() + 0x3773EF0))(this, value);
	}
	template <typename T = float> T get_Z() {
		return ((T (*)(LevelUpTasksConfig*))(Il2CppBase() + 0x3773EF8))(this);
	}
	template <typename T = void> T set_Z(float value) {
		return ((T (*)(LevelUpTasksConfig*, float))(Il2CppBase() + 0x3773F00))(this, value);
	}
	template <typename T = float> T get_CenterY() {
		return ((T (*)(LevelUpTasksConfig*))(Il2CppBase() + 0x3773F08))(this);
	}
	template <typename T = void> T set_CenterY(float value) {
		return ((T (*)(LevelUpTasksConfig*, float))(Il2CppBase() + 0x3773F10))(this, value);
	}
	template <typename T = int32_t> T get_RX() {
		return ((T (*)(LevelUpTasksConfig*))(Il2CppBase() + 0x3773F18))(this);
	}
	template <typename T = void> T set_RX(int32_t value) {
		return ((T (*)(LevelUpTasksConfig*, int32_t))(Il2CppBase() + 0x3773F20))(this, value);
	}
	template <typename T = float> T get_RY() {
		return ((T (*)(LevelUpTasksConfig*))(Il2CppBase() + 0x3773F28))(this);
	}
	template <typename T = void> T set_RY(float value) {
		return ((T (*)(LevelUpTasksConfig*, float))(Il2CppBase() + 0x3773F30))(this, value);
	}
	template <typename T = int32_t> T get_RZ() {
		return ((T (*)(LevelUpTasksConfig*))(Il2CppBase() + 0x3773F38))(this);
	}
	template <typename T = void> T set_RZ(int32_t value) {
		return ((T (*)(LevelUpTasksConfig*, int32_t))(Il2CppBase() + 0x3773F40))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(LevelUpTasksConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x3773F48))(this, bytes, position);
	}
	template <typename T = void> T xLuaBaseProxy_PostInit() {
		return ((T (*)(LevelUpTasksConfig*))(Il2CppBase() + 0x3774388))(this);
	}

};

}
